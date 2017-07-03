#include <fstream>
//#include <wx/artprov.h>
#include <wx/wx.h>
#include <wx/slider.h>
#include "myFrame.h"
#include "myThread.h"
#include "../touhou/touhou.h"

#define STEREO16 AL_FORMAT_STEREO16

// Improve this later...
const int SLIDER_ID = 100;
const int LISTBOX_TH16TR_ID = 10000;
const int LISTBOX_TH15_ID = 10001;
const int LISTBOX_TH14_ID = 10002;
const int LISTBOX_TH143_ID = 10003;
const int LISTBOX_TH125_ID = 10004;
const int LISTBOX_TH128_ID = 10005;
const int LISTBOX_TH12_ID = 10006;
const int LISTBOX_TH11_ID = 10007;
const int LISTBOX_TH10_ID = 10008;
const int LISTBOX_TH095_ID = 10009;
const int LISTBOX_TH09_ID = 10010;
const int LISTBOX_TH08_ID = 10011;
const int LISTBOX_TH07_ID = 10012;
const int LISTBOX_TH06_ID = 10013;
const int LISTBOX_TH13_ID = 10014;


MyFrame::MyFrame(wxFrame* parent, const wxString& title, wxSize& size) :
    wxFrame(parent, -1, title, wxDefaultPosition, size), state(STOP), curGame(-1), curTrack(-1), path(nullptr) {
    wxMenuBar* menuBar = new wxMenuBar;
    wxMenu* menu_File = new wxMenu;
    wxMenu* menu_Game = new wxMenu;
    wxMenu* menu_Playback = new wxMenu;
    wxMenu* menu_About = new wxMenu;
    
    panel = new wxPanel(this, -1);

    listBox = new wxListBox(panel, LISTBOX_TH16TR_ID, wxPoint(-1, -1), wxSize(250, 200));
    volumeSlider = new wxSlider(panel, SLIDER_ID, 20, 0, 100, wxPoint(356, 232), wxDefaultSize, wxSL_HORIZONTAL);

    listBox->Append(wxT("01 桜舞い散る天空"));
    listBox->Append(wxT("02 希望の星は青霄に昇る"));
    listBox->Append(wxT("03 真夏の妖精の夢"));
    listBox->Append(wxT("04 色無き風は妖怪の山に"));
    listBox->Append(wxT("05 山奥のエンカウンター"));
    listBox->Append(wxT("06 桜色の海を泳いで"));
    listBox->Append(wxT("07 一対の神獣"));

    //listBox_TH16TR->SetId(LISTBOX_TH14_ID);
    //listBox_TH16TR->Destroy();

    menuBar->Append(menu_File, wxT("&File"));
    menu_File->Append(OPEN, wxT("Set Path"));
    //menu_File->Append(QUIT, "Exit");
    menuBar->Append(menu_Game, wxT("&Game"));
    menu_Game->Append(TH07, wxT("TH07 東方妖々夢"));
    menu_Game->Append(TH08, wxT("TH08 東方永夜抄"));
    menu_Game->Append(TH09, wxT("TH09 東方花映塚"));
    menu_Game->Append(TH095, wxT("TH095 東方文花帖"));
    menu_Game->Append(TH10, wxT("TH10 東方風神録"));
    menu_Game->Append(TH11, wxT("TH11 東方地霊殿"));
    menu_Game->Append(TH12, wxT("TH12 東方星蓮船"));
    menu_Game->Append(TH125, wxT("TH125 東方文花帖DS"));
    menu_Game->Append(TH128, wxT("TH128 妖精大戦争"));
    menu_Game->Append(TH13, wxT("TH13 東方神霊廟"));
    menu_Game->Append(TH14, wxT("TH14 東方輝針城"));
    menu_Game->Append(TH143, wxT("TH143 弾幕アマノジャク"));
    menu_Game->Append(TH15, wxT("TH15 東方紺珠伝"));
    menu_Game->Append(TH16TR, wxT("TH16 東方天空璋"));
    menuBar->Append(menu_Playback, wxT("&Playback"));
    menu_Playback->Append(PLAY, wxT("Play"));
    menu_Playback->Append(PAUSE, wxT("Pause"));
    menu_Playback->Append(STOP, wxT("Stop"));
    menuBar->Append(menu_About, wxT("About"));
    menu_About->Append(ABOUT, wxT("About"));
    SetMenuBar(menuBar);

    state = STOP;
    //wxButton* button_OK = new wxButton(this, wxID_OK, "OK");
    
    /*
    wxToolBar* toolBar = CreateToolBar();
    wxBitmap icon_New = wxArtProvider::GetBitmap(wxART_NEW, wxART_TOOLBAR);
    wxBitmap icon_Open = wxArtProvider::GetBitmap(wxART_FILE_OPEN, wxART_TOOLBAR);
    wxBitmap icon_Save = wxArtProvider::GetBitmap(wxART_FILE_SAVE, wxART_TOOLBAR);
    wxBitmap icon_Play = wxArtProvider::GetBitmap(wxART_GOTO_LAST, wxART_TOOLBAR);
    wxBitmap icon_About = wxArtProvider::GetBitmap(wxART_INFORMATION, wxART_TOOLBAR);
    wxBitmap icon_Quit = wxArtProvider::GetBitmap(wxART_QUIT, wxART_TOOLBAR);
    */


    /*
    toolBar->AddTool(NEW, "New File", icon_New, "New File");
    toolBar->AddTool(OPEN, "Pause", icon_Open, "Pause");
    toolBar->AddTool(SAVE, "Stop", icon_Save, "Stop");
    toolBar->AddTool(PLAY, "Play", icon_Play, "Play");
    toolBar->AddTool(ABOUT, "About", icon_About, "About");
    toolBar->AddTool(EXIT, "Quit", icon_Quit, "Quit");
    toolBar->Realize();
    */

    // OpenAL
    // Initialize
    device = alcOpenDevice(NULL);
    if (device == NULL) {
        wxMessageBox(wxT("Error: Cannot open audio device"));
    }

    context = alcCreateContext(device, NULL);
    if (!alcMakeContextCurrent(context)) {
        wxMessageBox(wxT("Error: Cannot create context"));
        alcCloseDevice(device);
    }

    //wxString s(wxT("HAHA"));
    //wxCharBuffer buffer = s.ToUTF8();
}

MyFrame::MyFrame(wxFrame* parent, const wxString& title,
    wxSize& size, wxPoint& position) :
    wxFrame(parent, -1, title, position, size) {

}

void MyFrame::OnOpen(wxCommandEvent& event) {
    wxFileDialog* openDialog = new wxFileDialog(this, wxT("Select thbgm.dat"), "", "", "DAT files (*.dat)|thbgm.dat");
    char* ptr;
    if (openDialog->ShowModal() == wxID_OK) {
        ptr = (const_cast<char*>((const char*)openDialog->GetPath().mb_str().data()));
        if (path)
            delete[] path;
        path = new char[strlen(ptr) + 1];
        strcpy(path, ptr);
        //wxMessageBox(wxString::FromUTF8(path));
    }
}

void MyFrame::OnDClick_TH07(wxCommandEvent& event) {
    curGame = TH07;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH08(wxCommandEvent& event) {
    curGame = TH08;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH09(wxCommandEvent& event) {
    curGame = TH09;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH095(wxCommandEvent& event) {
    curGame = TH095;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH10(wxCommandEvent& event) {
    curGame = TH10;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH11(wxCommandEvent& event) {
    curGame = TH11;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH12(wxCommandEvent& event) {
    curGame = TH12;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH125(wxCommandEvent& event) {
    curGame = TH125;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH128(wxCommandEvent& event) {
    curGame = TH128;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH13(wxCommandEvent& event) {
    curGame = TH13;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH14(wxCommandEvent& event) {
    curGame = TH14;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH143(wxCommandEvent& event) {
    curGame = TH143;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH15(wxCommandEvent& event) {
    curGame = TH15;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnDClick_TH16TR(wxCommandEvent& event) {
    curGame = TH16TR;
    curTrack = listBox->GetSelection() + 1;
    changeBuffers(curGame, curTrack);
    play();
}

void MyFrame::OnQuit(wxCommandEvent& event) {
    alSourceStop(source);
    //Sleep(400);
    alGetError();
    alDeleteSources(1, &source);
    if (alGetError() != AL_NO_ERROR) {
        wxMessageBox(wxT("delete sources error"));
    }

    alDeleteBuffers(2, buffer);

    alcMakeContextCurrent(NULL);
    alcDestroyContext(context);
    alcCloseDevice(device);

    Close();
}

void MyFrame::OnAbout(wxCommandEvent& event) {
    wxMessageBox(wxT("ThMP (Touhou Mini Player) v0.0.1\nAuthor: winghearn"), "About",
        wxOK | wxICON_INFORMATION, this);
}

void MyFrame::OnButton(wxCommandEvent& event) {
    wxMessageBox(wxT("WA CHOUJI"), "WARNING", wxOK | wxICON_INFORMATION, this);
}

void MyFrame::OnPlay(wxCommandEvent& event) {
    play();
}

void MyFrame::OnPause(wxCommandEvent& event) {
    pause();
}

void MyFrame::OnStop(wxCommandEvent& event) {
    stop();
}

void MyFrame::OnUpdate(wxCommandEvent& event) {
    if (!loopFlag) {
        alGetSourcei(source, AL_BUFFERS_PROCESSED, &bufferProcessed);
        if (bufferProcessed > 0) {
            alSourceUnqueueBuffers(source, 1, buffer);
            alSourcei(source, AL_LOOPING, AL_TRUE);
            loopFlag = true;
        }
    }
}

void MyFrame::OnScroll(wxCommandEvent& event) {
    alSourcef(source, AL_GAIN, volumeSlider->GetValue() * 0.01);
}

void MyFrame::OnClose(wxCloseEvent& event) {
    alSourceStop(source);
    //Sleep(400);
    alGetError();
    alDeleteSources(1, &source);
    alGetError();
    alDeleteBuffers(2, buffer);
    alGetError();

    alcMakeContextCurrent(NULL);
    Sleep(400);
    alcDestroyContext(context);
    alcCloseDevice(device);
        //wxMessageBox("Device closed not properly");
 
    Destroy();
}

void MyFrame::OnSwitchTH07(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 妖々夢　～ Snow or Cherry Petal"));
    listBox->Append(wxT("02 無何有の郷　～ Deep Mountain"));
    listBox->Append(wxT("03 クリスタライズシルバー"));
    listBox->Append(wxT("04 遠野幻想物語"));
    listBox->Append(wxT("05 ティアオイエツォン(withered leaf)"));
    listBox->Append(wxT("06 ブクレシュティの人形師"));
    listBox->Append(wxT("07 人形裁判　～ 人の形弄びし少女"));
    listBox->Append(wxT("08 天空の花の都"));
    listBox->Append(wxT("09 幽霊楽団　～ Phantom Ensemble"));
    listBox->Append(wxT("10 東方妖々夢　～ Ancient Temple"));
    listBox->Append(wxT("11 広有射怪鳥事　～ Till When?"));
    listBox->Append(wxT("12 アルティメットトゥルース"));
    listBox->Append(wxT("13 幽雅に咲かせ、墨染の桜　～ Border of Life"));
    listBox->Append(wxT("14 ボーダーオブライフ"));
    listBox->Append(wxT("15 妖々跋扈"));
    listBox->Append(wxT("16 少女幻葬　～ Necro-Fantasy"));
    listBox->Append(wxT("17 妖々跋扈　～ Who done it!"));
    listBox->Append(wxT("18 ネクロファンタジア"));
    listBox->Append(wxT("19 春風の夢"));
    listBox->Append(wxT("20 さくらさくら　～ Japanize Dream..."));
    listBox->SetId(LISTBOX_TH07_ID);
}

void MyFrame::OnSwitchTH08(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 永夜抄　～ Eastern Night"));
    listBox->Append(wxT("02 幻視の夜　～ Ghostly Eyes"));
    listBox->Append(wxT("03 蠢々秋月　～ Mooned Insect"));
    listBox->Append(wxT("04 夜雀の歌声　～ Night Bird"));
    listBox->Append(wxT("05 もう歌しか聞こえない"));
    listBox->Append(wxT("06 懐かしき東方の血　～ Old World"));
    listBox->Append(wxT("07 プレインエイジア"));
    listBox->Append(wxT("08 永夜の報い　～ Imperishable Night"));
    listBox->Append(wxT("09 少女綺想曲　～ Dream Battle"));
    listBox->Append(wxT("10 恋色マスタースパーク"));
    listBox->Append(wxT("11 シンデレラケージ　～ Kagome-Kagome"));
    listBox->Append(wxT("12 狂気の瞳　～ Invisible Full Moon"));
    listBox->Append(wxT("13 ヴォヤージュ1969"));
    listBox->Append(wxT("14 千年幻想郷　～ History of the Moon"));
    listBox->Append(wxT("15 竹取飛翔　～ Lunatic Princess"));
    listBox->Append(wxT("16 ヴォヤージュ1970"));
    listBox->Append(wxT("17 エクステンドアッシュ　～ 蓬莱人"));
    listBox->Append(wxT("18 月まで届け、不死の煙"));
    listBox->Append(wxT("19 月見草"));
    listBox->Append(wxT("20 Eternal Dream　～ 幽玄の槭樹"));
    listBox->Append(wxT("21 東方妖怪小町"));
    listBox->SetId(LISTBOX_TH08_ID);
}

void MyFrame::OnSwitchTH09(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 花映塚　～ Higan Retour"));
    listBox->Append(wxT("02 春色小径　～ Colorful Path"));
    listBox->Append(wxT("03 オリエンタルダークフライト"));
    listBox->Append(wxT("04 フラワリングナイト"));
    listBox->Append(wxT("05 東方妖々夢　～ Ancient Temple"));
    listBox->Append(wxT("06 狂気の瞳　～ Invisible Full Moon"));
    listBox->Append(wxT("07 おてんば恋娘の冒険"));
    listBox->Append(wxT("08 幽霊楽団　～ Phantom Ensemble"));
    listBox->Append(wxT("09 もう歌しか聞こえない　～ Flower Mix"));
    listBox->Append(wxT("10 お宇佐さまの素い幡"));
    listBox->Append(wxT("11 風神少女(Short Version)"));
    listBox->Append(wxT("12 ポイズンボディ　～ Forsaken Doll"));
    listBox->Append(wxT("13 今昔幻想郷　～ Flower Land"));
    listBox->Append(wxT("14 彼岸帰航　～ Riverside View"));
    listBox->Append(wxT("15 六十年目の東方裁判　～ Fate of Sixty Years"));
    listBox->Append(wxT("16 花の映る塚"));
    listBox->Append(wxT("17 此岸の塚"));
    listBox->Append(wxT("18 花は幻想のままに"));
    listBox->Append(wxT("19 魂の花　～ Another Dream..."));
    listBox->SetId(LISTBOX_TH09_ID);
}

void MyFrame::OnSwitchTH095(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 天狗の手帖　～ Mysterious Note"));
    listBox->Append(wxT("02 風の循環　～ Wind Tour"));
    listBox->Append(wxT("03 天狗が見ている　～ Black Eyes"));
    listBox->Append(wxT("04 東の国の眠らない夜"));
    listBox->Append(wxT("05 レトロスペクティブ京都"));
    listBox->Append(wxT("06 風神少女"));
    listBox->SetId(LISTBOX_TH095_ID);
}

void MyFrame::OnSwitchTH10(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 封印されし神々"));
    listBox->Append(wxT("02 人恋し神様　～ Romantic Fall"));
    listBox->Append(wxT("03 稲田姫様に叱られるから"));
    listBox->Append(wxT("04 厄神様の通り道　～ Dark Road"));
    listBox->Append(wxT("05 運命のダークサイド"));
    listBox->Append(wxT("06 神々が恋した幻想郷"));
    listBox->Append(wxT("07 芥川龍之介の河童　～ Candid Friend"));
    listBox->Append(wxT("08 フォールオブフォール　～ 秋めく滝"));
    listBox->Append(wxT("09 妖怪の山　～ Mysterious Mountain"));
    listBox->Append(wxT("10 少女が見た日本の原風景"));
    listBox->Append(wxT("11 信仰は儚き人間の為に"));
    listBox->Append(wxT("12 御柱の墓場　～ Grave of Being"));
    listBox->Append(wxT("13 神さびた古戦場　～ Suwa Foughten Field"));
    listBox->Append(wxT("14 明日ハレの日、ケの昨日"));
    listBox->Append(wxT("15 ネイティブフェイス"));
    listBox->Append(wxT("16 麓の神社"));
    listBox->Append(wxT("17 神は恵みの雨を降らす　～ Sylphid Dream"));
    listBox->Append(wxT("18 プレイヤーズスコア"));
    listBox->SetId(LISTBOX_TH10_ID);
}

void MyFrame::OnSwitchTH11(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 地霊達の起床"));
    listBox->Append(wxT("02 暗闇の風穴"));
    listBox->Append(wxT("03 封じられた妖怪　～ Lost Place"));
    listBox->Append(wxT("04 渡る者の途絶えた橋"));
    listBox->Append(wxT("05 緑眼のジェラシー"));
    listBox->Append(wxT("06 旧地獄街道を行く"));
    listBox->Append(wxT("07 華のさかづき大江山"));
    listBox->Append(wxT("08 ハートフェルトファンシー"));
    listBox->Append(wxT("09 少女さとり　～ 3rd eye"));
    listBox->Append(wxT("10 廃獄ララバイ"));
    listBox->Append(wxT("11 死体旅行　～ Be of good cheer!"));
    listBox->Append(wxT("12 業火マントル"));
    listBox->Append(wxT("13 霊知の太陽信仰　～ Nuclear Fusion"));
    listBox->Append(wxT("14 ラストリモート"));
    listBox->Append(wxT("15 ハルトマンの妖怪少女"));
    listBox->Append(wxT("16 地霊達の帰宅"));
    listBox->Append(wxT("17 エネルギー黎明 ～ Future Dream..."));
    listBox->SetId(LISTBOX_TH11_ID);
}

void MyFrame::OnSwitchTH12(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 青空の影"));
    listBox->Append(wxT("02 春の湊に"));
    listBox->Append(wxT("03 小さな小さな賢将"));
    listBox->Append(wxT("04 閉ざせし雲の通い路"));
    listBox->Append(wxT("05 万年置き傘にご注意を"));
    listBox->Append(wxT("06 スカイルーイン"));
    listBox->Append(wxT("07 時代親父とハイカラ少女"));
    listBox->Append(wxT("08 幽霊客船の時空を越えた旅"));
    listBox->Append(wxT("09 キャプテン・ムラサ"));
    listBox->Append(wxT("10 魔界地方都市エソテリア"));
    listBox->Append(wxT("11 虎柄の毘沙門天"));
    listBox->Append(wxT("12 法界の火"));
    listBox->Append(wxT("13 感情の摩天楼　～ Cosmic Mind"));
    listBox->Append(wxT("14 夜空のユーフォーロマンス"));
    listBox->Append(wxT("15 平安のエイリアン"));
    listBox->Append(wxT("16 妖怪寺"));
    listBox->Append(wxT("17 空の帰り道　～ Sky Dream"));
    listBox->SetId(LISTBOX_TH12_ID);
}

void MyFrame::OnSwitchTH125(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 ニュースハウンド"));
    listBox->Append(wxT("02 あなたの町の怪事件"));
    listBox->Append(wxT("03 妖怪モダンコロニー"));
    listBox->Append(wxT("04 ネメシスの要塞"));
    listBox->Append(wxT("05 無間の鐘　～ Infinite Nightmare"));
    listBox->Append(wxT("06 妖怪の山　～ Mysterious Mountain"));
    listBox->Append(wxT("07 曲名不詳"));
    listBox->SetId(LISTBOX_TH125_ID);
}

void MyFrame::OnSwitchTH128(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 春の氷精"));
    listBox->Append(wxT("02 可愛い大戦争のリフレーン"));
    listBox->Append(wxT("03 いたずらに命をかけて"));
    listBox->Append(wxT("04 年中夢中の好奇心"));
    listBox->Append(wxT("05 真夜中のフェアリーダンス"));
    listBox->Append(wxT("06 妖精大戦争　～ Fairy Wars"));
    listBox->Append(wxT("07 ルーズレイン"));
    listBox->Append(wxT("08 メイガスナイト"));
    listBox->Append(wxT("09 春の氷精　- 静 -"));
    listBox->Append(wxT("10 プレイヤーズスコア"));
    listBox->SetId(LISTBOX_TH128_ID);
}

void MyFrame::OnSwitchTH13(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 欲深き霊魂"));
    listBox->Append(wxT("02 死霊の夜桜"));
    listBox->Append(wxT("03 ゴーストリード"));
    listBox->Append(wxT("04 妖怪寺へようこそ"));
    listBox->Append(wxT("05 門前の妖怪小娘"));
    listBox->Append(wxT("06 素敵な墓場で暮しましょ"));
    listBox->Append(wxT("07 リジッドパラダイス"));
    listBox->Append(wxT("08 デザイアドライブ"));
    listBox->Append(wxT("09 古きユアンシェン"));
    listBox->Append(wxT("10 夢殿大祀廟"));
    listBox->Append(wxT("11 大神神話伝"));
    listBox->Append(wxT("12 小さな欲望の星空"));
    listBox->Append(wxT("13 聖徳伝説　～ True Administrator"));
    listBox->Append(wxT("14 妖怪裏参道"));
    listBox->Append(wxT("15 佐渡の二ッ岩"));
    listBox->Append(wxT("16 神社の新しい風"));
    listBox->Append(wxT("17 デザイアドリーム"));
    listBox->SetId(LISTBOX_TH13_ID);
}

void MyFrame::OnSwitchTH14(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 不思議なお祓い棒"));
    listBox->Append(wxT("02 ミストレイク"));
    listBox->Append(wxT("03 秘境のマーメイド"));
    listBox->Append(wxT("04 運河を行き交う人妖"));
    listBox->Append(wxT("05 柳の下のデュラハン"));
    listBox->Append(wxT("06 満月の竹林"));
    listBox->Append(wxT("07 孤独なウェアウルフ"));
    listBox->Append(wxT("08 マジカルストーム"));
    listBox->Append(wxT("09 幻想浄瑠璃"));
    listBox->Append(wxT("10 空中に沈む輝針城"));
    listBox->Append(wxT("11 リバースイデオロギー"));
    listBox->Append(wxT("12 針小棒大の天守閣"));
    listBox->Append(wxT("13 輝く針の小人族　～ Little Princess"));
    listBox->Append(wxT("14 魔力の雷雲"));
    listBox->Append(wxT("15 始原のビート　～ Pristine Beat"));
    listBox->Append(wxT("16 小槌の魔力")); 
    listBox->Append(wxT("17 不思議な不思議な道具達"));
    listBox->SetId(LISTBOX_TH14_ID);
}

void MyFrame::OnSwitchTH143(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 反則の狼煙を上げろ"));
    listBox->Append(wxT("02 不可能弾幕には反則を"));
    listBox->Append(wxT("03 ミッドナイトスペルカード"));
    listBox->Append(wxT("04 ロマンチック逃飛行"));
    listBox->Append(wxT("05 永遠の三日天下"));
    listBox->Append(wxT("06 秘境のマーメイド"));
    listBox->Append(wxT("07 リバースイデオロギー"));
    listBox->Append(wxT("08 幻想浄瑠璃"));
    listBox->Append(wxT("09 妖怪の山　～ Mysterious Mountain"));
    listBox->SetId(LISTBOX_TH143_ID);
}

void MyFrame::OnSwitchTH15(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 宇宙巫女現る"));
    listBox->Append(wxT("02 忘れがたき、よすがの緑"));
    listBox->Append(wxT("03 兎は舞い降りた"));
    listBox->Append(wxT("04 湖は浄めの月光を映して"));
    listBox->Append(wxT("05 九月のパンプキン"));
    listBox->Append(wxT("06 宇宙を飛ぶ不思議な巫女"));
    listBox->Append(wxT("07 永遠の春夢"));
    listBox->Append(wxT("08 凍り付いた永遠の都"));
    listBox->Append(wxT("09 逆転するホイールオブフォーチュン"));
    listBox->Append(wxT("10 遥か３８万キロのボヤージュ"));
    listBox->Append(wxT("11 星条旗のピエロ"));
    listBox->Append(wxT("12 故郷の星が映る海"));
    listBox->Append(wxT("13 ピュアヒューリーズ　～ 心の在処"));
    listBox->Append(wxT("14 見た事も無い悪夢の世界"));
    listBox->Append(wxT("15 パンデモニックプラネット"));
    listBox->Append(wxT("16 神社から見える月"));
    listBox->Append(wxT("17 宇宙巫女帰還する"));
    listBox->SetId(LISTBOX_TH15_ID);
}

void MyFrame::OnSwitchTH16TR(wxCommandEvent& event) {
    listBox->Clear();
    listBox->Append(wxT("01 桜舞い散る天空"));
    listBox->Append(wxT("02 希望の星は青霄に昇る"));
    listBox->Append(wxT("03 真夏の妖精の夢"));
    listBox->Append(wxT("04 色無き風は妖怪の山に"));
    listBox->Append(wxT("05 山奥のエンカウンター"));
    listBox->Append(wxT("06 桜色の海を泳いで"));
    listBox->Append(wxT("07 一対の神獣"));
    listBox->SetId(LISTBOX_TH16TR_ID);
}

void MyFrame::createSource() {
    ALfloat sourcePos[] = {0.0, 0.0, 0.0};
    ALfloat sourceVel[] = {0.0, 0.0, 0.0};
    ALfloat listenerPos[] = {0.0, 0.0, 0.0};
    ALfloat listenerVel[] = {0.0, 0.0, 0.0};
    ALfloat listenerOri[] = {0.0, 0.0, -1.0, 0.0, 1.0, 0.0};

    alGenSources(1, &source);
    alListenerfv(AL_POSITION, listenerPos);
    alListenerfv(AL_VELOCITY, listenerVel);
    alListenerfv(AL_ORIENTATION, listenerOri);
    alSourcef(source, AL_PITCH, 1.0f);
    alSourcef(source, AL_GAIN, volumeSlider->GetValue() * 0.01);
    alSourcefv(source, AL_POSITION, sourcePos);
    alSourcefv(source, AL_VELOCITY, sourceVel);
    alSourcei(source, AL_LOOPING, AL_FALSE);
}

void MyFrame::loadInfo(int game, int track) {  // mapping 
    introOffset = gameMap.at(game).at(std::make_pair(track, "INTRO_OFFSET"));
    introSize = gameMap.at(game).at(std::make_pair(track, "INTRO_SIZE"));
    loopOffset = introOffset + introSize;
    loopSize = gameMap.at(game).at(std::make_pair(track, "TOTAL_SIZE")) - introSize;

    /*
    switch (game) {
        case TH13:
            switch (track) {
                case 1:
                    introOffset = TH13_INTRO_OFFSET_01;
                    introSize = TH13_INTRO_SIZE_01;
                    loopOffset = TH13_INTRO_OFFSET_01 + TH13_INTRO_SIZE_01;
                    loopSize = TH13_TOTAL_SIZE_01 - TH13_INTRO_SIZE_01;
                    break;
                case 2:
                    introOffset = TH13_INTRO_OFFSET_02;
                    introSize = TH13_INTRO_SIZE_02;
                    loopOffset = TH13_INTRO_OFFSET_02 + TH13_INTRO_SIZE_02;
                    loopSize = TH13_TOTAL_SIZE_02 - TH13_INTRO_SIZE_02;
                    break;
                case 3:
                    introOffset = TH13_INTRO_OFFSET_04;
                    introSize = TH13_INTRO_SIZE_04;
                    loopOffset = TH13_INTRO_OFFSET_04 + TH13_INTRO_SIZE_04;
                    loopSize = TH13_TOTAL_SIZE_04 - TH13_INTRO_SIZE_04;
                    break;
                case 4:
                    introOffset = TH13_INTRO_OFFSET_06;
                    introSize = TH13_INTRO_SIZE_06;
                    loopOffset = TH13_INTRO_OFFSET_06 + TH13_INTRO_SIZE_06;
                    loopSize = TH13_TOTAL_SIZE_06 - TH13_INTRO_SIZE_06;
                    break;
                case 5:
                    introOffset = TH13_INTRO_OFFSET_08;
                    introSize = TH13_INTRO_SIZE_08;
                    loopOffset = TH13_INTRO_OFFSET_08 + TH13_INTRO_SIZE_08;
                    loopSize = TH13_TOTAL_SIZE_08 - TH13_INTRO_SIZE_08;
                    break;
                case 6:
                    introOffset = TH13_INTRO_OFFSET_10;
                    introSize = TH13_INTRO_SIZE_10;
                    loopOffset = TH13_INTRO_OFFSET_10 + TH13_INTRO_SIZE_10;
                    loopSize = TH13_TOTAL_SIZE_10 - TH13_INTRO_SIZE_10;
                    break;
                case 7:
                    introOffset = TH13_INTRO_OFFSET_12;
                    introSize = TH13_INTRO_SIZE_12;
                    loopOffset = TH13_INTRO_OFFSET_12 + TH13_INTRO_SIZE_12;
                    loopSize = TH13_TOTAL_SIZE_12 - TH13_INTRO_SIZE_12;
                    break;
                case 8:
                    introOffset = TH13_INTRO_OFFSET_14;
                    introSize = TH13_INTRO_SIZE_14;
                    loopOffset = TH13_INTRO_OFFSET_14 + TH13_INTRO_SIZE_14;
                    loopSize = TH13_TOTAL_SIZE_14 - TH13_INTRO_SIZE_14;
                    break;
                case 9:
                    introOffset = TH13_INTRO_OFFSET_16;
                    introSize = TH13_INTRO_SIZE_16;
                    loopOffset = TH13_INTRO_OFFSET_16 + TH13_INTRO_SIZE_16;
                    loopSize = TH13_TOTAL_SIZE_16 - TH13_INTRO_SIZE_16;
                    break;
                case 10:
                    introOffset = TH13_INTRO_OFFSET_18;
                    introSize = TH13_INTRO_SIZE_18;
                    loopOffset = TH13_INTRO_OFFSET_18 + TH13_INTRO_SIZE_18;
                    loopSize = TH13_TOTAL_SIZE_18 - TH13_INTRO_SIZE_18;
                    break;
                case 11:
                    introOffset = TH13_INTRO_OFFSET_20;
                    introSize = TH13_INTRO_SIZE_20;
                    loopOffset = TH13_INTRO_OFFSET_20 + TH13_INTRO_SIZE_20;
                    loopSize = TH13_TOTAL_SIZE_20 - TH13_INTRO_SIZE_20;
                    break;
                case 12:
                    introOffset = TH13_INTRO_OFFSET_22;
                    introSize = TH13_INTRO_SIZE_22;
                    loopOffset = TH13_INTRO_OFFSET_22 + TH13_INTRO_SIZE_22;
                    loopSize = TH13_TOTAL_SIZE_22 - TH13_INTRO_SIZE_22;
                    break;
                case 13:
                    introOffset = TH13_INTRO_OFFSET_24;
                    introSize = TH13_INTRO_SIZE_24;
                    loopOffset = TH13_INTRO_OFFSET_24 + TH13_INTRO_SIZE_24;
                    loopSize = TH13_TOTAL_SIZE_24 - TH13_INTRO_SIZE_24;
                    break;
                case 14:
                    introOffset = TH13_INTRO_OFFSET_27;
                    introSize = TH13_INTRO_SIZE_27;
                    loopOffset = TH13_INTRO_OFFSET_27 + TH13_INTRO_SIZE_27;
                    loopSize = TH13_TOTAL_SIZE_27 - TH13_INTRO_SIZE_27;
                    break;
                case 15:
                    introOffset = TH13_INTRO_OFFSET_29;
                    introSize = TH13_INTRO_SIZE_29;
                    loopOffset = TH13_INTRO_OFFSET_29 + TH13_INTRO_SIZE_29;
                    loopSize = TH13_TOTAL_SIZE_29 - TH13_INTRO_SIZE_29;
                    break;
                case 16:
                    introOffset = TH13_INTRO_OFFSET_25;
                    introSize = TH13_INTRO_SIZE_25;
                    loopOffset = TH13_INTRO_OFFSET_25 + TH13_INTRO_SIZE_25;
                    loopSize = TH13_TOTAL_SIZE_25 - TH13_INTRO_SIZE_25;
                    break;
                case 17:
                    introOffset = TH13_INTRO_OFFSET_26;
                    introSize = TH13_INTRO_SIZE_26;
                    loopOffset = TH13_INTRO_OFFSET_26 + TH13_INTRO_SIZE_26;
                    loopSize = TH13_TOTAL_SIZE_26 - TH13_INTRO_SIZE_26;
                    break;
            }

            break;
    }
    */
}

void MyFrame::createBuffers() {
    std::ifstream file;
    char* data;

    alGenBuffers(2, buffer);

    if (path) {
        file.open(path, std::ios::in | std::ios::binary);
        if (!file) {
            wxMessageBox(wxT("Error: thbgm.dat does not exist!!"), "Error",
                wxOK | wxICON_EXCLAMATION, this);
            file.close();
            return;
        }
    }
    else {
        wxMessageBox(wxT("Error: thbgm.dat not loaded!!"), "Error",
            wxOK | wxICON_EXCLAMATION, this);
        return;
    }

    file.seekg(introOffset, std::ios::beg);
    data = new char[introSize];
    file.read(data, introSize);
    alBufferData(buffer[0], FORMAT, data, introSize, FREQUENCY);
    delete[] data;

    file.seekg(loopOffset, std::ios::beg);
    data = new char[loopSize];
    file.read(data, loopSize);
    alBufferData(buffer[1], FORMAT, data, loopSize, FREQUENCY);
    delete[] data;

    file.close();
}

void MyFrame::createBuffers_TH13(int track) {
    // TODO's
}

void MyFrame::changeBuffers(int game, int track) {
    if (state == PLAY || state == PAUSE) {
        alSourceStop(source);
        alGetError();
        alDeleteSources(1, &source);
        alGetError();
        alDeleteBuffers(2, buffer);
        alGetError();
    }

    loadInfo(game, track);
    createSource();
    createBuffers();
    /*
    if (game != TH13)
        createBuffers();
    else
        createBuffers_TH13(track);
    */
    bufferProcessed = 0;
    loopFlag = false;
    alSourceQueueBuffers(source, 2, buffer);
}

int MyFrame::getState() {
    return state;
}

void MyFrame::play() {
    if (state == PLAY || state == STOP) {
        alSourceStop(source);
        bufferProcessed = 0;
        loopFlag = false;
        alDeleteSources(1, &source);
        createSource();
        alSourceQueueBuffers(source, 2, buffer);
    }

    alSourcePlay(source);
    state = PLAY;
}

void MyFrame::pause() {
    if (state == PLAY) {
        alSourcePause(source);
        state = PAUSE;
    }
}

void MyFrame::stop() {
    if (state == PLAY || state == PAUSE) {
        alSourceStop(source);
        alGetError();
        alDeleteSources(1, &source);
        alGetError();
        alDeleteBuffers(2, buffer);
        alGetError();
        state = STOP;
    }
}

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(OPEN, OnOpen)
    EVT_MENU(QUIT, OnQuit)
    EVT_MENU(ABOUT, OnAbout)
    EVT_MENU(PLAY, OnPlay)
    EVT_MENU(PAUSE, OnPause)
    EVT_MENU(STOP, OnStop)
    EVT_MENU(TH07, OnSwitchTH07)
    EVT_MENU(TH08, OnSwitchTH08)
    EVT_MENU(TH09, OnSwitchTH09)
    EVT_MENU(TH095, OnSwitchTH095)
    EVT_MENU(TH10, OnSwitchTH10)
    EVT_MENU(TH11, OnSwitchTH11)
    EVT_MENU(TH12, OnSwitchTH12)
    EVT_MENU(TH125, OnSwitchTH125)
    EVT_MENU(TH128, OnSwitchTH128)
    EVT_MENU(TH13, OnSwitchTH13)
    EVT_MENU(TH14, OnSwitchTH14)
    EVT_MENU(TH143, OnSwitchTH143)
    EVT_MENU(TH15, OnSwitchTH15)
    EVT_MENU(TH16TR, OnSwitchTH16TR)
    //EVT_BUTTON(wxID_OK, OnButton)
    EVT_LISTBOX_DCLICK(LISTBOX_TH07_ID, OnDClick_TH07)
    EVT_LISTBOX_DCLICK(LISTBOX_TH08_ID, OnDClick_TH08)
    EVT_LISTBOX_DCLICK(LISTBOX_TH09_ID, OnDClick_TH09)
    EVT_LISTBOX_DCLICK(LISTBOX_TH095_ID, OnDClick_TH095)
    EVT_LISTBOX_DCLICK(LISTBOX_TH10_ID, OnDClick_TH10)
    EVT_LISTBOX_DCLICK(LISTBOX_TH11_ID, OnDClick_TH11)
    EVT_LISTBOX_DCLICK(LISTBOX_TH12_ID, OnDClick_TH12)
    EVT_LISTBOX_DCLICK(LISTBOX_TH125_ID, OnDClick_TH125)
    EVT_LISTBOX_DCLICK(LISTBOX_TH128_ID, OnDClick_TH128)
    EVT_LISTBOX_DCLICK(LISTBOX_TH13_ID, OnDClick_TH13)
    EVT_LISTBOX_DCLICK(LISTBOX_TH14_ID, OnDClick_TH14)
    EVT_LISTBOX_DCLICK(LISTBOX_TH143_ID, OnDClick_TH143)
    EVT_LISTBOX_DCLICK(LISTBOX_TH15_ID, OnDClick_TH15)
    EVT_LISTBOX_DCLICK(LISTBOX_TH16TR_ID, OnDClick_TH16TR)
    EVT_SLIDER(SLIDER_ID, OnScroll)
    EVT_COMMAND(UPDATE_ID, wxEVT_COMMAND_TEXT_UPDATED, OnUpdate)
    EVT_CLOSE(OnClose)
END_EVENT_TABLE()
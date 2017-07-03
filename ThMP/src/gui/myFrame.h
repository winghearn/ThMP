#pragma once
#ifndef MYFRAME_H
#define MYFRAME_H
#include <map>
#include <wx/wx.h>
#include <al.h>
#include <alc.h>

enum Event_ID {
    NEW,
    OPEN,
    SAVE,
    ABOUT,
    PLAY,
    PAUSE,
    STOP,
    QUIT,
    SWITCH_TH14,
    SWITCH_TH143,
    SWITCH_TH16TR,
};

class MyFrame : public wxFrame {
    public:
        MyFrame(wxFrame*, const wxString&, wxSize&);
        MyFrame(wxFrame*, const wxString&, wxSize&, wxPoint&);
        void OnOpen(wxCommandEvent&);
        void OnDClick_TH07(wxCommandEvent&);
        void OnDClick_TH08(wxCommandEvent&);
        void OnDClick_TH09(wxCommandEvent&);
        void OnDClick_TH095(wxCommandEvent&);
        void OnDClick_TH10(wxCommandEvent&);
        void OnDClick_TH11(wxCommandEvent&);
        void OnDClick_TH12(wxCommandEvent&);
        void OnDClick_TH125(wxCommandEvent&);
        void OnDClick_TH128(wxCommandEvent&);
        void OnDClick_TH13(wxCommandEvent&);
        void OnDClick_TH14(wxCommandEvent&);
        void OnDClick_TH143(wxCommandEvent&);
        void OnDClick_TH15(wxCommandEvent&);
        void OnDClick_TH16TR(wxCommandEvent&);
        void OnQuit(wxCommandEvent&);
        void OnAbout(wxCommandEvent&);
        void OnButton(wxCommandEvent&);
        void OnPlay(wxCommandEvent&);
        void OnPause(wxCommandEvent&);
        void OnStop(wxCommandEvent&);
        void OnUpdate(wxCommandEvent&);
        void OnScroll(wxCommandEvent&);
        void OnClose(wxCloseEvent&);
        void OnSwitchTH07(wxCommandEvent&);
        void OnSwitchTH08(wxCommandEvent&);
        void OnSwitchTH09(wxCommandEvent&);
        void OnSwitchTH095(wxCommandEvent&);
        void OnSwitchTH10(wxCommandEvent&);
        void OnSwitchTH11(wxCommandEvent&);
        void OnSwitchTH12(wxCommandEvent&);
        void OnSwitchTH125(wxCommandEvent&);
        void OnSwitchTH128(wxCommandEvent&);
        void OnSwitchTH13(wxCommandEvent&);
        void OnSwitchTH14(wxCommandEvent&);
        void OnSwitchTH143(wxCommandEvent&);
        void OnSwitchTH15(wxCommandEvent&);
        void OnSwitchTH16TR(wxCommandEvent&);
        void createSource(void);
        void loadInfo(int, int);
        void createBuffers(void);
        void createBuffers_TH13(int);
        void changeBuffers(int, int);
        int getState(void);
        void play(void);
        void pause(void);
        void stop(void);

    private:
        wxPanel* panel;
        wxListBox* listBox;
        wxSlider* volumeSlider;
        ALCdevice* device;
        ALCcontext* context;
        ALuint buffer[2];
        ALuint source;
        ALint bufferProcessed;
        bool loopFlag;
        int state;
        unsigned int introOffset;
        unsigned int introSize;
        unsigned int loopOffset;
        unsigned int loopSize;
        int curGame;
        int curTrack;
        char* path;

        DECLARE_EVENT_TABLE()
};

#endif

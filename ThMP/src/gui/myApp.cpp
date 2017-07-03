#include "myApp.h"
#include "myFrame.h"
#include "myThread.h"

bool MyApp::OnInit() {
    frame = new MyFrame(NULL, "ThMP v0.0.1", wxSize(480, 320));
    frame->Show();

    // Create the thread
    MyThread* thread = new MyThread(frame);
    wxThreadError err = thread->Create();

    // Check error
    if (err != wxTHREAD_NO_ERROR) {
        wxMessageBox(_("ERROR: Couldn't create thread!"));
        return false;
    }

    err = thread->Run();

    if (err != wxTHREAD_NO_ERROR) {
        wxMessageBox(_("ERROR: Couldn't run thread!"));
        return false;
    }

    return true;
}
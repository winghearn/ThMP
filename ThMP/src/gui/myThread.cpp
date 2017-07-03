#include "myThread.h"

MyThread::MyThread(wxFrame* parent) {
    this->parent = parent;
}

wxThread::ExitCode MyThread::Entry() {
    while (true) {
        this->Sleep(200);

        // notify the main thread
        wxCommandEvent updateEvent(wxEVT_COMMAND_TEXT_UPDATED, UPDATE_ID);
        parent->GetEventHandler()->AddPendingEvent(updateEvent);
    }

    return 0;
}
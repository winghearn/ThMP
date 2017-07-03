#pragma once
#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <wx/wx.h>
#include <wx/thread.h>

// the ID we'll use to identify our event
const int UPDATE_ID = 100000;
const int VOLUME_ID = 200000;

// a thread class that will periodically send events to the GUI thread
class MyThread : public wxThread {
    public:
        MyThread(wxFrame*);
        virtual ExitCode Entry();

    private:
        wxFrame* parent;
};

#endif
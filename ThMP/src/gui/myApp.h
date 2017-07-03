#pragma once
#ifndef MYAPP_H
#define MYAPP_H
#include <wx/wx.h>

class MyApp : public wxApp {
    public:
        virtual bool OnInit();
    private:
        wxFrame* frame;
};

#endif


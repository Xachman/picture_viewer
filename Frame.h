/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   frame.h
 * Author: ziron
 *
 * Created on January 25, 2018, 7:14 PM
 */

#ifndef FRAME_H
#define FRAME_H
#include <wx/wx.h>
#include "FileList.h"
class Frame: public wxFrame 
{
public:
	Frame(const wxString& title, const wxPoint& pos, const wxSize& size);
	wxStaticText *label;
	wxTextCtrl *textctrl;
protected:
	wxPanel *panel;
	FileList *fileList;
private:
	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE(); 
};

enum 
{
	ID_Hello = 1
};

#endif /* FRAME_H */


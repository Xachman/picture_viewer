/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DropTarget.h
 * Author: ziron
 *
 * Created on January 25, 2018, 9:06 PM
 */

#ifndef DROPTARGET_H
#define DROPTARGET_H
#include <wx/wx.h>
#include <wx/dnd.h>


class DropTarget: public wxFileDropTarget 
{
public:
    DropTarget(wxTextCtrl *panel);
	virtual bool OnDropFiles(wxCoord x, wxCoord y,
                             const wxArrayString& filenames) wxOVERRIDE;
	wxPanel *panel;
	wxTextCtrl *textctrl;
    virtual ~DropTarget();
private:

};

#endif /* DROPTARGET_H */


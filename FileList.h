/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileList.h
 * Author: ziron
 *
 * Created on January 26, 2018, 5:12 PM
 */

#ifndef FILELIST_H
#define FILELIST_H
#include <wx/wx.h>
#include <wx/listctrl.h>
#include "ImageFrame.h"

class FileList : public wxListCtrl {
public:
	FileList(wxWindow *parent, ImageFrame *imageFrame);
private:
	void OnItemSelected(wxListEvent& event);
	ImageFrame *imageFrame;
	wxDECLARE_EVENT_TABLE(); 

};

enum {
	LIST_CTRL = 1000
};
#endif /* FILELIST_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileList.cpp
 * Author: ziron
 * 
 * Created on January 26, 2018, 5:12 PM
 */

#include "FileList.h"
#include "ImageFrame.h"
#include <wx/wx.h>
#include <wx/listctrl.h>
#include <iostream>
#include <string>

FileList::FileList(wxWindow *parent, ImageFrame *imageFrame): wxListCtrl(parent, LIST_CTRL, wxPoint(-1, -1), 
    wxSize(400, 200), wxLC_REPORT) {
	wxListItem col0;
    	col0.SetId(0);
        col0.SetText( _("Name") );
	this->InsertColumn(0, col0);
	this->imageFrame = imageFrame;
}
void FileList::OnItemSelected(wxListEvent& event) {
	wxListItem info;
        info.m_itemId = event.m_itemIndex;
        info.m_col = 0;
		info.m_mask = wxLIST_MASK_TEXT;
		GetItem(info);
	imageFrame->updateImage(std::string(info.m_text.c_str()));
}
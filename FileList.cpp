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
#include <wx/wx.h>
#include <wx/listctrl.h>
#include <iostream>

FileList::FileList(wxWindow *parent): wxListCtrl(parent, LIST_CTRL, wxPoint(-1, -1), 
      wxSize(400, 200), wxLC_REPORT) {
	 wxListItem col0;
        col0.SetId(0);
        col0.SetText( _("Name") );
	this->InsertColumn(0, col0);
}
void FileList::OnItemSelected(wxListEvent& event) {
	std::cout << "test" << std::endl;
	wxListItem info;
        info.m_itemId = event.m_itemIndex;
        info.m_col = 0;
		info.m_mask = wxLIST_MASK_TEXT;
		GetItem(info);
	std::cout << "Item: " << info.m_text.c_str() << std::endl;

}
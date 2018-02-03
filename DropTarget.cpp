/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DropTarget.cpp
 * Author: ziron
 * 
 * Created on January 25, 2018, 9:06 PM
 */

#include "DropTarget.h"
#include <iostream>

#include <wx/wx.h>
#include <wx/listctrl.h>
DropTarget::DropTarget(wxListCtrl *panel) {
	this->owner = panel;
}


DropTarget::~DropTarget() {
}

bool DropTarget::OnDropFiles(wxCoord x, wxCoord y, const wxArrayString& filenames) 
{
	size_t nFiles = filenames.GetCount();

	for ( size_t n = 0; n < nFiles; n++ ) {
		wxListItem item;
            item.SetId(this->owner->GetItemCount()+1);
            item.SetText( filenames[n] );
            this->owner->InsertItem( item );
	}

	this->owner->SetItemState(0, wxLIST_STATE_SELECTED, wxLIST_STATE_SELECTED);
    return true;
}



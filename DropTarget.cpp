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

DropTarget::DropTarget(wxTextCtrl *panel) {
}


DropTarget::~DropTarget() {
}

bool DropTarget::OnDropFiles(wxCoord x, wxCoord y,
                             const wxArrayString& filenames) 
{
	size_t nFiles = filenames.GetCount();
    std::cout << (int)nFiles << std::endl;

	for ( size_t n = 0; n < nFiles; n++ )
		std::cout << filenames[n] << std::endl;

    return true;
}

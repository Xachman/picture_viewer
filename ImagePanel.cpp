/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ImagePanel.cpp
 * Author: ziron
 * 
 * Created on January 27, 2018, 8:44 AM
 */

#include "ImagePanel.h"
#include <wx/wx.h>

ImagePanel::ImagePanel(wxFrame* parent, wxString file, wxBitmapType format) {
	image.LoadFile(file, 0, 0, format);
}

ImagePanel::ImagePanel(const ImagePanel& orig) {
}

ImagePanel::~ImagePanel() {
}


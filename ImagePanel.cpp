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

ImagePanel::ImagePanel(wxFrame* parent, wxString file, wxBitmapType format) : wxPanel(parent) {
	image.LoadFile(file, format);
}
void ImagePanel::loadFile(wxString file, wxBitmapType format) {
	image.LoadFile(file, format);
}
ImagePanel::ImagePanel(const ImagePanel& orig) {
}

ImagePanel::~ImagePanel() {
}

void ImagePanel::paintEvent(wxPaintEvent & evt)
{
    // depending on your system you may need to look at double-buffered dcs
    wxPaintDC dc(this);
    render(dc);
}
void ImagePanel::paintNow()
{
    // depending on your system you may need to look at double-buffered dcs
    wxClientDC dc(this);
    render(dc);
}

void ImagePanel::render(wxDC&  dc)
{
    dc.DrawBitmap( image, 0, 0, false );
}
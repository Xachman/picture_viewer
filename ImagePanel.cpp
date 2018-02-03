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
#include "Image.h"
#include <wx/wx.h>

ImagePanel::ImagePanel(wxWindow* parent, Image image) : wxPanel(parent, -1, wxPoint(1,1), wxSize(image.GetWidth(), image.GetHeight()), wxTAB_TRAVERSAL, "image"), image(image) {
	this->SetSize(wxSize(image.GetWidth(), image.GetHeight()));
}
void ImagePanel::loadFile(wxString file, wxBitmapType format) {
	image.LoadFile(file, format);
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
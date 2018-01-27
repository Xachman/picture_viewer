/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ImagePanel.h
 * Author: ziron
 *
 * Created on January 27, 2018, 8:44 AM
 */

#ifndef IMAGEPANEL_H
#define IMAGEPANEL_H
#include <wx/wx.h>

class ImagePanel : wxPanel {
public:
	ImagePanel(wxFrame* parent, wxString file, wxBitmapType format);
    ImagePanel(const ImagePanel& orig);
	wxBitmap image;
    virtual ~ImagePanel();
private:

};

#endif /* IMAGEPANEL_H */


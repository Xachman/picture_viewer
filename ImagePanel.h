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

class ImagePanel : public wxPanel {
public:
	ImagePanel(wxWindow* parent, wxString file, wxBitmapType format);
	void loadFile(wxString file, wxBitmapType format);
	wxBitmap image;
private:
	void paintEvent(wxPaintEvent & evt);
    void paintNow();
    void render(wxDC& dc);
	DECLARE_EVENT_TABLE()
};

enum {
	IMAGE_PANEL = 3
};
#endif /* IMAGEPANEL_H */


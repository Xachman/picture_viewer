/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Image.h
 * Author: ziron
 *
 * Created on January 29, 2018, 8:22 PM
 */

#ifndef IMAGE_H
#define IMAGE_H
#include <wx/wx.h>
class Image : public wxBitmap {
public:
    Image(const wxString &name);
    Image(const Image& orig);
	Image(const wxImage &image);
	wxString path;
    virtual ~Image();
private:
	wxBitmapType getBitmapType();

};

#endif /* IMAGE_H */


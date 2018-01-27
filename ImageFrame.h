/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ImageFrame.h
 * Author: ziron
 *
 * Created on January 26, 2018, 10:39 PM
 */

#ifndef IMAGEFRAME_H
#define IMAGEFRAME_H
#include <wx/wx.h>
#include <wx/display.h>
class ImageFrame : public wxFrame {
public:
    ImageFrame(wxDisplay *display);
    ImageFrame(const ImageFrame& orig);
    virtual ~ImageFrame();
private:

};

#endif /* IMAGEFRAME_H */


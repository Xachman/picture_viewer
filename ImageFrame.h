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
#include "ImagePanel.h"
#include <wx/wx.h>
#include <wx/display.h>
#include <string>
class ImageFrame : public wxFrame {
public:
    ImageFrame(wxDisplay *display);
    ImageFrame(const ImageFrame& orig);
	ImagePanel * imagePanel;
	wxDisplay *display;
	void updateImage(std::string path);
    virtual ~ImageFrame();
private:
	Image setImageScale(Image image);
};

#endif /* IMAGEFRAME_H */


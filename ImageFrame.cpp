/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ImageFrame.cpp
 * Author: ziron
 * 
 * Created on January 26, 2018, 10:39 PM
 */

#include "ImageFrame.h"
#include <wx/display.h>
ImageFrame::ImageFrame(wxDisplay *display) : wxFrame(NULL, wxID_ANY, "Image", wxPoint(50,50), wxSize(800, 600)) {
	// then simply create like this
	wxInitAllImageHandlers();
 

    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	wxSizer* s2 = new wxBoxSizer(wxVERTICAL);
	s2->Add(imagePanel, 1, wxALIGN_CENTER_HORIZONTAL);
	imagePanel = new ImagePanel( this, "test.png", wxBITMAP_TYPE_PNG);

	sizer->Add(s2, 1, wxEXPAND);
 	this->SetSizer(sizer);
	this->Show();
	this->ShowFullScreen(true);
}
void ImageFrame::updateImage(std::string path) {
	std::cout << "udpate image with: " << path << std::endl;
	imagePanel->loadFile(path.c_str(), wxBITMAP_TYPE_PNG);
	imagePanel->Refresh();
}
ImageFrame::ImageFrame(const ImageFrame& orig) {
}

ImageFrame::~ImageFrame() {
}


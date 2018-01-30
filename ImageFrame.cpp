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
	
	wxPanel *canvasPanel = new wxPanel(this);
	canvasPanel->SetBackgroundColour(wxColour(*wxBLACK));
    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	imagePanel = new ImagePanel( canvasPanel, "./test.png", wxBITMAP_TYPE_PNG);
	sizer->Add(canvasPanel, 1, wxEXPAND);
	wxBoxSizer *sizer2 = new wxBoxSizer(wxVERTICAL); 

	sizer2->AddStretchSpacer();
	std::cout << "image before: " << imagePanel->GetSize().GetWidth() << std::endl;
	sizer2->Add(imagePanel, 1, wxALIGN_CENTER);
	sizer2->AddStretchSpacer();
	canvasPanel->SetSizer(sizer2);
 	this->SetSizer(sizer);
	std::cout << "image after: " << imagePanel->GetSize().GetWidth() << std::endl;
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


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
#include "Image.h"
#include <wx/display.h>

ImageFrame::ImageFrame(wxDisplay *display) : wxFrame(NULL, wxID_ANY, "Image", wxPoint(50,50), wxSize(800, 600)) {
	// then simply create like this
	wxInitAllImageHandlers();
	
	this->SetBackgroundColour(wxColour(*wxBLACK));
	imagePanel = new ImagePanel( this, Image("./test.png"));
    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	sizer->AddStretchSpacer();
	sizer->Add(imagePanel, 1, wxALIGN_CENTER);
	sizer->AddStretchSpacer();
 	this->SetSizer(sizer);
	std::cout << "image after: " << imagePanel->GetSize().GetWidth() << std::endl;
	this->Show();
	this->ShowFullScreen(true);
}
void ImageFrame::updateImage(std::string path) {
	std::cout << "udpate image with: " << path << std::endl;	
	this->Refresh();
	delete imagePanel;
	imagePanel = new ImagePanel( this, Image(path.c_str()));
	this->GetSizer()->Clear(true);
	this->GetSizer()->AddStretchSpacer();
	this->GetSizer()->Add(imagePanel, 1, wxALIGN_CENTER);
	this->GetSizer()->AddStretchSpacer();
	this->GetSizer()->Layout();

}
ImageFrame::ImageFrame(const ImageFrame& orig) {
}

ImageFrame::~ImageFrame() {
}



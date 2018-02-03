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

ImageFrame::ImageFrame(wxDisplay *display) : wxFrame(NULL, wxID_ANY, "Image", wxPoint(50,50), wxSize(800, 600)), display(display) {
	// then simply create like this
	wxInitAllImageHandlers();
		
	this->SetBackgroundColour(wxColour(*wxBLACK));
	imagePanel = new ImagePanel( this, this->setImageScale(Image("./test.png")));
	std::cout << display->GetClientArea().GetWidth() << std::endl;
    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	sizer->AddStretchSpacer();
	sizer->Add(imagePanel, 1, wxALIGN_CENTER);
	sizer->AddStretchSpacer();
 	this->SetSizer(sizer);
	this->Show();
	this->ShowFullScreen(true);
}
void ImageFrame::updateImage(std::string path) {
	this->Refresh();
	delete imagePanel;
	imagePanel = new ImagePanel( this, this->setImageScale(Image(path.c_str())));
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

Image ImageFrame::setImageScale(Image image) {

	if(display->GetClientArea().GetWidth() > image.GetSize().GetWidth() && display->GetClientArea().GetHeight() > image.GetSize().GetHeight() ) {
		return Image(image.path);
	}
	
	double widthRatio = (double)display->GetClientArea().GetWidth() / (double)image.GetSize().GetWidth();
	double heightRatio =  (double)display->GetClientArea().GetHeight() / (double)image.GetSize().GetHeight();
	double scaleRatio = widthRatio;

	if(heightRatio < widthRatio) {
		scaleRatio = heightRatio;	
	}

	wxImage sImage = image.ConvertToImage();	
		
	double height = 	(double)image.GetHeight() * scaleRatio;
	double width = (double)image.GetWidth() * scaleRatio;

	return Image(sImage.Scale((int)width, (int)height));
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Image.cpp
 * Author: ziron
 * 
 * Created on January 29, 2018, 8:22 PM
 */

#include "Image.h"
#include <wx/wx.h>
#include <exception>

class ImageException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Unsupported file type";
  }
} imgEx;
Image::Image(const wxString &name) : path(name) {
	this->LoadFile(name, this->getBitmapType());
	
}

Image::Image(const Image& orig) {
}

Image::~Image() {
}

wxBitmapType Image::getBitmapType() {
	wxString ext = wxString(this->path.substr(this->path.find_last_of(".")+1));
	if(ext == "jpg" | ext == "jpeg" | ext == "JPG" | ext == "JPEG") {
		return wxBITMAP_TYPE_JPEG;
	}
	if(ext == "png" | ext == "PNG") {
		return wxBITMAP_TYPE_PNG;
	}
	throw imgEx;	
}

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include  <wx/wx.h>
#endif 

#include "Frame.h"
#include "app.h"
#include <wx/display.h>
#include <iostream>
#include "ImagePanel.h"
/*
 TODO:  use wxDisplay to get displays and use dropdown to select
 
 */
BEGIN_EVENT_TABLE(ImagePanel, wxPanel)
// some useful events
/*
 EVT_MOTION(wxImagePanel::mouseMoved)
 EVT_LEFT_DOWN(wxImagePanel::mouseDown)
 EVT_LEFT_UP(wxImagePanel::mouseReleased)
 EVT_RIGHT_DOWN(wxImagePanel::rightClick)
 EVT_LEAVE_WINDOW(wxImagePanel::mouseLeftWindow)
 EVT_KEY_DOWN(wxImagePanel::keyPressed)
 EVT_KEY_UP(wxImagePanel::keyReleased)
 EVT_MOUSEWHEEL(wxImagePanel::mouseWheelMoved)
 */
 
// catch paint events
	EVT_PAINT(ImagePanel::paintEvent) 
END_EVENT_TABLE()
wxBEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_MENU(ID_Hello, Frame::OnHello)
	EVT_MENU(wxID_EXIT, Frame::OnExit)
	EVT_MENU(wxID_ABOUT, Frame::OnAbout)
wxEND_EVENT_TABLE()
wxBEGIN_EVENT_TABLE(FileList, wxListCtrl)
	EVT_LIST_ITEM_SELECTED(LIST_CTRL, FileList::OnItemSelected)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(App);



bool App::OnInit()
{
	Frame *frame = new Frame("Hello World", wxPoint(50,50), wxSize(-1, -1));
	frame->Show( true );
	return true;
};
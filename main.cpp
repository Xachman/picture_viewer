#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include  <wx/wx.h>
#endif 

#include "Frame.h"
#include "app.h"
#include <wx/display.h>
#include <iostream>

/*
 TODO:  use wxDisplay to get displays and use dropdown to select
 
 */

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
	Frame *frame = new Frame("Hello World", wxPoint(50,50), wxSize(450, 340));
	frame->Show( true );
	return true;
};
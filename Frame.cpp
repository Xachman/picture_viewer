/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Frame.h"
#include "DropTarget.h"
#include "FileList.h"
#include "ImageFrame.h"
#include <wx/wxprec.h>
#include  <wx/wx.h>
#include <wx/treectrl.h>
#include <wx/dirctrl.h>
#include <wx/dir.h>
#include <wx/splitter.h>
#include <wx/display.h>

Frame::Frame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(NULL, wxID_ANY, title, pos, size)
{
	panel = new wxPanel(this, -1);
	ImageFrame *iFrame = new ImageFrame(new wxDisplay());
	wxMenu *menuFile = new wxMenu;	
	menuFile->Append(ID_Hello, "&Hello...\tCtrl-H", "Help string shown in status bar for this menu");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);
	wxMenu *menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);
	wxMenuBar * menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&File");
	menuBar->Append(menuHelp, "&Help");

	fileList = new FileList(panel, iFrame);
	DropTarget *dp = new DropTarget(fileList);
	fileList->SetDropTarget(dp);

	SetMenuBar(menuBar);
    CreateStatusBar();
	SetStatusText("Welcome to x");	
};

void Frame::OnExit(wxCommandEvent& event) 
{
	Close(true);
};

void Frame::OnAbout(wxCommandEvent& event)
{
	wxMessageBox("This is a message box", "About app", wxOK | wxICON_INFORMATION);
};

void Frame::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello from app");
}
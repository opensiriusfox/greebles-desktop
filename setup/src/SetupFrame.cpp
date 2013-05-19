#include <Log.h>

#include "wx/wx.h"
#include "wx/stattext.h"
#include "wx/button.h"
#include "wx/msgdlg.h"		// For MessageDialogs

#include "wxNoLabelCheckBox.h"
#include "SetupFrame.h"
#include "GeneralSettings.h"

using namespace SOAR;

SetupFrame::SetupFrame(const wxString& title, const wxPoint& pos, const wxSize& size, long style)
       : wxFrame(NULL, -1, title, pos, size, style)
{
	/**
	 * THE FOLLOWING CODE WAS GENERATED BY wxFormBuilder v3.1
	 */

    this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* masterVBoxSizer;
	masterVBoxSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* labelSizer;
	labelSizer = new wxBoxSizer( wxHORIZONTAL );
	
	labelSizer->SetMinSize( wxSize( -1,20 ) ); 
	playersAndKeysLabel = new wxStaticText( this, wxID_ANY, wxT("Players and Keys:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	playersAndKeysLabel->Wrap( -1 );
	labelSizer->Add( playersAndKeysLabel, 0, wxALL|wxEXPAND, 5 );
	
	masterVBoxSizer->Add( labelSizer, 0, wxEXPAND, 5 );
	
	wxGridSizer* playersGridSizer;
	playersGridSizer = new wxGridSizer( 2, 2, 0, 0 );
	
	wxStaticBoxSizer* p1BoxSizer;
	p1BoxSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Player 1") ), wxVERTICAL );
	
	wxBoxSizer* p1VBox;
	p1VBox = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* p1EnabledHBox;
	p1EnabledHBox = new wxBoxSizer( wxHORIZONTAL );
	
	p1EnabledCheckBox = new wxNoLabelCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p1EnabledHBox->Add( p1EnabledCheckBox, 0, wxALL, 10 );
	
	wxBoxSizer* p1NameVBox;
	p1NameVBox = new wxBoxSizer( wxVERTICAL );
	
	p1Name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p1NameVBox->Add( p1Name, 0, wxBOTTOM|wxEXPAND|wxRIGHT|wxTOP, 5 );
	
	p1EnabledHBox->Add( p1NameVBox, 1, 0, 5 );
	
	p1VBox->Add( p1EnabledHBox, 0, wxEXPAND, 5 );
	
	wxGridSizer* p1ControlsGrid;
	p1ControlsGrid = new wxGridSizer( 3, 3, 0, 0 );
	
	
	p1ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p1UpVBox;
	p1UpVBox = new wxBoxSizer( wxVERTICAL );
	
	p1UpButton = new wxButton( this, wxID_ANY, wxT("Up"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p1UpButton->SetMinSize( wxSize( -1,32 ) );
	
	p1UpVBox->Add( p1UpButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p1ControlsGrid->Add( p1UpVBox, 1, wxEXPAND, 5 );
	
	
	p1ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p1LeftVBox;
	p1LeftVBox = new wxBoxSizer( wxVERTICAL );
	
	p1LeftButton = new wxButton( this, wxID_ANY, wxT("Left"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p1LeftButton->SetMinSize( wxSize( -1,32 ) );
	
	p1LeftVBox->Add( p1LeftButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p1ControlsGrid->Add( p1LeftVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p1PushVBox;
	p1PushVBox = new wxBoxSizer( wxVERTICAL );
	
	p1PushButton = new wxButton( this, wxID_ANY, wxT("Push"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p1PushButton->SetMinSize( wxSize( -1,32 ) );
	
	p1PushVBox->Add( p1PushButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p1ControlsGrid->Add( p1PushVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p1RightButtonVBox;
	p1RightButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p1RightButton = new wxButton( this, wxID_ANY, wxT("Right"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p1RightButton->SetMinSize( wxSize( -1,32 ) );
	
	p1RightButtonVBox->Add( p1RightButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	p1ControlsGrid->Add( p1RightButtonVBox, 1, wxEXPAND, 5 );
	
	
	p1ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p1DownButtonVBox;
	p1DownButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p1DownButton = new wxButton( this, wxID_ANY, wxT("Down"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p1DownButton->SetMinSize( wxSize( -1,32 ) );
	
	p1DownButtonVBox->Add( p1DownButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p1ControlsGrid->Add( p1DownButtonVBox, 1, wxEXPAND, 5 );
	
	
	p1ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	p1VBox->Add( p1ControlsGrid, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* p1TypeHBox;
	p1TypeHBox = new wxBoxSizer( wxHORIZONTAL );
	
	wxString p1TypeChoices[] = { wxT("Human"), wxT("Friendly AI"), wxT("Nasty AI") };
	int p1TypeNChoices = sizeof( p1TypeChoices ) / sizeof( wxString );
	p1Type = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, p1TypeNChoices, p1TypeChoices, 0 );
	p1Type->SetSelection( 0 );
	p1TypeHBox->Add( p1Type, 1, wxALL, 5 );
	
	p1Image = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("image/player-1.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 23,23 ), 0 );
	p1TypeHBox->Add( p1Image, 0, wxALL|wxALIGN_CENTER, 2 );
	
	p1VBox->Add( p1TypeHBox, 0, wxEXPAND, 5 );
	
	p1BoxSizer->Add( p1VBox, 1, wxEXPAND, 5 );
	
	playersGridSizer->Add( p1BoxSizer, 1, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* p2BoxSizer;
	p2BoxSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Player 2") ), wxVERTICAL );
	
	wxBoxSizer* p2VBox;
	p2VBox = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* p2EnabledHBox;
	p2EnabledHBox = new wxBoxSizer( wxHORIZONTAL );
	
	p2EnabledCheckBox = new wxNoLabelCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p2EnabledHBox->Add( p2EnabledCheckBox, 0, wxALL, 10 );
	
	wxBoxSizer* p2NameVBox;
	p2NameVBox = new wxBoxSizer( wxVERTICAL );
	
	p2Name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p2NameVBox->Add( p2Name, 0, wxBOTTOM|wxEXPAND|wxRIGHT|wxTOP, 5 );
	
	p2EnabledHBox->Add( p2NameVBox, 1, 0, 5 );
	
	p2VBox->Add( p2EnabledHBox, 0, wxEXPAND, 5 );
	
	wxGridSizer* p2ControlsGrid;
	p2ControlsGrid = new wxGridSizer( 3, 3, 0, 0 );
	
	
	p2ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p2UpVBox;
	p2UpVBox = new wxBoxSizer( wxVERTICAL );
	
	p2UpButton = new wxButton( this, wxID_ANY, wxT("Up"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p2UpButton->SetMinSize( wxSize( -1,32 ) );
	
	p2UpVBox->Add( p2UpButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p2ControlsGrid->Add( p2UpVBox, 1, wxEXPAND, 5 );
	
	
	p2ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p2LeftVBox;
	p2LeftVBox = new wxBoxSizer( wxVERTICAL );
	
	p2LeftButton = new wxButton( this, wxID_ANY, wxT("Left"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p2LeftButton->SetMinSize( wxSize( -1,32 ) );
	
	p2LeftVBox->Add( p2LeftButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p2ControlsGrid->Add( p2LeftVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p2PushVBox;
	p2PushVBox = new wxBoxSizer( wxVERTICAL );
	
	p2PushButton = new wxButton( this, wxID_ANY, wxT("Push"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p2PushButton->SetMinSize( wxSize( -1,32 ) );
	
	p2PushVBox->Add( p2PushButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p2ControlsGrid->Add( p2PushVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p2RightButtonVBox;
	p2RightButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p2RightButton = new wxButton( this, wxID_ANY, wxT("Right"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p2RightButton->SetMinSize( wxSize( -1,32 ) );
	
	p2RightButtonVBox->Add( p2RightButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	p2ControlsGrid->Add( p2RightButtonVBox, 1, wxEXPAND, 5 );
	
	
	p2ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p2DownButtonVBox;
	p2DownButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p2DownButton = new wxButton( this, wxID_ANY, wxT("Down"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p2DownButton->SetMinSize( wxSize( -1,32 ) );
	
	p2DownButtonVBox->Add( p2DownButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p2ControlsGrid->Add( p2DownButtonVBox, 1, wxEXPAND, 5 );
	
	
	p2ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	p2VBox->Add( p2ControlsGrid, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* p2TypeHBox;
	p2TypeHBox = new wxBoxSizer( wxHORIZONTAL );
	
	wxString p2TypeChoices[] = { wxT("Human"), wxT("Friendly AI"), wxT("Nasty AI") };
	int p2TypeNChoices = sizeof( p2TypeChoices ) / sizeof( wxString );
	p2Type = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, p2TypeNChoices, p2TypeChoices, 0 );
	p2Type->SetSelection( 0 );
	p2TypeHBox->Add( p2Type, 1, wxALL, 5 );
	
	p2Image = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("image/player-2.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 23,23 ), 0 );
	p2TypeHBox->Add( p2Image, 0, wxALL|wxALIGN_CENTER, 2 );
	
	p2VBox->Add( p2TypeHBox, 0, wxEXPAND, 5 );
	
	p2BoxSizer->Add( p2VBox, 1, wxEXPAND, 5 );
	
	playersGridSizer->Add( p2BoxSizer, 1, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* p3BoxSizer;
	p3BoxSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Player 3") ), wxVERTICAL );
	
	wxBoxSizer* p3VBox;
	p3VBox = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* p3EnabledHBox;
	p3EnabledHBox = new wxBoxSizer( wxHORIZONTAL );
	
	p3EnabledCheckBox = new wxNoLabelCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p3EnabledHBox->Add( p3EnabledCheckBox, 0, wxALL, 10 );
	
	wxBoxSizer* p3NameVBox;
	p3NameVBox = new wxBoxSizer( wxVERTICAL );
	
	p3Name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p3NameVBox->Add( p3Name, 0, wxBOTTOM|wxEXPAND|wxRIGHT|wxTOP, 5 );
	
	p3EnabledHBox->Add( p3NameVBox, 1, 0, 5 );
	
	p3VBox->Add( p3EnabledHBox, 0, wxEXPAND, 5 );
	
	wxGridSizer* p3ControlsGrid;
	p3ControlsGrid = new wxGridSizer( 3, 3, 0, 0 );
	
	
	p3ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p3UpVBox;
	p3UpVBox = new wxBoxSizer( wxVERTICAL );
	
	p3UpButton = new wxButton( this, wxID_ANY, wxT("Up"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p3UpButton->SetMinSize( wxSize( -1,32 ) );
	
	p3UpVBox->Add( p3UpButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p3ControlsGrid->Add( p3UpVBox, 1, wxEXPAND, 5 );
	
	
	p3ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p3LeftVBox;
	p3LeftVBox = new wxBoxSizer( wxVERTICAL );
	
	p3LeftButton = new wxButton( this, wxID_ANY, wxT("Left"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p3LeftButton->SetMinSize( wxSize( -1,32 ) );
	
	p3LeftVBox->Add( p3LeftButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p3ControlsGrid->Add( p3LeftVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p3PushVBox;
	p3PushVBox = new wxBoxSizer( wxVERTICAL );
	
	p3PushButton = new wxButton( this, wxID_ANY, wxT("Push"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p3PushButton->SetMinSize( wxSize( -1,32 ) );
	
	p3PushVBox->Add( p3PushButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p3ControlsGrid->Add( p3PushVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p3RightButtonVBox;
	p3RightButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p3RightButton = new wxButton( this, wxID_ANY, wxT("Right"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p3RightButton->SetMinSize( wxSize( -1,32 ) );
	
	p3RightButtonVBox->Add( p3RightButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	p3ControlsGrid->Add( p3RightButtonVBox, 1, wxEXPAND, 5 );
	
	
	p3ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p3DownButtonVBox;
	p3DownButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p3DownButton = new wxButton( this, wxID_ANY, wxT("Down"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p3DownButton->SetMinSize( wxSize( -1,32 ) );
	
	p3DownButtonVBox->Add( p3DownButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p3ControlsGrid->Add( p3DownButtonVBox, 1, wxEXPAND, 5 );
	
	
	p3ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	p3VBox->Add( p3ControlsGrid, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* p3TypeHBox;
	p3TypeHBox = new wxBoxSizer( wxHORIZONTAL );
	
	wxString p3TypeChoices[] = { wxT("Human"), wxT("Friendly AI"), wxT("Nasty AI") };
	int p3TypeNChoices = sizeof( p3TypeChoices ) / sizeof( wxString );
	p3Type = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, p3TypeNChoices, p3TypeChoices, 0 );
	p3Type->SetSelection( 0 );
	p3TypeHBox->Add( p3Type, 1, wxALL, 5 );
	
	p3Image = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("image/player-3.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 23,23 ), 0 );
	p3TypeHBox->Add( p3Image, 0, wxALL|wxALIGN_CENTER, 2 );
	
	p3VBox->Add( p3TypeHBox, 0, wxEXPAND, 5 );
	
	p3BoxSizer->Add( p3VBox, 1, wxEXPAND, 5 );
	
	playersGridSizer->Add( p3BoxSizer, 1, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* p4BoxSizer;
	p4BoxSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Player 4") ), wxVERTICAL );
	
	wxBoxSizer* p4VBox;
	p4VBox = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* p4EnabledHBox;
	p4EnabledHBox = new wxBoxSizer( wxHORIZONTAL );
	
	p4EnabledCheckBox = new wxNoLabelCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p4EnabledHBox->Add( p4EnabledCheckBox, 0, wxALL, 10 );
	
	wxBoxSizer* p4NameVBox;
	p4NameVBox = new wxBoxSizer( wxVERTICAL );
	
	p4Name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	p4NameVBox->Add( p4Name, 0, wxBOTTOM|wxEXPAND|wxRIGHT|wxTOP, 5 );
	
	p4EnabledHBox->Add( p4NameVBox, 1, 0, 5 );
	
	p4VBox->Add( p4EnabledHBox, 0, wxEXPAND, 5 );
	
	wxGridSizer* p4ControlsGrid;
	p4ControlsGrid = new wxGridSizer( 3, 3, 0, 0 );
	
	
	p4ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p4UpVBox;
	p4UpVBox = new wxBoxSizer( wxVERTICAL );
	
	p4UpButton = new wxButton( this, wxID_ANY, wxT("Up"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p4UpButton->SetMinSize( wxSize( -1,32 ) );
	
	p4UpVBox->Add( p4UpButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p4ControlsGrid->Add( p4UpVBox, 1, wxEXPAND, 5 );
	
	
	p4ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p4LeftVBox;
	p4LeftVBox = new wxBoxSizer( wxVERTICAL );
	
	p4LeftButton = new wxButton( this, wxID_ANY, wxT("Left"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p4LeftButton->SetMinSize( wxSize( -1,32 ) );
	
	p4LeftVBox->Add( p4LeftButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p4ControlsGrid->Add( p4LeftVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p4PushVBox;
	p4PushVBox = new wxBoxSizer( wxVERTICAL );
	
	p4PushButton = new wxButton( this, wxID_ANY, wxT("Push"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p4PushButton->SetMinSize( wxSize( -1,32 ) );
	
	p4PushVBox->Add( p4PushButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p4ControlsGrid->Add( p4PushVBox, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p4RightButtonVBox;
	p4RightButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p4RightButton = new wxButton( this, wxID_ANY, wxT("Right"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p4RightButton->SetMinSize( wxSize( -1,32 ) );
	
	p4RightButtonVBox->Add( p4RightButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	p4ControlsGrid->Add( p4RightButtonVBox, 1, wxEXPAND, 5 );
	
	
	p4ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* p4DownButtonVBox;
	p4DownButtonVBox = new wxBoxSizer( wxVERTICAL );
	
	p4DownButton = new wxButton( this, wxID_ANY, wxT("Down"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	p4DownButton->SetMinSize( wxSize( -1,32 ) );
	
	p4DownButtonVBox->Add( p4DownButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	p4ControlsGrid->Add( p4DownButtonVBox, 1, wxEXPAND, 5 );
	
	
	p4ControlsGrid->Add( 0, 0, 1, wxEXPAND, 5 );
	
	p4VBox->Add( p4ControlsGrid, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* p4TypeHBox;
	p4TypeHBox = new wxBoxSizer( wxHORIZONTAL );
	
	wxString p4TypeChoices[] = { wxT("Human"), wxT("Friendly AI"), wxT("Nasty AI") };
	int p4TypeNChoices = sizeof( p4TypeChoices ) / sizeof( wxString );
	p4Type = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, p4TypeNChoices, p4TypeChoices, 0 );
	p4Type->SetSelection( 0 );
	p4TypeHBox->Add( p4Type, 1, wxALL, 5 );
	
	p4Image = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("image/player-4.png"), wxBITMAP_TYPE_PNG ), wxDefaultPosition, wxSize( 23,23 ), 0 );
	p4TypeHBox->Add( p4Image, 0, wxALL|wxALIGN_CENTER, 2 );
	
	p4VBox->Add( p4TypeHBox, 0, wxEXPAND, 5 );
	
	p4BoxSizer->Add( p4VBox, 1, wxEXPAND, 5 );
	
	playersGridSizer->Add( p4BoxSizer, 1, wxALL|wxEXPAND, 5 );
	
	masterVBoxSizer->Add( playersGridSizer, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* audioOptionsSizer;
	audioOptionsSizer = new wxBoxSizer( wxVERTICAL );
	
	soundCheckBox = new wxCheckBox( this, myID_SOUND, wxT("Sound Effects"), wxDefaultPosition, wxDefaultSize, 0 );
	audioOptionsSizer->Add( soundCheckBox, 0, wxALL, 5 );
	
	musicCheckBox = new wxCheckBox( this, myID_MUSIC, wxT("Music"), wxDefaultPosition, wxDefaultSize, 0 );
	audioOptionsSizer->Add( musicCheckBox, 0, wxALL, 5 );
	
	masterVBoxSizer->Add( audioOptionsSizer, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bottomRowSizer;
	bottomRowSizer = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* bottomRowGridSizer;
	bottomRowGridSizer = new wxGridSizer( 1, 2, 0, 20 );
	
	wxBoxSizer* difficultySizer;
	difficultySizer = new wxBoxSizer( wxHORIZONTAL );
	
	difficultyLabel = new wxStaticText( this, wxID_ANY, wxT("Difficulty:"), wxDefaultPosition, wxDefaultSize, 0 );
	difficultyLabel->Wrap( -1 );
	difficultySizer->Add( difficultyLabel, 0, wxBOTTOM|wxLEFT|wxTOP, 8 );
	
	wxString difficultyComboBoxChoices[] = { wxT("Easy"), wxT("Normal"), wxT("Hard"), wxT("Suicidal") };
	int difficultyComboBoxNChoices = sizeof( difficultyComboBoxChoices ) / sizeof( wxString );
	difficultyComboBox = new wxChoice( this, myID_DIFFICULTY, wxDefaultPosition, wxDefaultSize, difficultyComboBoxNChoices, difficultyComboBoxChoices, 0 );
	difficultyComboBox->SetSelection( 0 );
	difficultySizer->Add( difficultyComboBox, 1, wxALL|wxEXPAND, 5 );
	
	bottomRowGridSizer->Add( difficultySizer, 1, wxEXPAND, 5 );
	
	wxBoxSizer* buttonAlignmentSizer;
	buttonAlignmentSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* buttonsSizer;
	buttonsSizer = new wxBoxSizer( wxHORIZONTAL );
	
	cancelButton = new wxButton( this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	buttonsSizer->Add( cancelButton, 0, wxALL|wxEXPAND, 5 );
	
	saveButton = new wxButton( this, wxID_SAVE, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	buttonsSizer->Add( saveButton, 0, wxALL|wxEXPAND, 5 );
	
	buttonAlignmentSizer->Add( buttonsSizer, 1, 0, 5 );
	
	bottomRowGridSizer->Add( buttonAlignmentSizer, 1, wxALIGN_RIGHT, 5 );
	
	bottomRowSizer->Add( bottomRowGridSizer, 1, wxEXPAND, 5 );
	
	masterVBoxSizer->Add( bottomRowSizer, 0, wxEXPAND, 5 );
	
	this->SetSizer( masterVBoxSizer );
	this->Layout();
	masterVBoxSizer->Fit( this );
	
	this->Centre( wxBOTH );

	/**
	 * END GENERATED CODE
	 */
	
	refresh();
}

void SetupFrame::OnDifficultyChange(wxCommandEvent& WXUNUSED(event))
{
	GS->ChooseDifficulty(difficultyComboBox->GetSelection() + 1);
}

void SetupFrame::OnSoundChange(wxCommandEvent& WXUNUSED(event))
{
 	if (soundCheckBox->IsChecked())
 		GS->EnableSound();
 	else
 		GS->DisableSound();
}

void SetupFrame::OnMusicChange(wxCommandEvent& WXUNUSED(event))
{
    if (musicCheckBox->IsChecked())
    	GS->EnableMusic();
    else
    	GS->DisableMusic();
}

void SetupFrame::OnCancel(wxCommandEvent& WXUNUSED(event))
{
	wxMessageDialog confirmDialog(this, wxT("Your changes have not been saved, are you sure you want to exit?"),
								  wxT("Confirm"), wxNO_DEFAULT | wxYES_NO | wxICON_EXCLAMATION);

	switch (confirmDialog.ShowModal())
	{
		case wxID_YES:
			break;

		case wxID_NO:
		default:
			return;
	}

    Close(true);
}

void SetupFrame::OnSave(wxCommandEvent& WXUNUSED(event))
{
	// Save Data
	if (!GS->Save())
		LOG_RECOVERABLE << "Settings failed to save, changes lost.";

    Close(true);
}

void SetupFrame::refresh()
{
	// General Settings
	difficultyComboBox->SetSelection(GS->DifficultyLevelInt() - 1);
	soundCheckBox->SetValue(GS->SoundEnabled());
	musicCheckBox->SetValue(GS->MusicEnabled());
}
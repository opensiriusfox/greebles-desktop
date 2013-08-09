#ifndef ZAP_FRAME_H
#define ZAP_FRAME_H

#include "wx/wx.h"

class ZapFrame : public wxFrame
{
protected:

    /**
     * GENERATED COMPONENT LIST
     */
    wxPanel* masterPanel;
    wxStaticBitmap* stopIcon;
    wxStaticText* clearMsgLabel;
    wxButton* cancelButton;
    wxButton* zapButton;

public:

    ZapFrame(const wxString& title, const wxPoint& position, const wxSize& size, long style=wxDEFAULT_FRAME_STYLE);
    ~ZapFrame();

    // No copying allowed
    ZapFrame(const ZapFrame& other)=delete;
    ZapFrame& operator=(const ZapFrame& rhs)=delete;

};

#endif

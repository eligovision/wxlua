// ---------------------------------------------------------------------------
// wxaui.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxaui_H__
#define __HOOK_WXLUA_wxaui_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 37
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 37
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXAUI wxLuaBinding_wxaui : public wxLuaBinding
{
public:
    wxLuaBinding_wxaui();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxaui)
};


// initialize wxLuaBinding_wxaui for all wxLuaStates
extern WXDLLIMPEXP_BINDWXAUI wxLuaBinding* wxLuaBinding_wxaui_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxAUI && wxCHECK_VERSION(2,8,0) && wxUSE_AUI
    #include "wx/aui/aui.h"
#endif // wxLUA_USE_wxAUI && wxCHECK_VERSION(2,8,0) && wxUSE_AUI

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxAUI && wxCHECK_VERSION(2,8,0) && wxUSE_AUI
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiDefaultDockArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiDefaultTabArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiDefaultToolBarArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiDockArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiDockInfo;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiDockUIPart;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiFloatingFrame;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiGenericTabArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiMDIChildFrame;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiMDIClientWindow;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiMDIParentFrame;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiManager;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiManagerEvent;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiNotebook;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiNotebookEvent;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiNotebookPage;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiNotebookPageArray;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiPaneButton;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiPaneInfo;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiPaneInfoArray;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiSimpleTabArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiTabArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiTabContainerButton;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiTabCtrl;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiToolBar;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiToolBarArt;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiToolBarEvent;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiToolBarItem;
    extern WXDLLIMPEXP_DATA_BINDWXAUI(int) wxluatype_wxAuiToolBarItemArray;
#endif // wxLUA_USE_wxAUI && wxCHECK_VERSION(2,8,0) && wxUSE_AUI



#endif // __HOOK_WXLUA_wxaui_H__


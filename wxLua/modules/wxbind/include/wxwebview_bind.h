// ---------------------------------------------------------------------------
// wxwebview.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxwebview_H__
#define __HOOK_WXLUA_wxwebview_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"
#if !defined(wxUSE_WEBVIEW)
    #define wxUSE_WEBVIEW 0
#endif

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 40
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 40
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXWEBVIEW wxLuaBinding_wxwebview : public wxLuaBinding
{
public:
    wxLuaBinding_wxwebview();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxwebview)
};


// initialize wxLuaBinding_wxwebview for all wxLuaStates
extern WXDLLIMPEXP_BINDWXWEBVIEW wxLuaBinding* wxLuaBinding_wxwebview_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if wxUSE_WEBVIEW
    #include "wx/webview.h"
    #include "wx/webviewarchivehandler.h"
    #include "wx/webviewfshandler.h"
#endif // wxUSE_WEBVIEW

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if wxUSE_WEBVIEW
    extern WXDLLIMPEXP_DATA_BINDWXWEBVIEW(int) wxluatype_wxWebView;
    extern WXDLLIMPEXP_DATA_BINDWXWEBVIEW(int) wxluatype_wxWebViewArchiveHandler;
    extern WXDLLIMPEXP_DATA_BINDWXWEBVIEW(int) wxluatype_wxWebViewEvent;
    extern WXDLLIMPEXP_DATA_BINDWXWEBVIEW(int) wxluatype_wxWebViewFSHandler;
    extern WXDLLIMPEXP_DATA_BINDWXWEBVIEW(int) wxluatype_wxWebViewFactory;
    extern WXDLLIMPEXP_DATA_BINDWXWEBVIEW(int) wxluatype_wxWebViewHandler;
    extern WXDLLIMPEXP_DATA_BINDWXWEBVIEW(int) wxluatype_wxWebViewHistoryItem;
#endif // wxUSE_WEBVIEW



#endif // __HOOK_WXLUA_wxwebview_H__


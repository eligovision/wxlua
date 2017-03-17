// ---------------------------------------------------------------------------
// wxluadebugger.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxluadebugger_H__
#define __HOOK_WXLUA_wxluadebugger_H__

#include "wx/defs.h"
#include "wxlua/debugger/wxluadebuggerdefs.h"
#include "wxbind/include/wxcore_bind.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 30
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 30
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_WXLUADEBUGGER wxLuaBinding_wxluadebugger : public wxLuaBinding
{
public:
    wxLuaBinding_wxluadebugger();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxluadebugger)
};


// initialize wxLuaBinding_wxluadebugger for all wxLuaStates
extern WXDLLIMPEXP_WXLUADEBUGGER wxLuaBinding* wxLuaBinding_wxluadebugger_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#include "wx/defs.h"
#include "wx/object.h"
#include "wxlua/debugger/wxldserv.h"
#include "wxlua/wxlbind.h"
#include "wxlua/wxlstate.h"

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

extern WXDLLIMPEXP_DATA_WXLUADEBUGGER(int) wxluatype_wxLuaDebuggerEvent;
extern WXDLLIMPEXP_DATA_WXLUADEBUGGER(int) wxluatype_wxLuaDebuggerServer;



#endif // __HOOK_WXLUA_wxluadebugger_H__


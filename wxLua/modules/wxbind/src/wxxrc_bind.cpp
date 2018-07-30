// ---------------------------------------------------------------------------
// ../modules/wxbind/src/wxxrc_xrc.cpp was generated by genwxbind.lua
//
// Any changes made to this file will be lost when the file is regenerated.
// ---------------------------------------------------------------------------


#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
     #include "wx/wx.h"
#endif

#include "wxlua/wxlstate.h"
#include "wxbind/include/wxxrc_bind.h"

#ifdef __GNUC__
    #pragma GCC diagnostic ignored "-Wunused-variable"
#endif // __GNUC__


#if wxLUA_USE_wxXRC && wxUSE_XRC
// ---------------------------------------------------------------------------
// Bind class wxXmlResource
// ---------------------------------------------------------------------------

// Lua MetaTable Tag for Class 'wxXmlResource'
int wxluatype_wxXmlResource = WXLUA_TUNKNOWN;

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_AttachUnknownControl[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, &wxluatype_wxWindow, &wxluatype_wxWindow, NULL };
static int LUACALL wxLua_wxXmlResource_AttachUnknownControl(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_AttachUnknownControl[1] = {{ wxLua_wxXmlResource_AttachUnknownControl, WXLUAMETHOD_METHOD, 3, 4, s_wxluatypeArray_wxLua_wxXmlResource_AttachUnknownControl }};
//     bool AttachUnknownControl(const wxString& name, wxWindow* control, wxWindow* parent = NULL);
static int LUACALL wxLua_wxXmlResource_AttachUnknownControl(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // wxWindow parent = NULL
    wxWindow * parent = (argCount >= 4 ? (wxWindow *)wxluaT_getuserdatatype(L, 4, wxluatype_wxWindow) : NULL);
    // wxWindow control
    wxWindow * control = (wxWindow *)wxluaT_getuserdatatype(L, 3, wxluatype_wxWindow);
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call AttachUnknownControl
    bool returns = (self->AttachUnknownControl(name, control, parent));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_ClearHandlers[] = { &wxluatype_wxXmlResource, NULL };
static int LUACALL wxLua_wxXmlResource_ClearHandlers(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_ClearHandlers[1] = {{ wxLua_wxXmlResource_ClearHandlers, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxXmlResource_ClearHandlers }};
//     void ClearHandlers();
static int LUACALL wxLua_wxXmlResource_ClearHandlers(lua_State *L)
{
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call ClearHandlers
    self->ClearHandlers();

    return 0;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_CompareVersion[] = { &wxluatype_wxXmlResource, &wxluatype_TNUMBER, &wxluatype_TNUMBER, &wxluatype_TNUMBER, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxXmlResource_CompareVersion(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_CompareVersion[1] = {{ wxLua_wxXmlResource_CompareVersion, WXLUAMETHOD_METHOD, 5, 5, s_wxluatypeArray_wxLua_wxXmlResource_CompareVersion }};
//     int CompareVersion(int major, int minor, int release, int revision) const;
static int LUACALL wxLua_wxXmlResource_CompareVersion(lua_State *L)
{
    // int revision
    int revision = (int)wxlua_getnumbertype(L, 5);
    // int release
    int release = (int)wxlua_getnumbertype(L, 4);
    // int minor
    int minor = (int)wxlua_getnumbertype(L, 3);
    // int major
    int major = (int)wxlua_getnumbertype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call CompareVersion
    int returns = (self->CompareVersion(major, minor, release, revision));
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static int LUACALL wxLua_wxXmlResource_Get(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_Get[1] = {{ wxLua_wxXmlResource_Get, WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, 0, 0, g_wxluaargtypeArray_None }};
//     static wxXmlResource* Get();
static int LUACALL wxLua_wxXmlResource_Get(lua_State *L)
{
    // call Get
    wxXmlResource* returns = (wxXmlResource*)wxXmlResource::Get();
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxXmlResource);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_GetFlags[] = { &wxluatype_wxXmlResource, NULL };
static int LUACALL wxLua_wxXmlResource_GetFlags(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_GetFlags[1] = {{ wxLua_wxXmlResource_GetFlags, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxXmlResource_GetFlags }};
//     int GetFlags( );
static int LUACALL wxLua_wxXmlResource_GetFlags(lua_State *L)
{
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call GetFlags
    int returns = (self->GetFlags());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_GetVersion[] = { &wxluatype_wxXmlResource, NULL };
static int LUACALL wxLua_wxXmlResource_GetVersion(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_GetVersion[1] = {{ wxLua_wxXmlResource_GetVersion, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxXmlResource_GetVersion }};
//     long GetVersion() const;
static int LUACALL wxLua_wxXmlResource_GetVersion(lua_State *L)
{
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call GetVersion
    long  returns = (self->GetVersion());
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_GetXRCID[] = { &wxluatype_TSTRING, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxXmlResource_GetXRCID(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_GetXRCID[1] = {{ wxLua_wxXmlResource_GetXRCID, WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, 1, 2, s_wxluatypeArray_wxLua_wxXmlResource_GetXRCID }};
//     static int GetXRCID(const wxString &stringID, int value_if_not_found = wxID_NONE);
static int LUACALL wxLua_wxXmlResource_GetXRCID(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // int value_if_not_found = wxID_NONE
    int value_if_not_found = (argCount >= 2 ? (int)wxlua_getnumbertype(L, 2) : wxID_NONE);
    // const wxString stringID
    const wxString stringID = wxlua_getwxStringtype(L, 1);
    // call GetXRCID
    int returns = (wxXmlResource::GetXRCID(stringID, value_if_not_found));
    // push the result number
    lua_pushnumber(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_InitAllHandlers[] = { &wxluatype_wxXmlResource, NULL };
static int LUACALL wxLua_wxXmlResource_InitAllHandlers(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_InitAllHandlers[1] = {{ wxLua_wxXmlResource_InitAllHandlers, WXLUAMETHOD_METHOD, 1, 1, s_wxluatypeArray_wxLua_wxXmlResource_InitAllHandlers }};
//     void InitAllHandlers();
static int LUACALL wxLua_wxXmlResource_InitAllHandlers(lua_State *L)
{
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call InitAllHandlers
    self->InitAllHandlers();

    return 0;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_Load[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_Load(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_Load[1] = {{ wxLua_wxXmlResource_Load, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_Load }};
//     bool Load(const wxString& filemask);
static int LUACALL wxLua_wxXmlResource_Load(lua_State *L)
{
    // const wxString filemask
    const wxString filemask = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call Load
    bool returns = (self->Load(filemask));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}


#if (wxLUA_USE_wxBitmap) && (wxLUA_USE_wxXRC && wxUSE_XRC)
static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadBitmap[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadBitmap(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadBitmap[1] = {{ wxLua_wxXmlResource_LoadBitmap, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_LoadBitmap }};
//     wxBitmap LoadBitmap(const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadBitmap(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadBitmap
    // allocate a new object using the copy constructor
    wxBitmap* returns = new wxBitmap(self->LoadBitmap(name));
    // add the new object to the tracked memory list
    wxluaO_addgcobject(L, returns, wxluatype_wxBitmap);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxBitmap);

    return 1;
}

#endif // (wxLUA_USE_wxBitmap) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC)
static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadDialog1[] = { &wxluatype_wxXmlResource, &wxluatype_wxDialog, &wxluatype_wxWindow, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadDialog1(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadDialog1[1] = {{ wxLua_wxXmlResource_LoadDialog1, WXLUAMETHOD_METHOD, 4, 4, s_wxluatypeArray_wxLua_wxXmlResource_LoadDialog1 }};
//     bool LoadDialog(wxDialog* dlg, wxWindow *parent, const wxString &name);
static int LUACALL wxLua_wxXmlResource_LoadDialog1(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 4);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 3, wxluatype_wxWindow);
    // wxDialog dlg
    wxDialog * dlg = (wxDialog *)wxluaT_getuserdatatype(L, 2, wxluatype_wxDialog);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadDialog
    bool returns = (self->LoadDialog(dlg, parent, name));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadDialog[] = { &wxluatype_wxXmlResource, &wxluatype_wxWindow, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadDialog(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadDialog[1] = {{ wxLua_wxXmlResource_LoadDialog, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxXmlResource_LoadDialog }};
//     wxDialog* LoadDialog(wxWindow* parent, const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadDialog(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 3);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 2, wxluatype_wxWindow);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadDialog
    wxDialog* returns = (wxDialog*)self->LoadDialog(parent, name);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxDialog);

    return 1;
}

#endif // (wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxFrame) && (wxLUA_USE_wxXRC && wxUSE_XRC)
static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadFrame[] = { &wxluatype_wxXmlResource, &wxluatype_wxFrame, &wxluatype_wxWindow, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadFrame(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadFrame[1] = {{ wxLua_wxXmlResource_LoadFrame, WXLUAMETHOD_METHOD, 4, 4, s_wxluatypeArray_wxLua_wxXmlResource_LoadFrame }};
//     bool LoadFrame(wxFrame* frame, wxWindow* parent, const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadFrame(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 4);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 3, wxluatype_wxWindow);
    // wxFrame frame
    wxFrame * frame = (wxFrame *)wxluaT_getuserdatatype(L, 2, wxluatype_wxFrame);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadFrame
    bool returns = (self->LoadFrame(frame, parent, name));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

#endif // (wxLUA_USE_wxFrame) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxIcon) && (wxLUA_USE_wxXRC && wxUSE_XRC)
static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadIcon[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadIcon(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadIcon[1] = {{ wxLua_wxXmlResource_LoadIcon, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_LoadIcon }};
//     wxIcon LoadIcon(const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadIcon(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadIcon
    // allocate a new object using the copy constructor
    wxIcon* returns = new wxIcon(self->LoadIcon(name));
    // add the new object to the tracked memory list
    wxluaO_addgcobject(L, returns, wxluatype_wxIcon);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxIcon);

    return 1;
}

#endif // (wxLUA_USE_wxIcon) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)
static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadMenu[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadMenu(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadMenu[1] = {{ wxLua_wxXmlResource_LoadMenu, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_LoadMenu }};
//     wxMenu* LoadMenu(const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadMenu(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadMenu
    wxMenu* returns = (wxMenu*)self->LoadMenu(name);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxMenu);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadMenuBar1[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadMenuBar1(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadMenuBar1[1] = {{ wxLua_wxXmlResource_LoadMenuBar1, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_LoadMenuBar1 }};
//     wxMenuBar* LoadMenuBar(const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadMenuBar1(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadMenuBar
    wxMenuBar* returns = (wxMenuBar*)self->LoadMenuBar(name);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxMenuBar);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadMenuBar[] = { &wxluatype_wxXmlResource, &wxluatype_wxWindow, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadMenuBar(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadMenuBar[1] = {{ wxLua_wxXmlResource_LoadMenuBar, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxXmlResource_LoadMenuBar }};
//     wxMenuBar* LoadMenuBar(wxWindow* parent, const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadMenuBar(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 3);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 2, wxluatype_wxWindow);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadMenuBar
    wxMenuBar* returns = (wxMenuBar*)self->LoadMenuBar(parent, name);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxMenuBar);

    return 1;
}

#endif // (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadPanel1[] = { &wxluatype_wxXmlResource, &wxluatype_wxPanel, &wxluatype_wxWindow, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadPanel1(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadPanel1[1] = {{ wxLua_wxXmlResource_LoadPanel1, WXLUAMETHOD_METHOD, 4, 4, s_wxluatypeArray_wxLua_wxXmlResource_LoadPanel1 }};
//     bool LoadPanel(wxPanel *panel, wxWindow *parent, const wxString &name);
static int LUACALL wxLua_wxXmlResource_LoadPanel1(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 4);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 3, wxluatype_wxWindow);
    // wxPanel panel
    wxPanel * panel = (wxPanel *)wxluaT_getuserdatatype(L, 2, wxluatype_wxPanel);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadPanel
    bool returns = (self->LoadPanel(panel, parent, name));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadPanel[] = { &wxluatype_wxXmlResource, &wxluatype_wxWindow, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadPanel(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadPanel[1] = {{ wxLua_wxXmlResource_LoadPanel, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxXmlResource_LoadPanel }};
//     wxPanel* LoadPanel(wxWindow* parent, const wxString &name);
static int LUACALL wxLua_wxXmlResource_LoadPanel(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 3);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 2, wxluatype_wxWindow);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadPanel
    wxPanel* returns = (wxPanel*)self->LoadPanel(parent, name);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxPanel);

    return 1;
}


#if (wxLUA_USE_wxToolbar) && (wxLUA_USE_wxXRC && wxUSE_XRC)
static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_LoadToolBar[] = { &wxluatype_wxXmlResource, &wxluatype_wxWindow, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_LoadToolBar(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadToolBar[1] = {{ wxLua_wxXmlResource_LoadToolBar, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxXmlResource_LoadToolBar }};
//     wxToolBar* LoadToolBar(wxWindow *parent, const wxString& name);
static int LUACALL wxLua_wxXmlResource_LoadToolBar(lua_State *L)
{
    // const wxString name
    const wxString name = wxlua_getwxStringtype(L, 3);
    // wxWindow parent
    wxWindow * parent = (wxWindow *)wxluaT_getuserdatatype(L, 2, wxluatype_wxWindow);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call LoadToolBar
    wxToolBar* returns = (wxToolBar*)self->LoadToolBar(parent, name);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxToolBar);

    return 1;
}

#endif // (wxLUA_USE_wxToolbar) && (wxLUA_USE_wxXRC && wxUSE_XRC)

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_Set[] = { &wxluatype_wxXmlResource, NULL };
static int LUACALL wxLua_wxXmlResource_Set(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_Set[1] = {{ wxLua_wxXmlResource_Set, WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, 1, 1, s_wxluatypeArray_wxLua_wxXmlResource_Set }};
//     static %gc wxXmlResource* Set(%ungc wxXmlResource *res);
static int LUACALL wxLua_wxXmlResource_Set(lua_State *L)
{
    // wxXmlResource res
    wxXmlResource * res = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    if (wxluaO_isgcobject(L, res)) wxluaO_undeletegcobject(L, res);
    // call Set
    wxXmlResource* returns = (wxXmlResource*)wxXmlResource::Set(res);
    if (!wxluaO_isgcobject(L, returns)) wxluaO_addgcobject(L, returns, wxluatype_wxXmlResource);
    // push the result datatype
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxXmlResource);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_SetDomain[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_SetDomain(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_SetDomain[1] = {{ wxLua_wxXmlResource_SetDomain, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_SetDomain }};
//     void SetDomain(const wxString& domain );
static int LUACALL wxLua_wxXmlResource_SetDomain(lua_State *L)
{
    // const wxString domain
    const wxString domain = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call SetDomain
    self->SetDomain(domain);

    return 0;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_SetFlags[] = { &wxluatype_wxXmlResource, &wxluatype_TNUMBER, NULL };
static int LUACALL wxLua_wxXmlResource_SetFlags(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_SetFlags[1] = {{ wxLua_wxXmlResource_SetFlags, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_SetFlags }};
//     void SetFlags(int flags);
static int LUACALL wxLua_wxXmlResource_SetFlags(lua_State *L)
{
    // int flags
    int flags = (int)wxlua_getnumbertype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call SetFlags
    self->SetFlags(flags);

    return 0;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_Unload[] = { &wxluatype_wxXmlResource, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_Unload(lua_State *L);
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_Unload[1] = {{ wxLua_wxXmlResource_Unload, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_Unload }};
//     bool Unload(const wxString& filename );
static int LUACALL wxLua_wxXmlResource_Unload(lua_State *L)
{
    // const wxString filename
    const wxString filename = wxlua_getwxStringtype(L, 2);
    // get this
    wxXmlResource * self = (wxXmlResource *)wxluaT_getuserdatatype(L, 1, wxluatype_wxXmlResource);
    // call Unload
    bool returns = (self->Unload(filename));
    // push the result flag
    lua_pushboolean(L, returns);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_delete[] = { &wxluatype_wxXmlResource, NULL };
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_delete[1] = {{ wxlua_userdata_delete, WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, 1, 1, s_wxluatypeArray_wxLua_wxXmlResource_delete }};

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_constructor1[] = { &wxluatype_TSTRING, &wxluatype_TNUMBER, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_constructor1(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_constructor1[1] = {{ wxLua_wxXmlResource_constructor1, WXLUAMETHOD_CONSTRUCTOR, 1, 3, s_wxluatypeArray_wxLua_wxXmlResource_constructor1 }};
//     wxXmlResource(const wxString& filemask, int flags = wxXRC_USE_LOCALE, const wxString& domain = "");
static int LUACALL wxLua_wxXmlResource_constructor1(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // const wxString domain = ""
    const wxString domain = (argCount >= 3 ? wxlua_getwxStringtype(L, 3) : wxString(wxEmptyString));
    // int flags = wxXRC_USE_LOCALE
    int flags = (argCount >= 2 ? (int)wxlua_getnumbertype(L, 2) : wxXRC_USE_LOCALE);
    // const wxString filemask
    const wxString filemask = wxlua_getwxStringtype(L, 1);
    // call constructor
    wxXmlResource* returns = new wxXmlResource(filemask, flags, domain);
    // add to tracked memory list
    wxluaO_addgcobject(L, returns, wxluatype_wxXmlResource);
    // push the constructed class pointer
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxXmlResource);

    return 1;
}

static wxLuaArgType s_wxluatypeArray_wxLua_wxXmlResource_constructor[] = { &wxluatype_TNUMBER, &wxluatype_TSTRING, NULL };
static int LUACALL wxLua_wxXmlResource_constructor(lua_State *L);
// static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_constructor[1] = {{ wxLua_wxXmlResource_constructor, WXLUAMETHOD_CONSTRUCTOR, 0, 2, s_wxluatypeArray_wxLua_wxXmlResource_constructor }};
//     wxXmlResource(int flags = wxXRC_USE_LOCALE, const wxString& domain = "");
static int LUACALL wxLua_wxXmlResource_constructor(lua_State *L)
{
    // get number of arguments
    int argCount = lua_gettop(L);
    // const wxString domain = ""
    const wxString domain = (argCount >= 2 ? wxlua_getwxStringtype(L, 2) : wxString(wxEmptyString));
    // int flags = wxXRC_USE_LOCALE
    int flags = (argCount >= 1 ? (int)wxlua_getnumbertype(L, 1) : wxXRC_USE_LOCALE);
    // call constructor
    wxXmlResource* returns = new wxXmlResource(flags, domain);
    // add to tracked memory list
    wxluaO_addgcobject(L, returns, wxluatype_wxXmlResource);
    // push the constructed class pointer
    wxluaT_pushuserdatatype(L, returns, wxluatype_wxXmlResource);

    return 1;
}




#if ((wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC))
// function overload table
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadDialog_overload[] =
{

#if (wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { wxLua_wxXmlResource_LoadDialog1, WXLUAMETHOD_METHOD, 4, 4, s_wxluatypeArray_wxLua_wxXmlResource_LoadDialog1 },
#endif // (wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { wxLua_wxXmlResource_LoadDialog, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxXmlResource_LoadDialog },
#endif // (wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC)
};
static int s_wxluafunc_wxLua_wxXmlResource_LoadDialog_overload_count = sizeof(s_wxluafunc_wxLua_wxXmlResource_LoadDialog_overload)/sizeof(wxLuaBindCFunc);

#endif // ((wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC))

#if ((wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC))
// function overload table
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadMenuBar_overload[] =
{

#if (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { wxLua_wxXmlResource_LoadMenuBar1, WXLUAMETHOD_METHOD, 2, 2, s_wxluatypeArray_wxLua_wxXmlResource_LoadMenuBar1 },
#endif // (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { wxLua_wxXmlResource_LoadMenuBar, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxXmlResource_LoadMenuBar },
#endif // (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)
};
static int s_wxluafunc_wxLua_wxXmlResource_LoadMenuBar_overload_count = sizeof(s_wxluafunc_wxLua_wxXmlResource_LoadMenuBar_overload)/sizeof(wxLuaBindCFunc);

#endif // ((wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC))

#if (wxLUA_USE_wxXRC && wxUSE_XRC)
// function overload table
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_LoadPanel_overload[] =
{
    { wxLua_wxXmlResource_LoadPanel1, WXLUAMETHOD_METHOD, 4, 4, s_wxluatypeArray_wxLua_wxXmlResource_LoadPanel1 },
    { wxLua_wxXmlResource_LoadPanel, WXLUAMETHOD_METHOD, 3, 3, s_wxluatypeArray_wxLua_wxXmlResource_LoadPanel },
};
static int s_wxluafunc_wxLua_wxXmlResource_LoadPanel_overload_count = sizeof(s_wxluafunc_wxLua_wxXmlResource_LoadPanel_overload)/sizeof(wxLuaBindCFunc);

// function overload table
static wxLuaBindCFunc s_wxluafunc_wxLua_wxXmlResource_constructor_overload[] =
{
    { wxLua_wxXmlResource_constructor1, WXLUAMETHOD_CONSTRUCTOR, 1, 3, s_wxluatypeArray_wxLua_wxXmlResource_constructor1 },
    { wxLua_wxXmlResource_constructor, WXLUAMETHOD_CONSTRUCTOR, 0, 2, s_wxluatypeArray_wxLua_wxXmlResource_constructor },
};
static int s_wxluafunc_wxLua_wxXmlResource_constructor_overload_count = sizeof(s_wxluafunc_wxLua_wxXmlResource_constructor_overload)/sizeof(wxLuaBindCFunc);

#endif // (wxLUA_USE_wxXRC && wxUSE_XRC)

void wxLua_wxXmlResource_delete_function(void** p)
{
    wxXmlResource* o = (wxXmlResource*)(*p);
    delete o;
}

// Map Lua Class Methods to C Binding Functions
wxLuaBindMethod wxXmlResource_methods[] = {
    { "AttachUnknownControl", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_AttachUnknownControl, 1, NULL },
    { "ClearHandlers", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_ClearHandlers, 1, NULL },
    { "CompareVersion", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_CompareVersion, 1, NULL },
    { "Get", WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, s_wxluafunc_wxLua_wxXmlResource_Get, 1, NULL },
    { "GetFlags", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_GetFlags, 1, NULL },
    { "GetVersion", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_GetVersion, 1, NULL },
    { "GetXRCID", WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, s_wxluafunc_wxLua_wxXmlResource_GetXRCID, 1, NULL },
    { "InitAllHandlers", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_InitAllHandlers, 1, NULL },
    { "Load", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_Load, 1, NULL },

#if (wxLUA_USE_wxBitmap) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { "LoadBitmap", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadBitmap, 1, NULL },
#endif // (wxLUA_USE_wxBitmap) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if ((wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC))
    { "LoadDialog", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadDialog_overload, s_wxluafunc_wxLua_wxXmlResource_LoadDialog_overload_count, 0 },
#endif // ((wxLUA_USE_wxDialog) && (wxLUA_USE_wxXRC && wxUSE_XRC))

#if (wxLUA_USE_wxFrame) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { "LoadFrame", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadFrame, 1, NULL },
#endif // (wxLUA_USE_wxFrame) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxIcon) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { "LoadIcon", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadIcon, 1, NULL },
#endif // (wxLUA_USE_wxIcon) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { "LoadMenu", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadMenu, 1, NULL },
#endif // (wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC)

#if ((wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC))
    { "LoadMenuBar", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadMenuBar_overload, s_wxluafunc_wxLua_wxXmlResource_LoadMenuBar_overload_count, 0 },
#endif // ((wxLUA_USE_wxMenu && wxUSE_MENUS) && (wxLUA_USE_wxXRC && wxUSE_XRC))

#if (wxLUA_USE_wxXRC && wxUSE_XRC)
    { "LoadPanel", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadPanel_overload, s_wxluafunc_wxLua_wxXmlResource_LoadPanel_overload_count, 0 },
#endif // (wxLUA_USE_wxXRC && wxUSE_XRC)

#if (wxLUA_USE_wxToolbar) && (wxLUA_USE_wxXRC && wxUSE_XRC)
    { "LoadToolBar", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_LoadToolBar, 1, NULL },
#endif // (wxLUA_USE_wxToolbar) && (wxLUA_USE_wxXRC && wxUSE_XRC)

    { "Set", WXLUAMETHOD_METHOD|WXLUAMETHOD_STATIC, s_wxluafunc_wxLua_wxXmlResource_Set, 1, NULL },
    { "SetDomain", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_SetDomain, 1, NULL },
    { "SetFlags", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_SetFlags, 1, NULL },
    { "Unload", WXLUAMETHOD_METHOD, s_wxluafunc_wxLua_wxXmlResource_Unload, 1, NULL },
    { "delete", WXLUAMETHOD_METHOD|WXLUAMETHOD_DELETE, s_wxluafunc_wxLua_wxXmlResource_delete, 1, NULL },

#if (wxLUA_USE_wxXRC && wxUSE_XRC)
    { "wxXmlResource", WXLUAMETHOD_CONSTRUCTOR, s_wxluafunc_wxLua_wxXmlResource_constructor_overload, s_wxluafunc_wxLua_wxXmlResource_constructor_overload_count, 0 },
#endif // (wxLUA_USE_wxXRC && wxUSE_XRC)

    { 0, 0, 0, 0 },
};

int wxXmlResource_methodCount = sizeof(wxXmlResource_methods)/sizeof(wxLuaBindMethod) - 1;

#endif  // wxLUA_USE_wxXRC && wxUSE_XRC



// ---------------------------------------------------------------------------
// ../modules/wxbind/src/wxxrc_bind.cpp was generated by genwxbind.lua
//
// Any changes made to this file will be lost when the file is regenerated.
// ---------------------------------------------------------------------------


// ---------------------------------------------------------------------------
// wxLuaGetEventList_wxxrc() is called to register events
// ---------------------------------------------------------------------------

wxLuaBindEvent* wxLuaGetEventList_wxxrc(size_t &count)
{
    static wxLuaBindEvent eventList[] =
    {

        { 0, 0, 0 },
    };
    count = sizeof(eventList)/sizeof(wxLuaBindEvent) - 1;
    return eventList;
}

// ---------------------------------------------------------------------------
// wxLuaGetDefineList_wxxrc() is called to register #define and enum
// ---------------------------------------------------------------------------

wxLuaBindNumber* wxLuaGetDefineList_wxxrc(size_t &count)
{
    static wxLuaBindNumber numberList[] =
    {
#if wxLUA_USE_wxXRC && wxUSE_XRC
        { "wxXRC_NO_RELOADING", wxXRC_NO_RELOADING },
        { "wxXRC_NO_SUBCLASSING", wxXRC_NO_SUBCLASSING },
        { "wxXRC_USE_LOCALE", wxXRC_USE_LOCALE },
#endif // wxLUA_USE_wxXRC && wxUSE_XRC


        { 0, 0 },
    };
    count = sizeof(numberList)/sizeof(wxLuaBindNumber) - 1;
    return numberList;
}

// ---------------------------------------------------------------------------

// wxLuaGetStringList_wxxrc() is called to register #define_string
// ---------------------------------------------------------------------------

wxLuaBindString* wxLuaGetStringList_wxxrc(size_t &count)
{
    static wxLuaBindString stringList[] =
    {

        { 0, 0 },
    };
    count = sizeof(stringList)/sizeof(wxLuaBindString) - 1;
    return stringList;
}

// ---------------------------------------------------------------------------
// wxLuaGetObjectList_wxxrc() is called to register object and pointer bindings
// ---------------------------------------------------------------------------

wxLuaBindObject* wxLuaGetObjectList_wxxrc(size_t &count)
{
    static wxLuaBindObject objectList[] =
    {

        { 0, 0, 0, 0 },
    };
    count = sizeof(objectList)/sizeof(wxLuaBindObject) - 1;
    return objectList;
}

// ---------------------------------------------------------------------------
// wxLuaGetFunctionList_wxxrc() is called to register global functions
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
// wxLuaGetFunctionList_wxxrc() is called to register global functions
// ---------------------------------------------------------------------------

wxLuaBindMethod* wxLuaGetFunctionList_wxxrc(size_t &count)
{
    static wxLuaBindMethod functionList[] =
    {

        { 0, 0, 0, 0 },
    };
    count = sizeof(functionList)/sizeof(wxLuaBindMethod) - 1;
    return functionList;
}



// ---------------------------------------------------------------------------
// wxLuaGetClassList_wxxrc() is called to register classes
// ---------------------------------------------------------------------------

static const char* wxluaclassname_wxObject = "wxObject";
static const char* wxluaclassname_wxXmlResource = "wxXmlResource";

static const char* wxluabaseclassnames_wxXmlResource[] = { wxluaclassname_wxObject, NULL };
static wxLuaBindClass* wxluabaseclassbinds_wxXmlResource[] = { NULL };
// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxXRC && wxUSE_XRC
    extern wxLuaBindMethod wxXmlResource_methods[];
    extern int wxXmlResource_methodCount;
    extern void wxLua_wxXmlResource_delete_function(void** p);
#endif // wxLUA_USE_wxXRC && wxUSE_XRC




wxLuaBindClass* wxLuaGetClassList_wxxrc(size_t &count)
{
    static wxLuaBindClass classList[] =
    {
#if wxLUA_USE_wxXRC && wxUSE_XRC
        { wxluaclassname_wxXmlResource, wxXmlResource_methods, wxXmlResource_methodCount, CLASSINFO(wxXmlResource), &wxluatype_wxXmlResource, wxluabaseclassnames_wxXmlResource, wxluabaseclassbinds_wxXmlResource, NULL, NULL, NULL, 0, &wxLua_wxXmlResource_delete_function, },
#endif // wxLUA_USE_wxXRC && wxUSE_XRC


        { 0, 0, 0, 0, 0, 0, 0 },
    };
    count = sizeof(classList)/sizeof(wxLuaBindClass) - 1;

    return classList;
}

// ---------------------------------------------------------------------------
// wxLuaBinding_wxxrc() - the binding class
// ---------------------------------------------------------------------------

IMPLEMENT_DYNAMIC_CLASS(wxLuaBinding_wxxrc, wxLuaBinding)

wxLuaBinding_wxxrc::wxLuaBinding_wxxrc() : wxLuaBinding()
{
    m_bindingName   = wxT("wxxrc");
    m_nameSpace     = wxT("wx");
    m_classArray    = wxLuaGetClassList_wxxrc(m_classCount);
    m_numberArray   = wxLuaGetDefineList_wxxrc(m_numberCount);
    m_stringArray   = wxLuaGetStringList_wxxrc(m_stringCount);
    m_eventArray    = wxLuaGetEventList_wxxrc(m_eventCount);
    m_objectArray   = wxLuaGetObjectList_wxxrc(m_objectCount);
    m_functionArray = wxLuaGetFunctionList_wxxrc(m_functionCount);
    InitBinding();
}



// ---------------------------------------------------------------------------

wxLuaBinding* wxLuaBinding_wxxrc_init()
{
    static wxLuaBinding_wxxrc m_binding;

    if (wxLuaBinding::GetBindingArray().Index(&m_binding) == wxNOT_FOUND)
        wxLuaBinding::GetBindingArray().Add(&m_binding);

    return &m_binding;
}



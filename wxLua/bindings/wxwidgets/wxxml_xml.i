// ===========================================================================
// Purpose:     wxXML library
// Author:      J Winwood, John Labenski
// Created:     14/11/2001
// Copyright:   (c) 2001-2002 Lomtick Software. All rights reserved.
// Licence:     wxWidgets licence
// wxWidgets:   Updated to 2.8.4
// ===========================================================================

#if wxLUA_USE_wxXML && wxUSE_XML

%wxchkver_2_6 #include "wx/xml/xml.h"

enum wxXmlNodeType
{
    wxXML_ELEMENT_NODE,
    wxXML_ATTRIBUTE_NODE,
    wxXML_TEXT_NODE,
    wxXML_CDATA_SECTION_NODE,
    wxXML_ENTITY_REF_NODE,
    wxXML_ENTITY_NODE,
    wxXML_PI_NODE,
    wxXML_COMMENT_NODE,
    wxXML_DOCUMENT_NODE,
    wxXML_DOCUMENT_TYPE_NODE,
    wxXML_DOCUMENT_FRAG_NODE,
    wxXML_NOTATION_NODE,
    wxXML_HTML_DOCUMENT_NODE
};

// ---------------------------------------------------------------------------
// wxXmlNode

class %delete wxXmlNode
{
    wxXmlNode( );
    wxXmlNode(wxXmlNodeType type, const wxString& name, const wxString& content = "" );

    // %override wxXmlNode::wxXmlNode(wxXmlNode *parent, wxXmlNodeType type, const wxString& name, const wxString& content, wxXmlProperty *props, wxXmlNode *next );
    // C++ Func: No change: if parent is not NULL, created node is not garbage collected.
    %wxcompat_2_8 wxXmlNode(wxXmlNode *parent, wxXmlNodeType type, const wxString& name, const wxString& content, wxXmlProperty *props, wxXmlNode *next );
    %wxchkver_3_1_1 wxXmlNode(wxXmlNode *parent, wxXmlNodeType type, const wxString& name, const wxString& content, wxXmlAttribute *props, wxXmlNode *next );

    void AddChild(%ungc wxXmlNode *child );
    void InsertChild(%ungc wxXmlNode *child, wxXmlNode *before_node );

    // %override bool wxXmlNode::RemoveChild(%gc wxXmlNode *child );
    // C++ Func: No change: only if child is removed will we garbage collect it
    bool RemoveChild(%gc wxXmlNode *child );

    %wxcompat_2_8 void AddProperty(const wxString& name, const wxString& value );
    %wxcompat_2_8 bool DeleteProperty(const wxString& name );
    %wxchkver_3_1_1 void AddAttribute(const wxString& name, const wxString& value);
    %wxchkver_3_1_1 bool DeleteAttribute(const wxString& name);
    wxXmlNodeType GetType() const;
    wxString GetName() const;
    wxString GetContent() const;
    wxXmlNode *GetParent() const;
    wxXmlNode *GetNext() const;
    wxXmlNode *GetChildren() const;

    %wxcompat_2_8 wxXmlProperty *GetProperties() const;
    // %override [bool string] wxXmlNode::GetPropValPtr(const wxString& propName) const;
    // C++ Func: bool GetPropVal(const wxString& propName, wxString *value) const;
    %wxcompat_2_8 %override_name wxLua_wxXmlNode_GetPropValPtr bool GetPropVal(const wxString& propName) const;
    %wxcompat_2_8 wxString GetPropVal(const wxString& propName, const wxString& defaultVal) const;
    %wxcompat_2_8 bool HasProp(const wxString& propName) const;

    %wxchkver_3_1_1 wxXmlAttribute *GetAttributes() const;

    %wxchkver_3_1_1 %override_name wxLua_wxXmlNode_GetAttributePtr bool GetAttribute(const wxString& attrName) const;
    %wxchkver_3_1_1 wxString GetAttribute(const wxString& attrName,
										  const wxString& defaultVal = wxEmptyString) const;
    %wxchkver_3_1_1 bool HasAttribute(const wxString& attrName) const;

    void SetType(wxXmlNodeType type );
    void SetName(const wxString& name );
    void SetContent(const wxString& con );
    void SetParent(wxXmlNode *parent );
    void SetNext(wxXmlNode *next );
    void SetChildren(%ungc wxXmlNode *child );
    %wxcompat_2_8 void SetProperties(%ungc wxXmlProperty *prop );
    %wxcompat_2_8 void AddProperty(%ungc wxXmlProperty *prop );
    %wxchkver_3_1_1 void SetAttributes(wxXmlAttribute *attr);
    %wxchkver_3_1_1 void AddAttribute(wxXmlAttribute *attr);
};

// ---------------------------------------------------------------------------
// wxXmlProperty
#if %wxcompat_2_8
class %delete wxXmlProperty
{
    wxXmlProperty( );
    wxXmlProperty(const wxString& name, const wxString& value, wxXmlProperty *next );

    wxString GetName( );
    wxString GetValue( );
    wxXmlProperty *GetNext( );
    void SetName(const wxString& name );
    void SetValue(const wxString& value );
    void SetNext(wxXmlProperty *next );
};
#endif


// ---------------------------------------------------------------------------
// wxXmlAttribute
#if %wxchkver_3_1_1
class %delete wxXmlAttribute
{
    wxXmlAttribute( );
    wxXmlAttribute(const wxString& name, const wxString& value, wxXmlAttribute *next = NULL );

    wxString GetName( );
    wxString GetValue( );
    wxXmlAttribute *GetNext( );
    void SetName(const wxString& name );
    void SetValue(const wxString& value );
    void SetNext(wxXmlAttribute *next );
};
#endif

// ---------------------------------------------------------------------------
// wxXmlDocument

class %delete wxXmlDocument : public wxObject
{
    wxXmlDocument();
    wxXmlDocument(const wxString& filename, const wxString& encoding = "UTF-8");
    //wxXmlDocument(wxInputStream& stream, const wxString& encoding = "UTF-8");

    bool Load(const wxString& filename, const wxString& encoding = "UTF-8");
    //bool Load(wxInputStream& stream, const wxString& encoding = "UTF-8");
    bool Save(const wxString& filename) const;
    //bool Save(wxOutputStream& stream) const;
    bool IsOk() const;
    wxXmlNode *GetRoot() const;

    wxString GetVersion() const;
    wxString GetFileEncoding() const;
    void SetRoot(%ungc wxXmlNode *node);
    void SetVersion(const wxString& version);
    void SetFileEncoding(const wxString& encoding);

    // These two are not for unicode
    //wxString GetEncoding() const;
    //void SetEncoding(const wxString& enc);
};

#endif //wxLUA_USE_wxXML && wxUSE_XML

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_LITEEDITOR_WXCRAFTER_BASE_CLASSES_H
#define _CODELITE_LITEEDITOR_WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/splitter.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/pen.h>
#include <wx/aui/auibar.h>
#include <map>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/imaglist.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/bannerwindow.h>
#include <wx/filepicker.h>
#include <wx/dataview.h>
#include "addfunctionsmodel.h"
#include <wx/button.h>
#include <wx/scrolwin.h>
#include <wx/statbmp.h>
#include <wx/commandlinkbutton.h>
#include <wx/dirctrl.h>
#include <wx/simplebook.h>
#include "clConfigurationSelectionCtrl.h"
#include <wx/treectrl.h>
#include "fileview.h"
#include <wx/frame.h>
#include <wx/wizard.h>
#include <vector>
#include "dvtemplatesmodel.h"
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/stc/stc.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif


class NavBarControlBaseClass : public wxPanel
{
protected:
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPage39;
    wxChoice* m_scope;
    wxPanel* m_splitterPage41;
    wxChoice* m_func;

protected:
    virtual void OnScope(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFunction(wxCommandEvent& event) { event.Skip(); }

public:
    wxChoice* GetScope() { return m_scope; }
    wxPanel* GetSplitterPage39() { return m_splitterPage39; }
    wxChoice* GetFunc() { return m_func; }
    wxPanel* GetSplitterPage41() { return m_splitterPage41; }
    wxSplitterWindow* GetSplitter() { return m_splitter; }
    NavBarControlBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxWANTS_CHARS|wxTAB_TRAVERSAL|wxTRANSPARENT_WINDOW);
    virtual ~NavBarControlBaseClass();
};


class BuildTabTopPanelBaseClass : public wxPanel
{
protected:
    wxAuiToolBar* m_auibar48;

protected:
    virtual void OnToolPinCommandToolClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAutoScroll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAutoScrollUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearBuildOutput(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearBuildOutputUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnSaveBuildOutput(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSaveBuildOutputUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCopyBuildOutput(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCopyBuildOutputUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnPaste(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPasteUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxAuiToolBar* GetAuibar48() { return m_auibar48; }
    BuildTabTopPanelBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~BuildTabTopPanelBaseClass();
};


class NewProjImgList : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;
    // The requested image resolution (can be one of @2x, @1.5x, @1.25x or an empty string (the default)
    wxString m_resolution;
    int m_imagesWidth;
    int m_imagesHeight;


protected:

public:
    NewProjImgList();
    const wxBitmap& Bitmap(const wxString &name) const {
        if ( !m_bitmaps.count(name + m_resolution) )
            return wxNullBitmap;
        return m_bitmaps.find(name + m_resolution)->second;
    }

    void SetBitmapResolution(const wxString &res = wxEmptyString) {
        m_resolution = res;
    }

    virtual ~NewProjImgList();
};


class AddFunctionsImplBaseDlg : public wxDialog
{
protected:
    wxBannerWindow* m_banner125;
    wxFilePickerCtrl* m_filePicker;
    wxDataViewCtrl* m_dataview;
    wxObjectDataPtr<AddFunctionsModel> m_dataviewModel;

    wxButton* m_button133;
    wxButton* m_button135;
    wxButton* m_button121;
    wxButton* m_button123;

protected:
    virtual void OnCheckAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUncheckAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxBannerWindow* GetBanner125() { return m_banner125; }
    wxFilePickerCtrl* GetFilePicker() { return m_filePicker; }
    wxDataViewCtrl* GetDataview() { return m_dataview; }
    wxButton* GetButton133() { return m_button133; }
    wxButton* GetButton135() { return m_button135; }
    wxButton* GetButton121() { return m_button121; }
    wxButton* GetButton123() { return m_button123; }
    AddFunctionsImplBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Add function implementation"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~AddFunctionsImplBaseDlg();
};


class WelcomePageBase : public wxPanel
{
protected:
    wxScrolledWindow* m_scrollWin247;
    wxPanel* m_panel191;
    wxStaticBitmap* m_staticBitmap;
    wxCommandLinkButton* m_cmdLnkBtnNewWorkspace;
    wxCommandLinkButton* m_cmdLnkBtnNewProject;
    wxCommandLinkButton* m_cmdLnkBtnWorkspaces;
    wxCommandLinkButton* m_cmdLnkBtnFilesMenu;
    wxCommandLinkButton* m_cmdLnkBtnForum;
    wxCommandLinkButton* m_cmdLnkBtnWiki;

protected:
    virtual void OnSize(wxSizeEvent& event) { event.Skip(); }
    virtual void OnNewWorkspace(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOpenWorkspace(wxCommandEvent& event) { event.Skip(); }
    virtual void OnShowWorkspaceMenu(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRecentProjectUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnShowFileseMenu(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRecentFileUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOpenForums(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOpenWiki(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticBitmap* GetStaticBitmap() { return m_staticBitmap; }
    wxCommandLinkButton* GetCmdLnkBtnNewWorkspace() { return m_cmdLnkBtnNewWorkspace; }
    wxCommandLinkButton* GetCmdLnkBtnNewProject() { return m_cmdLnkBtnNewProject; }
    wxCommandLinkButton* GetCmdLnkBtnWorkspaces() { return m_cmdLnkBtnWorkspaces; }
    wxCommandLinkButton* GetCmdLnkBtnFilesMenu() { return m_cmdLnkBtnFilesMenu; }
    wxCommandLinkButton* GetCmdLnkBtnForum() { return m_cmdLnkBtnForum; }
    wxCommandLinkButton* GetCmdLnkBtnWiki() { return m_cmdLnkBtnWiki; }
    wxPanel* GetPanel191() { return m_panel191; }
    wxScrolledWindow* GetScrollWin247() { return m_scrollWin247; }
    WelcomePageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~WelcomePageBase();
};


class FileExplorerBase : public wxPanel
{
protected:
    wxGenericDirCtrl* m_genericDirCtrl;

protected:
    virtual void OnItemActivated(wxTreeEvent& event) { event.Skip(); }
    virtual void OnContextMenu(wxTreeEvent& event) { event.Skip(); }
    virtual void OnKeyDown(wxTreeEvent& event) { event.Skip(); }

public:
    wxGenericDirCtrl* GetGenericDirCtrl() { return m_genericDirCtrl; }
    FileExplorerBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~FileExplorerBase();
};


class WorkspaceTabBase : public wxPanel
{
public:
    enum {
        ID_TOOL_LINK_EDITOR = 8001,
        ID_TOOL_COLLAPSE_ALL = 8002,
        ID_TOOL_ACTIVE_PROJECT_SETTINGS = 8003,
        ID_TOOL_GOTO_ACTIVE_PROJECT = 8004,
    };
protected:
    wxSimplebook* m_simpleBook;
    wxPanel* m_panelCxx;
    wxAuiToolBar* m_auibar;
    clConfigurationSelectionCtrl* m_configChangeCtrl;
    FileViewTree* m_fileView;

protected:
    virtual void OnCollapseAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCollapseAllUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnGoHome(wxCommandEvent& event) { event.Skip(); }
    virtual void OnGoHomeUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnProjectSettings(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectSettingsUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnLinkEditor(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLinkEditorUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxAuiToolBar* GetAuibar() { return m_auibar; }
    clConfigurationSelectionCtrl* GetConfigChangeCtrl() { return m_configChangeCtrl; }
    FileViewTree* GetFileView() { return m_fileView; }
    wxPanel* GetPanelCxx() { return m_panelCxx; }
    wxSimplebook* GetSimpleBook() { return m_simpleBook; }
    WorkspaceTabBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~WorkspaceTabBase();
};


class EditorFrameBase : public wxFrame
{
protected:
    wxPanel* m_mainPanel;
    wxToolBar* m_toolbar;

protected:
    virtual void OnCloseWindow(wxCloseEvent& event) { event.Skip(); }
    virtual void OnClose(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCloseUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnFind(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFindUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxToolBar* GetToolbar() { return m_toolbar; }
    EditorFrameBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("EditorFrame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(800,600), long style = wxDEFAULT_FRAME_STYLE);
    virtual ~EditorFrameBase();
};


class NewProjectWizardBase : public wxWizard
{
protected:
    std::vector<wxWizardPageSimple*> m_pages;

    wxWizardPageSimple* m_wizardPageTemplate;
    wxBannerWindow* m_banner386;
    wxDataViewCtrl* m_dataviewTemplates;
    wxObjectDataPtr<DVTemplatesModel> m_dataviewTemplatesModel;

    wxWizardPageSimple* m_wizardPageDetails;
    wxBannerWindow* m_banner398;
    wxStaticText* m_staticText16;
    wxTextCtrl* m_txtProjName;
    wxStaticText* m_staticText18;
    wxTextCtrl* m_textCtrlProjectPath;
    wxButton* m_buttonBrowse;
    wxCheckBox* m_cbSeparateDir;
    wxStaticText* m_stxtFullFileName;
    wxWizardPageSimple* m_wizardPageToolchain;
    wxBannerWindow* m_banner390;
    wxStaticText* m_staticText414;
    wxChoice* m_choiceCompiler;
    wxStaticText* m_staticText418;
    wxChoice* m_choiceDebugger;
    wxStaticText* m_staticText569;
    wxChoice* m_choiceBuildSystem;

protected:
    virtual void OnPageChanging(wxWizardEvent& event) { event.Skip(); }
    virtual void OnFinish(wxWizardEvent& event) { event.Skip(); }
    virtual void OnItemSelected(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnProjectNameChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnProjectPathUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseProjectPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCompilerSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDebuggerSelected(wxCommandEvent& event) { event.Skip(); }

public:
    wxBannerWindow* GetBanner386() { return m_banner386; }
    wxDataViewCtrl* GetDataviewTemplates() { return m_dataviewTemplates; }
    wxWizardPageSimple* GetWizardPageTemplate() { return m_wizardPageTemplate; }
    wxBannerWindow* GetBanner398() { return m_banner398; }
    wxStaticText* GetStaticText16() { return m_staticText16; }
    wxTextCtrl* GetTxtProjName() { return m_txtProjName; }
    wxStaticText* GetStaticText18() { return m_staticText18; }
    wxTextCtrl* GetTextCtrlProjectPath() { return m_textCtrlProjectPath; }
    wxButton* GetButtonBrowse() { return m_buttonBrowse; }
    wxCheckBox* GetCbSeparateDir() { return m_cbSeparateDir; }
    wxStaticText* GetStxtFullFileName() { return m_stxtFullFileName; }
    wxWizardPageSimple* GetWizardPageDetails() { return m_wizardPageDetails; }
    wxBannerWindow* GetBanner390() { return m_banner390; }
    wxStaticText* GetStaticText414() { return m_staticText414; }
    wxChoice* GetChoiceCompiler() { return m_choiceCompiler; }
    wxStaticText* GetStaticText418() { return m_staticText418; }
    wxChoice* GetChoiceDebugger() { return m_choiceDebugger; }
    wxStaticText* GetStaticText569() { return m_staticText569; }
    wxChoice* GetChoiceBuildSystem() { return m_choiceBuildSystem; }
    wxWizardPageSimple* GetWizardPageToolchain() { return m_wizardPageToolchain; }
    NewProjectWizardBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Project Wizard"), const wxBitmap& bmp = wxNullBitmap, const wxPoint& pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    wxWizardPageSimple* GetFirstPage() const { if(!m_pages.empty()) return m_pages.at(0); return NULL; }
    virtual ~NewProjectWizardBase();
};


class ClangOutputTabBase : public wxPanel
{
public:
    enum {
        ID_TOOL_CLEAR_LOG = 8001,
        ID_TOOL_CLEAR_ALL = 8002,
    };
protected:
    wxAuiToolBar* m_auibar;
    wxCheckBox* m_checkBoxEnableClang;
    wxCheckBox* m_checkBoxShowErrors;
    wxStyledTextCtrl* m_stc;

protected:
    virtual void OnEnableClang(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEnableClangUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnShowAnnotations(wxCommandEvent& event) { event.Skip(); }
    virtual void OnShowAnnotationsUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearCache(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearCacheUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearText(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearTextUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckBoxEnableClang() { return m_checkBoxEnableClang; }
    wxCheckBox* GetCheckBoxShowErrors() { return m_checkBoxShowErrors; }
    wxAuiToolBar* GetAuibar() { return m_auibar; }
    wxStyledTextCtrl* GetStc() { return m_stc; }
    ClangOutputTabBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~ClangOutputTabBase();
};


class OpenFolderDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText479;
    wxTextCtrl* m_textCtrlFolder;
    wxStdDialogButtonSizer* m_stdBtnSizer473;
    wxButton* m_button475;
    wxButton* m_button477;

protected:

public:
    wxStaticText* GetStaticText479() { return m_staticText479; }
    wxTextCtrl* GetTextCtrlFolder() { return m_textCtrlFolder; }
    OpenFolderDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Open Folder"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~OpenFolderDlgBase();
};


class DefaultWorkspacePageBase : public wxPanel
{
protected:
    wxStaticText* m_staticText523;
    wxStaticBitmap* m_staticBitmap521;

protected:

public:
    wxStaticText* GetStaticText523() { return m_staticText523; }
    wxStaticBitmap* GetStaticBitmap521() { return m_staticBitmap521; }
    DefaultWorkspacePageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL|wxBORDER_NONE);
    virtual ~DefaultWorkspacePageBase();
};


class SelectDropTargetBaseDlg : public wxDialog
{
protected:
    wxBannerWindow* m_banner;
    wxDataViewListCtrl* m_dvListCtrl;
    wxStdDialogButtonSizer* m_stdBtnSizer543;
    wxButton* m_button545;
    wxButton* m_button547;

protected:
    virtual void OnSelectionActivated(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxBannerWindow* GetBanner() { return m_banner; }
    wxDataViewListCtrl* GetDvListCtrl() { return m_dvListCtrl; }
    SelectDropTargetBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select View"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,400), long style = wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP);
    virtual ~SelectDropTargetBaseDlg();
};

#endif

#ifndef DLGMANAGEBLOB_H
#define DLGMANAGEBLOB_H

//(*Headers(dlgmanageblob)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/gbsizer.h>
#include <wx/listctrl.h>
#include <wx/statline.h>
//*)

class ManageGlobsDlg: public wxDialog
{
    public:

        ManageGlobsDlg(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
        ~ManageGlobsDlg() override;


    private:

        //(*Handlers(ManageGlobsDlg)
        void OnAddClick(wxCommandEvent& event);
        void OnDeleteClick(wxCommandEvent& event);
        void OnEditClick(wxCommandEvent& event);
        void OnOkClick(wxCommandEvent& event);
        //*)

        void PopulateList();
        bool GlobsChanged();

    private:
        //(*Declarations(ManageGlobsDlg)
        wxListCtrl* lstGlobsList;
        //*)

        //(*Identifiers(ManageGlobsDlg)
        static const long ID_LISTCTRL;
        static const long ID_BUTTON_ADD;
        static const long ID_BUTTON_DELETE;
        static const long ID_BUTTON_EDIT;
        //*)

    private:
        std::vector<cbProject::Glob> m_GlobList;

        DECLARE_EVENT_TABLE()
};

#endif

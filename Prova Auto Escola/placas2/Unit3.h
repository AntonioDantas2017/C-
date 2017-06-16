//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class Tfrmfinal : public TForm
{
__published:	// IDE-managed Components
        TImage *Image2;
        TLabel *lblseu;
        TLabel *lblqperg;
        TLabel *lblqacert;
        TLabel *lblt;
        TLabel *lblp;
        TLabel *lblrpos;
        TLabel *lblrn;
        TLabel *lblrap;
        TLabel *lblrt;
        TLabel *lblrp;
        TLabel *lblperg;
        TLabel *lblacerto;
        TLabel *lbltempo;
        TLabel *lblpont;
        TLabel *lblres;
        TImage *Image1;
        TLabel *Label1;
        TListBox *lstpos;
        TListBox *lstnome;
        TListBox *lstap;
        TListBox *lsttempo;
        TListBox *lstpont;
        TButton *cmdinicio;
        TButton *cmdfechar;
        TButton *cmdlimpar;
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall cmdinicioClick(TObject *Sender);
        void __fastcall cmdlimparClick(TObject *Sender);
        void __fastcall cmdfecharClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tfrmfinal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmfinal *frmfinal;
//---------------------------------------------------------------------------
#endif

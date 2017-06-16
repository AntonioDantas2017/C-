//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <OleCtrls.hpp>
#include <VCFI.hpp>
//---------------------------------------------------------------------------
class Tfrmbarras : public TForm
{
__published:	// IDE-managed Components
        TVtChart *grafico1b;
        TVtChart *grafico2b;
        TVtChart *grafico3b;
        TVtChart *grafico4b;
        TButton *cmdvoltar;
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall cmdvoltarClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:	  AnsiString aux,aux2,aux3;
          float auxn;	// User declarations
        __fastcall Tfrmbarras(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmbarras *frmbarras;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class Tfrminicio : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TPanel *pnlinicio;
        TLabel *Label1;
        TLabel *Label2;
        TEdit *txtnome;
        TButton *Button1;
        TButton *Button2;
        TRadioGroup *rdgalt;
        TComboBox *cboqtdp;
        void __fastcall cmdinicioClick(TObject *Sender);
        void __fastcall cmdfecharClick(TObject *Sender);
private:	// User declarations
public:		AnsiString nome;
                int sort,qtd; // User declarations
        __fastcall Tfrminicio(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrminicio *frminicio;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <OleCtrls.hpp>
#include <VCFI.hpp>
//---------------------------------------------------------------------------
class Tfrminicio : public TForm
{
__published:	// IDE-managed Components
        TPanel *pnlinserir;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TEdit *txtnumero;
        TEdit *txtnota;
        TButton *cmdinserir;
        TPanel *pnlcadastro;
        TLabel *Label4;
        TLabel *lbllinha;
        TButton *cmdzerar;
        TPanel *pnlgrafico;
        TLabel *Label5;
        TLabel *exemplo;
        TButton *cmdgerar;
        TVtChart *graficoexemplo;
        TGroupBox *GroupBox2;
        TRadioButton *barras;
        TRadioButton *setores;
        TRadioButton *linhas;
        TButton *cmdaltera;
        void __fastcall cmdinserirClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall barrasMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall setoresMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall pnlgraficoMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall cmdzerarClick(TObject *Sender);
        void __fastcall cmdalteraClick(TObject *Sender);
        void __fastcall txtnumeroKeyPress(TObject *Sender, char &Key);
        void __fastcall txtnotaKeyPress(TObject *Sender, char &Key);
        void __fastcall cmdgerarClick(TObject *Sender);
        void __fastcall linhasMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
private:	// User declarations
public:	   double matriz[25][2];
        int linha;
        float valor1,valor2,valor3,qtd1,qtd2,qtd3;
        int tipo;    // User declarations
        __fastcall Tfrminicio(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrminicio *frminicio;
//---------------------------------------------------------------------------
#endif

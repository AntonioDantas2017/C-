//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class Tfrmjogo : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TLabel *lblperg;
        TImage *imgcar;
        TImage *img;
        TLabel *lblp;
        TLabel *lbla;
        TLabel *lblt;
        TLabel *Label1;
        TLabel *lblqtdperg;
        TLabel *lblacertos;
        TLabel *lbltempo;
        TLabel *lblnome;
        TButton *cmdprox;
        TButton *cmdfinal;
        TButton *cmdfechar;
        TRadioGroup *rdg;
        TTimer *Timer1;
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall cmdproxClick(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall cmdfinalClick(TObject *Sender);
        void __fastcall cmdfecharClick(TObject *Sender);
private:	// User declarations
public:	AnsiString perg[30],fig[30],atern_a[30],atern_b[30],atern_c[30],atern_d[30],resp[30];
        int n,aux,acerto,seg;
        int repete[31]; // User declarations
        __fastcall Tfrmjogo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmjogo *frmjogo;
//---------------------------------------------------------------------------
#endif

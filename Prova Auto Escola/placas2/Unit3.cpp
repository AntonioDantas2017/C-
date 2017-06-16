//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmfinal *frmfinal;
//---------------------------------------------------------------------------
__fastcall Tfrmfinal::Tfrmfinal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmfinal::FormActivate(TObject *Sender)
{
frmjogo->Timer1->Enabled = false;
double a = frmjogo->acerto;
double p = frmjogo->aux;
double s = frmjogo->seg;
int pont=((a/p)*100000)/s;
int add=0;
int qtd=0;

if(((a/p)*100)>=60)
{
	lblres->Caption = "Parabéns "+(frminicio->nome)+"você consegui com uma porcentagem de acertos de "+((a/p)*100)+"%";
}else{
	lblres->Caption = "Tente novamente "+(frminicio->nome)+", porcentagem de acertos "+((a/p)*100)+"%";
}

lblperg->Caption = frmjogo->aux;
lblacerto->Caption = frmjogo->acerto;
lbltempo->Caption = frmjogo->seg;
lblpont->Caption = FloatToStr(pont);

for(int i=0;i<lstpont->Items->Count;i++)
{
        if(pont>StrToFloat(lstpont->Items->Strings[i]))
        {
                add=1;
                lstpont->Items->Add(lstpont->Items->Strings[lstpont->Items->Count-1]);
                lsttempo->Items->Add(lsttempo->Items->Strings[lsttempo->Items->Count-1]);
                lstnome->Items->Add(lstnome->Items->Strings[lstnome->Items->Count-1]);
                lstap->Items->Add(lstap->Items->Strings[lstap->Items->Count-1]);
                qtd = lstpont->Items->Count - 1;
                for(int j=1;j<(lstpont->Items->Count - i);j++)
                {
                        lstpont->Items->Strings[qtd] = lstpont->Items->Strings[qtd-1];
                        lsttempo->Items->Strings[qtd] = lsttempo->Items->Strings[qtd-1];
                        lstnome->Items->Strings[qtd] = lstnome->Items->Strings[qtd-1];
                        lstap->Items->Strings[qtd] = lstap->Items->Strings[qtd-1];
                        qtd--;
                }
                lstpont->Items->Strings[qtd] = FloatToStr(pont);
                lstnome->Items->Strings[qtd] = frminicio->nome;
                lstap->Items->Strings[qtd] = (IntToStr(frmjogo->acerto)+"/"+IntToStr(frmjogo->aux));
                lsttempo->Items->Strings[qtd] = IntToStr(frmjogo->seg);

        }
        if(add==1)
        {
                i = lstpont->Items->Count;
        }
}
if(add==0)
{
        lstpont->Items->Add(FloatToStr(pont));
        lstnome->Items->Add(frminicio->nome);
        lstap->Items->Add(IntToStr(frmjogo->acerto)+"/"+IntToStr(frmjogo->aux));
        lsttempo->Items->Add(IntToStr(frmjogo->seg));
}

for(int i=0;i<lstpont->Items->Count;i++)
{
        lstpos->Items->Strings[i] = IntToStr(i+1)+"°";
}

}
//---------------------------------------------------------------------------
void __fastcall Tfrmfinal::cmdinicioClick(TObject *Sender)
{
frmfinal->Hide();
frminicio->Show();
frmjogo->acerto = 0;
frmjogo->aux = 1;
frmjogo->seg = 0;
}
//---------------------------------------------------------------------------
void __fastcall Tfrmfinal::cmdlimparClick(TObject *Sender)
{
lstpos->Items->Clear();
lstnome->Items->Clear();
lstap->Items->Clear();
lsttempo->Items->Clear();
lstpont->Items->Clear();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmfinal::cmdfecharClick(TObject *Sender)
{
frmjogo->Close();
frminicio->Close();
frmfinal->Close();
}
//---------------------------------------------------------------------------





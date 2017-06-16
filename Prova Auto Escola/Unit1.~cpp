//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrminicio *frminicio;
//---------------------------------------------------------------------------
__fastcall Tfrminicio::Tfrminicio(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tfrminicio::cmdinicioClick(TObject *Sender)
{

if(txtnome=="")
{
	ShowMessage("Digite seu nome");
}else{
        nome = txtnome->Text;
        if(cboqtdp->Text=="")
        {
                ShowMessage("Escolha uma quantidade de perguntas");
        }else{
                if(StrToInt(cboqtdp->Text)<0)
                        {
                        ShowMessage("Digite uma quantidade de perguntas maior que 0");
                }else{
                        if(StrToInt(cboqtdp->Text)>30)
                        {
                                ShowMessage("Digite uma quantidade de perguntas menor que 30");
                        }else{
                                qtd = StrToInt(cboqtdp->Text);
                                if(rdgalt->ItemIndex == 0)
                                {
	                                sort = 1;
                                        {
                                                randomize();
                                        }
                                	frmjogo->Show();
                                        frminicio->Hide();
                                        frmjogo->imgcar->Left = 30;
                                }else{
	                                if(rdgalt->ItemIndex == 1)
                                	{
	                                	sort = 0;

                       		                frmjogo->Show();
          	                                frminicio->Hide();
                                                frmjogo->imgcar->Left = 30;
                        	        }else{
	        	                        ShowMessage("Escolha uma opção");
                                	}
                                }
                        }
                }
        }
}

}
//---------------------------------------------------------------------------






void __fastcall Tfrminicio::cmdfecharClick(TObject *Sender)
{
frminicio->Close();
}
//---------------------------------------------------------------------------





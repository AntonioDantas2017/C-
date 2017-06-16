//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::cmdokClick(TObject *Sender)
{
int erro;
float alt,s,por;
AnsiString cab,cur,sex,nome;

erro = 0;
if(txtnome->Text=="")
{
        ShowMessage("Você deve Digitar o nome do Candidato");
        erro = 1;
}else{
        nome = txtnome->Text;
}

if(txtsex->Text=="")
{
        ShowMessage("Você deve Digitar o sexo do Candidato");
        erro = 1;
}else{
        sex = txtsex->Text;
}

if(txtalt->Text=="")
{
        ShowMessage("Você deve Digitar a altura do Candidato");
        erro = 1;
}else{
        alt = StrToFloat(txtalt->Text);
}

if(txtcab->Text=="")
{
        ShowMessage("Você deve Digitar o cabelo do Candidato");
        erro = 1;

        }else{
        cab = txtcab->Text;
}

if(txtcur->Text=="")
{
        ShowMessage("Você deve Digitar se o Candidato tem curso superior");
        erro = 1;
}else{
        cur = txtcur->Text;
}

if(erro==0)
{
        s = 0;
        if(sex=="Masculino" && alt>=1.50 && alt<=1.69 && cab=="Loiro" ||& cab=="Loira")
        {
                s = 700;
        }
        if(sex=="Masculino" && alt>1.69)
        {
                s = 1500;
        }
        if(sex=="Masculino" && alt>=1.50 && alt<=1.69 && cab=="Moreno" || cab=="Morena")
        {
                s = 600;
        }
        if(sex=="Feminino" && alt>=1.50 && alt<=1.69 && cab=="Loira" || cab=="Loiro")
        {
                s = 900;
        }
        if(sex=="Feminino" && alt>1.69)
        {
                s = 2000;
        }
        if(sex=="Feminino" && alt>=1.50 && alt<=1.69 && cab=="Morena" || cab=="Moreno")
        {
                s = 800;
        }

        if(cur=="Sim")
        {
                por = s * 0.05;
                s = s + por;
        }
        lblsa->Visible = true;
        lblno->Visible = true;
        lblr->Visible = true;
        lblr2->Visible = true;
        lblr2->Caption = nome;
        lblr->Caption = FloatToStr(s);
        txtnome->Text = "";
        txtsex->Text = "";
        txtalt->Text = "";
        txtcab->Text = "";
        txtcur->Text = "";
}
if(s == 0)
{
        ShowMessage("O candidato não foi contratado");
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::txtsexChange(TObject *Sender)
{
        if(txtsex->Text=="f")
        {
                txtsex->Text = "Feminino";
        }else{
                if(txtsex->Text=="m")
                {
                        txtsex->Text = "Masculino";
                }else{
                        if(txtsex->Text!="Masculino" && txtsex->Text!="Feminino" && txtsex->Text!="")
                        {
                                ShowMessage("Digite f ou m");
                                txtsex->Text = "";
                        }
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::txtcabChange(TObject *Sender)
{
if(txtsex->Text=="" && txtcab->Text!="")
{
        ShowMessage("Digite o Sexo");
        txtcab->Text = "";
}else{
        if(txtsex->Text=="Masculino")
        {
                if(txtcab->Text=="l")
                {
                        txtcab->Text = "Loiro";
                }else{
                        if(txtcab->Text=="m")
                        {
                                txtcab->Text = "Moreno";
                        }else{
                                if(txtcab->Text!="Moreno" && txtcab->Text!="Loiro")
                                {
                                        ShowMessage("Digite l ou m");
                                        txtcab->Text = "";
                                }
                        }
                }
        }else{
                if(txtcab->Text=="l")
                {
                        txtcab->Text = "Loira";
                }else{
                        if(txtcab->Text=="m")
                        {
                                txtcab->Text = "Morena";
                        }else{
                                if(txtcab->Text!="Morena" && txtcab->Text!="Loira" && txtcab->Text!="")
                                {
                                        ShowMessage("Digite l ou m");
                                        txtcab->Text = "";
                                }
                        }
                }
        }
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::txtcurChange(TObject *Sender)
{
if(txtcur->Text=="s")
{
        txtcur->Text="Sim";
}else{
        if(txtcur->Text=="n")
        {
                txtcur->Text="Não";
        }else{
                if(txtcur->Text!="Sim" && txtcur->Text!="Não" && txtcur->Text!="")
                {
                        ShowMessage("Digite s ou n");
                        txtcur->Text = "";
                }
        }
}
        
}
//---------------------------------------------------------------------------


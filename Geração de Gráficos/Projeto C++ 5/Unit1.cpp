//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
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

void __fastcall Tfrminicio::cmdinserirClick(TObject *Sender)
{
if(linha <= 24)
{
if((txtnumero->Text != "" && txtnota->Text != "") || (txtnumero->Text) == "-1")
{
double nota = 0;
if(txtnota->Text != "")
        nota = StrToFloat(txtnota->Text);
if((nota >= 0 && nota <= 10) || (txtnumero->Text) == "-1")
{
if(StrToInt(txtnumero->Text) >= 0)
{
        if(linha < 24)
        {
        matriz[linha][0] = StrToInt(txtnumero->Text);
        matriz[linha][1] = nota;
        pnlcadastro->Visible = true;
        linha++;
        lbllinha->Caption = IntToStr(linha);
        cmdzerar->Visible = true;
        txtnota->Text = "";
        txtnumero->Text = "";
        txtnumero->SetFocus();
        }else{
                ShowMessage("Voc� s� pode inserir at� 24 alunos");
        }
}else{
        if(linha > 0)
        {
                pnlinserir->Enabled = false;
                pnlgrafico->Visible = true;
                pnlgrafico->Enabled = true;                
        }else{
                ShowMessage("Voc� deve cadastrar pelo menos um aluno");
        }
}
}else{
        ShowMessage("Digite uma nota v�lida");
        txtnota->SetFocus();
        txtnota->Text = "";
}
}else{
        txtnumero->SetFocus();
        ShowMessage("Preencha o n�mero e a nota do aluno");
}
}        
}
//---------------------------------------------------------------------------

void __fastcall Tfrminicio::FormActivate(TObject *Sender)
{
if(matriz[0][0] == 0)
{
linha = 0;
for(int i=0;i<24;i++)
        matriz[i][0] = -1;
}

}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::barrasMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
pnlgrafico->Height = 400;
exemplo->Visible = true;
graficoexemplo->Visible = true;
graficoexemplo->ChartType = 1;
graficoexemplo->ColumnCount = 3;
graficoexemplo->RowCount = 1;
graficoexemplo->ShowLegend = true;

graficoexemplo->Row = 1;

graficoexemplo->Column = 1;
graficoexemplo->ColumnLabel = "Aluno 1";
graficoexemplo->Data = "5";

graficoexemplo->Column = 2;
graficoexemplo->ColumnLabel = "Aluno 2";
graficoexemplo->Data = "10";

graficoexemplo->Column = 3;
graficoexemplo->ColumnLabel = "Aluno 3";
graficoexemplo->Data = "3";
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::setoresMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
pnlgrafico->Height = 400;
exemplo->Visible = true;
graficoexemplo->Visible = true;
graficoexemplo->ChartType = 13;
graficoexemplo->ColumnCount = 3;
graficoexemplo->RowCount = 1;
graficoexemplo->ShowLegend = true;

graficoexemplo->Row = 1;

graficoexemplo->Column = 1;
graficoexemplo->ColumnLabel = "Aluno 1";
graficoexemplo->Data = "5";

graficoexemplo->Column = 2;
graficoexemplo->ColumnLabel = "Aluno 2";
graficoexemplo->Data = "10";

graficoexemplo->Column = 3;
graficoexemplo->ColumnLabel = "Aluno 3";
graficoexemplo->Data = "3";        
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::pnlgraficoMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
graficoexemplo->Visible = false;
exemplo->Visible = false;
pnlgrafico->Height = 200;        
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::cmdzerarClick(TObject *Sender)
{
pnlcadastro->Visible = false;
cmdzerar->Visible = false;
linha = 0;
for(int i=0;i<24;i++)
        matriz[i][0] = -1;          
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::cmdalteraClick(TObject *Sender)
{
pnlinserir->Enabled = true;
pnlgrafico->Enabled = false;
        
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::txtnumeroKeyPress(TObject *Sender, char &Key)
{
char *x = &Key;

if(*x == 13)
   txtnumero->SetFocus();
else{
        if((*x < '0' || *x > '9') && (*x != 8 && *x != 13 && *x != 45))
        {
                ShowMessage("� permitido somente n�mero");
                *x = 0;
        }
}         
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::txtnotaKeyPress(TObject *Sender, char &Key)
{
char *x = &Key;

if(*x == 13)
   txtnota->SetFocus();
else{
        if((*x < '0' || *x > '9') && (*x != 8 && *x != 13 && *x != 44 && *x != 45))
        {
                ShowMessage("� permitido somente n�mero");
                *x = 0;
        }
}        
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::cmdgerarClick(TObject *Sender)
{
valor1 = 0;
valor2 = 0;
valor3 = 0;
qtd1 = 0;
qtd2 = 0;
qtd3 = 0;
for(int t=0;t<24;t++)
{
        if((matriz [t][0]) != -1)
        {
                if(matriz [t][1] <= 5)
                {
                        valor1 = valor1 + matriz [t][1];
                        qtd1++;
                }else{
                        if(matriz [t][1] >= 5.5 && matriz [t][1] <= 7.5)
                        {
                                valor2 = valor2 + matriz [t][1];
                                qtd2++;
                        }else{
                                valor3 = valor3 + matriz [t][1];
                                qtd3++;
                        }
                }
        }
}

if(barras->Checked == true)
        tipo = 1;
else{
        if(setores->Checked == true)
                tipo = 13;
        else{
        if(linhas->Checked == true)
                tipo = 3;
        }
}
frminicio->Hide();
frmbarras->Show();
        
}
//---------------------------------------------------------------------------
void __fastcall Tfrminicio::linhasMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
pnlgrafico->Height = 400;
exemplo->Visible = true;
graficoexemplo->Visible = true;
graficoexemplo->ChartType = 3;
graficoexemplo->RowCount = 3;
graficoexemplo->ColumnCount = 1;
graficoexemplo->ShowLegend = false;

graficoexemplo->Column = 1;

graficoexemplo->Row = 1;
graficoexemplo->RowLabel = "Aluno 1";
graficoexemplo->Data = "5";

graficoexemplo->Row = 2;
graficoexemplo->RowLabel = "Aluno 2";
graficoexemplo->Data = "10";

graficoexemplo->Row = 3;
graficoexemplo->RowLabel = "Aluno 3";
graficoexemplo->Data = "3";          
}
//---------------------------------------------------------------------------

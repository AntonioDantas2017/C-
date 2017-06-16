//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmbarras *frmbarras;
//---------------------------------------------------------------------------
__fastcall Tfrmbarras::Tfrmbarras(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmbarras::FormActivate(TObject *Sender)
{
if(frminicio->tipo == 1)
{
//GERAL
grafico1b->ChartType = 1;
grafico1b->TitleText = "Notas dos Alunos";
grafico1b->ColumnCount = 1;

for(int i=0;i<=23;i++)
{
if(frminicio->matriz [i][0] != -1)
{
        grafico1b->RowCount = i+1;
        grafico1b->Row = i+1;
        grafico1b->RowLabel = FloatToStr(frminicio->matriz[i][0]);
        grafico1b->Data = FloatToStr(frminicio->matriz[i][1]);
}
}
//MEDIA
grafico2b->ChartType = 1;
grafico2b->TitleText = "M�dia de Notas";

grafico2b->RowCount = 1;
grafico2b->RowLabel = "";
grafico2b->ColumnCount = 3;

grafico2b->Column = 1;
grafico2b->ColumnLabel = "0 a 5";
auxn = ((frminicio->valor1)/(frminicio->valor1+frminicio->valor2+frminicio->valor3));
grafico2b->Data = FloatToStr(auxn);

grafico2b->Column = 2;
grafico2b->ColumnLabel = "5,5 a 7,5";
auxn = ((frminicio->valor2)/(frminicio->valor1+frminicio->valor2+frminicio->valor3));
grafico2b->Data = FloatToStr(auxn);

grafico2b->Column = 3;
grafico2b->ColumnLabel = "8 a 10";
auxn = ((frminicio->valor3)/(frminicio->valor1+frminicio->valor2+frminicio->valor3));
grafico2b->Data = FloatToStr(auxn);

//QUANTIDADE
grafico3b->ChartType = 1;
grafico3b->TitleText = "Quantidade de Ocorr�cias de Notas";

grafico3b->RowCount = 1;
grafico3b->RowLabel = "";
grafico3b->ColumnCount = 3;

grafico3b->Column = 1;
grafico3b->ColumnLabel = "0 a 5";
aux =  FloatToStr(frminicio->qtd1) ;
grafico3b->Data = aux;

grafico3b->Column = 2;
grafico3b->ColumnLabel = "5,5 a 7,5";
aux2 =  FloatToStr(frminicio->qtd2);
grafico3b->Data = aux2;

grafico3b->Column = 3;
grafico3b->ColumnLabel = "8 a 10";
aux3 = FloatToStr(frminicio->qtd3);
grafico3b->Data = aux3;

//PORCENTAGEM
grafico4b->ChartType = 1;
grafico4b->TitleText = "Porcentagem de Notas";

grafico4b->RowCount = 1;
grafico4b->RowLabel = "";
grafico4b->ColumnCount = 3;

grafico4b->Column = 1;
grafico4b->ColumnLabel = "0 a 5";
aux =  FloatToStr((frminicio->qtd1/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100) ;
grafico4b->Data = aux;

grafico4b->Column = 2;
grafico4b->ColumnLabel = "5,5 a 7,5";
aux2 =  FloatToStr((frminicio->qtd2/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100);
grafico4b->Data = aux2;

grafico4b->Column = 3;
grafico4b->ColumnLabel = "8 a 10";
aux3 = FloatToStr((frminicio->qtd3/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100);
grafico4b->Data = aux3;
}else{
if(frminicio->tipo == 13)
{
//GERAL
grafico1b->ChartType = 13;
grafico1b->TitleText = "Notas dos Alunos";
grafico1b->RowCount = 1;
grafico1b->ShowLegend = true;

//grafico1b->RowLabel = "";

for(int i=0;i<=23;i++)
{
if(frminicio->matriz [i][0] != -1)
{
        grafico1b->ColumnCount = i+1;
        grafico1b->Column = i+1;
        grafico1b->ColumnLabel = FloatToStr(frminicio->matriz[i][0]);
        grafico1b->Data = FloatToStr(frminicio->matriz[i][1]);
}
}
//MEDIA
grafico2b->ChartType = 13;
grafico2b->TitleText = "M�dia de Notas";

grafico2b->RowCount = 1;
grafico2b->ColumnCount = 3;

//grafico2b->RowLabel = "";

grafico2b->Column = 1;
grafico2b->ColumnLabel = "0 a 5";
aux =  FloatToStr(frminicio->valor1/(frminicio->valor1+frminicio->valor2+frminicio->valor3)) ;
grafico2b->Data = aux;

grafico2b->Column = 2;
grafico2b->ColumnLabel = "5,5 a 7,5";
aux2 =  FloatToStr(frminicio->valor2/(frminicio->valor1+frminicio->valor2+frminicio->valor3));
grafico2b->Data = aux2;

grafico2b->Column = 3;
grafico2b->ColumnLabel = "8 a 10";
aux3 = FloatToStr(frminicio->valor3/(frminicio->valor1+frminicio->valor2+frminicio->valor3));
grafico2b->Data = aux3;

//QUANTIDADE
grafico3b->ChartType = 13;
grafico3b->TitleText = "Quantidade de Ocorr�cias de Notas";

grafico3b->RowCount = 1;
grafico3b->ColumnCount = 3;

//grafico3b->RowLabel = "";

grafico3b->Column = 1;
grafico3b->ColumnLabel = "0 a 5";
aux =  FloatToStr(frminicio->qtd1) ;
grafico3b->Data = aux;

grafico3b->Column = 2;
grafico3b->ColumnLabel = "5,5 a 7,5";
aux2 =  FloatToStr(frminicio->qtd2);
grafico3b->Data = aux2;

grafico3b->Column = 3;
grafico3b->ColumnLabel = "8 a 10";
aux3 = FloatToStr(frminicio->qtd3);
grafico3b->Data = aux3;

//PORCENTAGEM
grafico4b->ChartType = 13;
grafico4b->TitleText = "Porcentagem de Notas";

grafico4b->RowCount = 1;
grafico4b->ColumnCount = 3;

//grafico4b->RowLabel = "";

grafico4b->Column = 1;
grafico4b->ColumnLabel = "0 a 5";
aux =  FloatToStr((frminicio->qtd1/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100) ;
grafico4b->Data = aux;

grafico4b->Column = 2;
grafico4b->ColumnLabel = "5,5 a 7,5";
aux2 =  FloatToStr((frminicio->qtd2/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100);
grafico4b->Data = aux2;

grafico4b->Column = 3;
grafico4b->ColumnLabel = "8 a 10";
aux3 = FloatToStr((frminicio->qtd3/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100);
grafico4b->Data = aux3;
}else{
//GERAL
grafico1b->ChartType = 3;
grafico1b->TitleText = "Notas dos Alunos";
grafico1b->ColumnCount = 1;
grafico1b->ShowLegend = false;

for(int i=0;i<=23;i++)
{
if(frminicio->matriz [i][0] != -1)
{
        grafico1b->RowCount = i+1;
        grafico1b->Row = i+1;
        grafico1b->RowLabel = FloatToStr(frminicio->matriz[i][0]);
        grafico1b->Data = FloatToStr(frminicio->matriz[i][1]);
}
}
//MEDIA
grafico2b->ChartType = 3;
grafico2b->TitleText = "M�dia de Notas";

grafico2b->ShowLegend = false;

grafico2b->ColumnCount = 1;
grafico2b->RowCount = 3;

grafico2b->Row = 1;
grafico2b->RowLabel = "0 a 5";
aux =  FloatToStr(frminicio->valor1/(frminicio->valor1+frminicio->valor2+frminicio->valor3)) ;
grafico2b->Data = aux;

grafico2b->Row = 2;
grafico2b->RowLabel = "5,5 a 7,5";
aux2 =  FloatToStr(frminicio->valor2/(frminicio->valor1+frminicio->valor2+frminicio->valor3));
grafico2b->Data = aux2;

grafico2b->Row = 3;
grafico2b->RowLabel = "8 a 10";
aux3 = FloatToStr(frminicio->valor3/(frminicio->valor1+frminicio->valor2+frminicio->valor3));
grafico2b->Data = aux3;

//QUANTIDADE
grafico3b->ChartType = 3;
grafico3b->TitleText = "Quantidade de Ocorr�cias de Notas";

grafico3b->ShowLegend = false;

grafico3b->ColumnCount = 1;
grafico3b->RowCount = 3;

grafico3b->Row = 1;
grafico3b->RowLabel = "0 a 5";
aux =  FloatToStr(frminicio->qtd1) ;
grafico3b->Data = aux;

grafico3b->Row = 2;
grafico3b->RowLabel = "5,5 a 7,5";
aux2 =  FloatToStr(frminicio->qtd2);
grafico3b->Data = aux2;

grafico3b->Row = 3;
grafico3b->RowLabel = "8 a 10";
aux3 = FloatToStr(frminicio->qtd3);
grafico3b->Data = aux3;

//PORCENTAGEM
grafico4b->ChartType = 3;
grafico4b->TitleText = "Porcentagem de Notas";

grafico4b->ShowLegend = false;

grafico4b->ColumnCount = 1;
grafico4b->RowCount = 3;

grafico4b->Row = 1;
grafico4b->RowLabel = "0 a 5";
aux =  FloatToStr((frminicio->qtd1/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100) ;
grafico4b->Data = aux;

grafico4b->Row = 2;
grafico4b->RowLabel = "5,5 a 7,5";
aux2 =  FloatToStr((frminicio->qtd2/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100);
grafico4b->Data = aux2;

grafico4b->Row = 3;
grafico4b->RowLabel = "8 a 10";
aux3 = FloatToStr((frminicio->qtd3/(frminicio->qtd1+frminicio->qtd2+frminicio->qtd3))*100);
grafico4b->Data = aux3;
}
}
        
}
//---------------------------------------------------------------------------
void __fastcall Tfrmbarras::cmdvoltarClick(TObject *Sender)
{
frminicio->Show();
frmbarras->Close();        
}
//---------------------------------------------------------------------------
void __fastcall Tfrmbarras::FormClose(TObject *Sender,
      TCloseAction &Action)
{
frminicio->Show();        
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <stdio.h>
#include <vcl.h>

#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Abrir1Click(TObject *Sender)
{
  if(caminho == ""){
  salvar->Execute() ;
  caminho = (salvar->FileName);
   }
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }

     abrir->Execute() ;
     AnsiString caminho;
     caminho = (abrir->FileName);

     if(caminho !=  "")
     memo->Lines->LoadFromFile(caminho);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GraG1Click(TObject *Sender)
{
  if(caminho == ""){
  salvar->Execute() ;
  caminho = (salvar->FileName);
   }
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::SaltodeLinha1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<BR>");
memo->SelStart = linha + 6;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Centraliza1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<CENTER></CENTER>");
memo->SelStart = linha + 8;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Negrito1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<B></B>");
memo->SelStart = linha + 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Sublinhado1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<U></U>");
memo->SelStart = linha + 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Itlico1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<I></I>");
memo->SelStart = linha + 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormatarFonte1Click(TObject *Sender)
{
fonte->Execute() ;
AnsiString cor = IntToHex(fonte->Font->Color,2);
AnsiString font = fonte->Font->Name;
AnsiString tam = fonte->Font->Size ;

 AnsiString corzinha = "";
  for(int i=cor.Length();i>0;i--){
     corzinha = corzinha + cor[i];
   }
   ShowMessage(corzinha);
    if(corzinha.Length() == 2)
        corzinha = corzinha+"000";
   ShowMessage(corzinha);
memo->SelText = ("<FONT FACE = '"+ font+"' SIZE = '"+tam+"' COLOR = '#"+corzinha+"'>     </FONT>");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
memo->SelStart = 82  ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Fechar1Click(TObject *Sender)
{
  if(caminho == ""){
  salvar->Execute() ;
  caminho = (salvar->FileName);
   }
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }

//Form1->Close;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::NoOrdenados1Click(TObject *Sender)
{
linha = memo->SelStart;
int nlinha = memo->CaretPos.y;
AnsiString qtd2 = (InputBox("Digite a quantidade de itens","Quantidade",""));
if(qtd2 != ""){
memo->Lines->Insert(nlinha,"<UL>");
 int qtd = StrToInt(qtd2);
 for(int i=0;i<qtd;i++)
{
        nlinha++;
        memo->Lines->Insert(nlinha,"<LI></LI>");
}
nlinha++;
memo->Lines->Insert(nlinha,"</UL>");
memo->SelStart = linha + 10;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pargrafo1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = "<P></P>";
memo->SelStart = linha + 3;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FigurareImagens1Click(TObject *Sender)
{
abrir_img->Execute();
AnsiString caminho;
caminho = (abrir_img->FileName);
//linha = memo->SelStart;
memo->SelText = ("<IMG SRC='"+caminho+"'>");
//memo->SelStart = linha + 6;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CordeFundo1Click(TObject *Sender)
{
int x = AnsiPos("<BODY BGCOLOR='",memo->Text);
if(x==0){
int x = AnsiPos("<BODY",memo->Text);
AnsiString corzinha = "";
//ShowMessage(x);
if(x!=0){
        memo->SelStart = x + 4;
        cor_fundo->Execute();
        AnsiString cor = IntToHex(cor_fundo->Color,2);
        if(cor != ""){

                 for(int i=cor.Length();i>0;i--){
                     corzinha = corzinha + cor[i];
                 }
                     ShowMessage(corzinha);
                    if(corzinha.Length() == 2)
                        corzinha = corzinha+"000";
                 }

                memo->SelText = " BGCOLOR='#"+corzinha+"' ";
        }else{
                memo->SelText = " BGCOLOR='white' ";}

}else{
        ShowMessage("Para colocar uma nova cor de fundo, apague o BGCOLOR da Tag BODY");
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::InserirLinks1Click(TObject *Sender)
{
abrir->Execute();
AnsiString caminho2;
caminho2 = (abrir->FileName);
if(caminho2 != ""){
linha = memo->SelStart;
memo->SelText = ("<A HREF='"+caminho2+"'>");
memo->SelStart = linha + StrLen(caminho2.c_str()) + 12;
}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::InserirTabela1Click(TObject *Sender)
{
linha = memo->SelStart;
int nlinha = memo->CaretPos.y;
AnsiString linhas2 = (InputBox("Digite a quantidade de linhas","Quantidade",""));
if(linhas2 != "")
{
memo->Lines->Insert(nlinha,"<TABLE>");
int linhas = StrToInt(linhas2);
AnsiString colunas2 = (InputBox("Digite a quantidade de Colunas","Quantidade",""));
int colunas = 0;

if(colunas2 != "")
        int colunas = StrToInt(colunas2);

for(int i=0;i<linhas;i++)
{
        nlinha++;
        memo->Lines->Insert(nlinha,"    <TR>");
        for(int j=0;j<colunas;j++)
        {
                nlinha++;
                memo->Lines->Insert(nlinha,"            <TD></TD>");
        }
        nlinha++;
        memo->Lines->Insert(nlinha,"    </TR>");
}
nlinha++;
memo->Lines->Insert(nlinha,"</TABLE>");
memo->SelStart = linha + 34;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Novo1Click(TObject *Sender)
{
   if(caminho == ""){
  salvar->Execute() ;
  caminho = (salvar->FileName);
   }
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }

 memo->Lines->Clear();
 memo->Lines->Add("<HTML>");
 memo->Lines->Add("  <HEAD>");
 memo->Lines->Add("  <TITLE> Documento sem título </TITLE>");
 memo->Lines->Add("  </HEAD>");
 memo->Lines->Add("  <BODY>");
 memo->Lines->Add("  ");
 memo->Lines->Add("  ");
 memo->Lines->Add("  </BODY>");
 memo->Lines->Add("</HTML>");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Ordenados1Click(TObject *Sender)
{
linha = memo->SelStart;
int nlinha = memo->CaretPos.y;
AnsiString qtd2 = (InputBox("Digite a quantidade de itens","Quantidade",""));
if(qtd2 != ""){
memo->Lines->Insert(nlinha,"<OL>");
 int qtd = StrToInt(qtd2);
for(int i=0;i<qtd;i++)
{
        nlinha++;
        memo->Lines->Insert(nlinha,"<LI></LI>");
}
nlinha++;
memo->Lines->Insert(nlinha,"</OL>");
memo->SelStart = linha + 10;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
   if(caminho == ""){
  salvar->Execute() ;
  caminho = (salvar->FileName);
   }
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }

 memo->Lines->Clear();
 memo->Lines->Add("<HTML>");
 memo->Lines->Add("  <HEAD>");
 memo->Lines->Add("  <TITLE> Documento sem título </TITLE>");
 memo->Lines->Add("  </HEAD>");
 memo->Lines->Add("  <BODY>");
 memo->Lines->Add("  ");
 memo->Lines->Add("  ");
 memo->Lines->Add("  </BODY>");
 memo->Lines->Add("</HTML>");     
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SalvarComo1Click(TObject *Sender)
{
  salvar->Execute() ;
  caminho = (salvar->FileName);
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
if(caminho != "")
{
Variant x = caminho;
web->Navigate(x);
}
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Form1Click(TObject *Sender)
{
linha = memo->SelStart;
int nlinha = memo->CaretPos.y;
abrir->Execute();
AnsiString caminho2 = abrir->FileName;
if(caminho2 != "")
{
	memo->Lines->Insert(nlinha,"<FORM ACTION='"+caminho2+"' method='post'>");
	nlinha = nlinha + 2;
	memo->Lines->Insert(nlinha,"</FORM>");
	memo->SelStart = linha + caminho2.Length() + 31;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CaixadeTexto1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = "<INPUT NAME='' TYPE='TEXT'>";
memo->SelStart = linha + 13;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1Click(TObject *Sender)
{
linha = memo->SelStart;
AnsiString qtd2 = (InputBox("Digite a quantidade de linhas","Quantidade",""));
if(qtd2 != "")
{
	int qtd = StrToInt(qtd2);
	memo->SelText = "<TEXTAREA NAME='' ROWS='"+IntToStr(qtd)+"'></TEXTAREA>";
	memo->SelStart = linha + 16;
}        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Boto1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = "<INPUT VALUE='' TYPE='BUTTON' NAME='' >";
memo->SelStart = linha + 14;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChekBox1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = "<INPUT VALUE='' TYPE='CHECKBOX' NAME='' >";
memo->SelStart = linha + 13;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BotodeRdio1Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = "<INPUT VALUE='' TYPE='RADIO' NAME='' >";
memo->SelStart = linha + 13;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CaixadeLista1Click(TObject *Sender)
{
linha = memo->SelStart;
int nlinha = memo->CaretPos.y;
AnsiString qtd2 = (InputBox("Digite a quantidade de itens da lista","Quantidade",""));
if(qtd2 != "")
{
	memo->Lines->Insert(nlinha,"<SELECT NAME=''>");
	int qtd = StrToInt(qtd2);
	for(int i=0;i<qtd;i++)
	{
        	nlinha++;
	        memo->Lines->Insert(nlinha,"	<OPTION VALUE=''></OPTION>");
	}
	nlinha++;
	memo->Lines->Insert(nlinha,"</SELECT>");
	memo->SelStart = linha + 14;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AdcionarScript1Click(TObject *Sender)
{
linha = memo->SelStart;
int nlinha = memo->CaretPos.y;
int x = AnsiPos("<HEAD",memo->Text);
if(x!=0){
        memo->SelStart = x + 4;
        memo->Lines->Insert(nlinha,"<SCRIPT LANGUAGE='JAVASCRIPT/TEXT'>");
	nlinha = nlinha + 2;
	memo->Lines->Insert(nlinha,"</SCRIPT>");
	memo->SelStart = linha + 36;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
  if(caminho == ""){
  salvar->Execute() ;
  caminho = (salvar->FileName);
   }
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }

     abrir->Execute() ;
     AnsiString caminho;
     caminho = (abrir->FileName);

     if(caminho !=  "")
     memo->Lines->LoadFromFile(caminho);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
  if(caminho == ""){
  salvar->Execute() ;
  caminho = (salvar->FileName);
   }
   if(caminho != ""){
        int aux1 = AnsiPos(".htm",caminho);
        int aux2 = AnsiPos(".html",caminho);
         if(aux1 == 0 && aux2==0)
        caminho = caminho + ".html";
         memo->Lines->SaveToFile(caminho);
  }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
linha = memo->SelStart;
int nlinha = memo->CaretPos.y;
AnsiString qtd2 = (InputBox("Digite a quantidade de itens","Quantidade",""));
if(qtd2 != ""){
 int qtd = StrToInt(qtd2);
memo->Lines->Insert(nlinha,"<UL>");
 for(int i=0;i<qtd;i++)
{
        nlinha++;
        memo->Lines->Insert(nlinha,"<LI></LI>");
}
nlinha++;
memo->Lines->Insert(nlinha,"</UL>");
memo->SelStart = linha + 10;
}        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<B></B>");
memo->SelStart = linha + 3;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = "<P></P>";
memo->SelStart = linha + 3;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<CENTER></CENTER>");
memo->SelStart = linha + 8;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<I></I>");
memo->SelStart = linha + 3;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<U></U>");
memo->SelStart = linha + 3;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton15Click(TObject *Sender)
{
linha = memo->SelStart;
memo->SelText = ("<BR>");
memo->SelStart = linha + 6;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton14Click(TObject *Sender)
{
int x = AnsiPos("<BODY BGCOLOR='",memo->Text);
if(x==0){
int x = AnsiPos("<BODY",memo->Text);
AnsiString corzinha = "";
//ShowMessage(x);
if(x!=0){
        memo->SelStart = x + 4;
        cor_fundo->Execute();
        AnsiString cor = IntToHex(cor_fundo->Color,2);
        if(cor != ""){

                 for(int i=cor.Length();i>0;i--){
                     corzinha = corzinha + cor[i];
                 }
                     ShowMessage(corzinha);
                    if(corzinha.Length() == 2)
                        corzinha = corzinha+"000";
                 }

                memo->SelText = " BGCOLOR='#"+corzinha+"' ";
        }else{
                memo->SelText = " BGCOLOR='white' ";}

}else{
        ShowMessage("Para colocar uma nova cor de fundo, apague o BGCOLOR da Tag BODY");
}        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton12Click(TObject *Sender)
{
abrir->Execute();
AnsiString caminho2;
caminho2 = (abrir->FileName);
if(caminho2 != ""){
linha = memo->SelStart;
memo->SelText = ("<A HREF='"+caminho2+"'>");
memo->SelStart = linha + StrLen(caminho2.c_str()) + 12;
}        
}
//---------------------------------------------------------------------------



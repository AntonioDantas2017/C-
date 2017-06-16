//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vcl.h>
#include <stdio.h>
#include <math.h>

#include "Unit1.h"
#include "Unit3.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmjogo *frmjogo;
//---------------------------------------------------------------------------
__fastcall Tfrmjogo::Tfrmjogo(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmjogo::FormActivate(TObject *Sender)
{
Timer1->Enabled = true;
aux = 1;
lblqtdperg->Caption = "1/"+IntToStr(frminicio->qtd);
lblnome->Caption = frminicio->nome;
perg[1] = "O que significa a placa A-28 ?";
perg[2] = "O que significa a placa I-17 ?";
perg[3] = "O que significa a placa R-10 ?";
perg[4] = "O que significa a placa A-1a ?";
perg[5] = "O que significa a placa I-16 ?";
perg[6] = "O que significa a placa R-29 ?";
perg[7] = "O que significa a placa A-6  ?";
perg[8] = "O que significa a placa A-21c ?";
perg[9] = "O que significa a placa R-1  ?";
perg[10] = "O que significa a placa R-2 ?";
perg[11] = "O que significa a placa A-30 ?";
perg[12] = "O que significa a placa R-24b ?";
perg[13] = "O que significa a placa A-33a ?";
perg[14] = "O que significa a placa R-25b ?";
perg[15] = "O que significa a placa R-31 ?";
perg[16] = "O que significa a placa R-6a ?";
perg[17] = "O que significa a placa R-5 ?";
perg[18] = "O que significa a placa R-3 ?";
perg[19] = "O que significa a placa R-32 ?";
perg[20] = "O que significa a placa A-24 ?";
perg[21] = "O que significa a placa A-18 ?";
perg[22] = "O que significa a placa A-3b ?";
perg[23] = "O que significa a placa R-34 ?";
perg[24] = "O que significa a placa I-13 ?";
perg[25] = "O que significa a placa I-15 ? ";
perg[26] = "O que significa a placa I-14 ? ";
perg[27] = "O que significa a placa A-35 ?";
perg[28] = "O que significa a placa R-19 ?";
perg[29] = "O que significa a placa R-24a ? ";
perg[30] = "O que significa a placa A-8 ?";

fig[1] = "placas2\\A28.bmp";
fig[2] = "placas2\\I17.bmp";
fig[3] = "placas2\\R10.bmp";
fig[4] = "placas2\\A1a.bmp";
fig[5] = "placas2\\I16.bmp";
fig[6] = "placas2\\R29.bmp";
fig[7] = "placas2\\A6a.bmp";
fig[8] = "placas2\\A21c.bmp";
fig[9] = "placas2\\R1.bmp";
fig[10] = "placas2\\R2.bmp";
fig[11] = "placas2\\A30.bmp";
fig[12] = "placas2\\R24b.bmp";
fig[13] = "placas2\\A33a.bmp";
fig[14] = "placas2\\R25b.bmp";
fig[15] = "placas2\\R31.bmp";
fig[16] = "placas2\\R6a.bmp";
fig[17] = "placas2\\R5.bmp";
fig[18] = "placas2\\R3.bmp";
fig[19] = "placas2\\R32.bmp";
fig[20] = "placas2\\A24.bmp";
fig[21] = "placas2\\A18.bmp";
fig[22] = "placas2\\A3b.bmp";
fig[23] = "placas2\\R34.bmp";
fig[24] = "placas2\\I13.bmp";
fig[25] = "placas2\\I15.bmp";
fig[26] = "placas2\\I14.bmp";
fig[27] = "placas2\\A35.bmp";
fig[28] = "placas2\\R19.bmp";
fig[29] = "placas2\\R24a.bmp";
fig[30] = "placas2\\A8.bmp";

atern_a[1] = "Pista derrapante";
atern_a[2] = "Pouzada";
atern_a[3] = "Proibido trânsito de veículos automotores";
atern_a[4] = "Curva em 'L' à esquerda";
atern_a[5] = "Posto de Serviço";
atern_a[6] = "Pedestre andem pela esquerda";
atern_a[7] = "Cruzamentos de Vias";
atern_a[8] = "Estreitamento de pista a direita";
atern_a[9] = "Fim de mão dupla";
atern_a[10] = "Sentido Proibido";
atern_a[11] = "Proibido trânsito de ciclistas";
atern_a[12] = "Passagem Bloqueada";
atern_a[13] = "Proibido trânsito de ciclistas";
atern_a[14] = "Vire à direita";
atern_a[15] = "Pedestres andem pela esquerda";
atern_a[16] = "Proibido Parar e  Estacionar";
atern_a[17] = "Sentido Proibido";
atern_a[18] = "Dê preferência";
atern_a[19] = "Siga em frente ou esquerda";
atern_a[20] = "Obras";
atern_a[21] = "Pista Irregular";
atern_a[22] = "Pista Sinuosa à esquerda e siga reto";
atern_a[23] = "Proibido Trânsito de bicicletas";
atern_a[24] = "Lavatório";
atern_a[25] = "Pronto Socorro";
atern_a[26] = "Abastecimento";
atern_a[27] = "Boi na pista";
atern_a[28] = "Velocidade controlada";
atern_a[29] = "Alfândega";
atern_a[30] = "Via lateral direita";

atern_b[1] = "Pista Escorregadia";
atern_b[2] = "Posto de Serviço";
atern_b[3] = "Proibido trânsito de máquinas agrícolas";
atern_b[4] = "Curva em 'L' à direita";
atern_b[5] = "Serviço de Abastecimento";
atern_b[6] = "Pedestre virem à esquerda";
atern_b[7] = "Interseção de vias";
atern_b[8] = "Entroncamento de pista à direita";
atern_b[9] = "Parada obrigatória";
atern_b[10] = "Proibido ultrapassar";
atern_b[11] = "Ciclistas em competição";
atern_b[12] = "Descida Acentuada";
atern_b[13] = "Área escolar";
atern_b[14] = "Vire à esquerda";
atern_b[15] = "Pedestres virem à esquerda";
atern_b[16] = "Parada Obrigatória";
atern_b[17] = "Proibido Retornar";
atern_b[18] = "Siga em frente";
atern_b[19] = "Alfândega";
atern_b[20] = "Pedreiro trabalhando";
atern_b[21] = "Morro a frente";
atern_b[22] = "Pista Sinuosa à esquerda";
atern_b[23] = "Pista de bicicleta";
atern_b[24] = "Posto";
atern_b[25] = "Cruz Vermelha";
atern_b[26] = "Monumento";
atern_b[27] = "Animais Selvagens";
atern_b[28] = "No mínimo 80 Km/h";
atern_b[29] = "Sentido de Circulação da via";
atern_b[30] = "Fim da via";

atern_c[1] = "Projeção de Cascalho";
atern_c[2] = "Restaurante";
atern_c[3] = "Proibido trânsito de veículos com tração animal";
atern_c[4] = "Curva acentuada à esquerda";
atern_c[5] = "Serviço Sanitário";
atern_c[6] = "Pedestre andem pela direita";
atern_c[7] = "Cruzamento de linha férrea com via de trânsito";
atern_c[8] = "Entroncamento de via à esquerda";
atern_c[9] = "Barreira adiante";
atern_c[10] = "Dê Preferência";
atern_c[11] = "Ciclistas";
atern_c[12] = "Descida bloqueada";
atern_c[13] = "Ciclistas";
atern_c[14] = "Altura Máxima permitida";
atern_c[15] = "Pedestres andem pela direita";
atern_c[16] = "Proibido estacionar";
atern_c[17] = "Proibido Mudar de faixa de trânsito";
atern_c[18] = "Sentido de circulação da via";
atern_c[19] = "Pedestres pela esquerda";
atern_c[20] = "Crianças trabalhando";
atern_c[21] = "Saliência ou lombada";
atern_c[22] = "Curva à esquerda";
atern_c[23] = "Circulação exclusiva de bicicleta";
atern_c[24] = "Restaurante";
atern_c[25] = "Serviço Telefonico";
atern_c[26] = "Igreja ";
atern_c[27] = "Cuidado Animais";
atern_c[28] = "Velocidade Média permitida";
atern_c[29] = "Vire a direita";
atern_c[30] = "Bifurcação lateral";

atern_d[1] = "Local para 'rachas'";
atern_d[2] = "Hotel";
atern_d[3] = "Proibido  estacionar";
atern_d[4] = "Cruzamentos de vias";
atern_d[5] = "Serviço de higiene";
atern_d[6] = "Proibido trânsito de pedestres";
atern_d[7] = "Curva a esquerda";
atern_d[8] = "Sentido único";
atern_d[9] = "Sentido proibido";
atern_d[10] = "Proibido retornar";
atern_d[11] = "Área escolar";
atern_d[12] = "Passagem obrigatória";
atern_d[13] = "Siga em frente ou esquerda";
atern_d[14] = "Descida acentuada";
atern_d[15] = "Passagem obrigatória";
atern_d[16] = "Sentido Proibido";
atern_d[17] = "Carga Máxima Permitida";
atern_d[18] = "Sentido Proibido";
atern_d[19] = "Duplo sentido de circulação";
atern_d[20] = "Passagem";
atern_d[21] = "Vento lateral";
atern_d[22] = "Curva acentuada em 'S' à direita";
atern_d[23] = "Ciclistas";
atern_d[24] = "Serviço Mecânico";
atern_d[25] = "Gruta";
atern_d[26] = "Museu";
atern_d[27] = "Natureza";
atern_d[28] = "Velocidade Máxima Permitida";
atern_d[29] = "Sentido Obrigatório";
atern_d[30] = "Bifurcação 'T'";


resp[1] = "c";
resp[2] = "c";
resp[3] = "a";
resp[4] = "c";
resp[5] = "c";
resp[6] = "d";
resp[7] = "a";
resp[8] = "a";
resp[9] = "b";
resp[10] = "c";
resp[11] = "c";
resp[12] = "d";
resp[13] = "b";
resp[14] = "a";
resp[15] = "c";
resp[16] = "c";
resp[17] = "b";
resp[18] = "d";
resp[19] = "d";
resp[20] = "a";
resp[21] = "b";
resp[22] = "b";
resp[23] = "c";
resp[24] = "d";
resp[25] = "a";
resp[26] = "a";
resp[27] = "c";
resp[28] = "d";
resp[29] = "b";
//resp[30] = "d";

	n = random(30);


repete[0] = n;
lblperg->Caption = perg[n];
rdg->Items->Strings[0] = atern_a[n];
rdg->Items->Strings[1] = atern_b[n];
rdg->Items->Strings[2] = atern_c[n];
rdg->Items->Strings[3] = atern_d[n];


img->Picture->LoadFromFile(fig[n]);
}
//---------------------------------------------------------------------------

void __fastcall Tfrmjogo::cmdproxClick(TObject *Sender)
{
if(rdg->ItemIndex == - 1)
{
	ShowMessage("Escolha uma alternativa");
}else{
        aux++;
        lblqtdperg->Caption = IntToStr(aux)+"/"+IntToStr(frminicio->qtd);
        lblacertos->Caption = IntToStr(acerto);
        if(resp[n] == "a")
        {
                if(rdg->ItemIndex == 0)
                {
			acerto++;
			imgcar->Left = imgcar->Left +20;
		}
        }else{
		if(resp[n]  == "b")
		{
                        if(rdg->ItemIndex == 1)
                        {
				acerto++;
				imgcar->Left = imgcar->Left +20;
			}
		}else{
			if(resp[n]  == "c")
			{
                                if(rdg->ItemIndex == 2)
                                {
					acerto++;
					imgcar->Left = imgcar->Left +20;
				}
			}else{
				if(resp[n]  == "d")
				{
                                        if(rdg->ItemIndex == 3)
                                        {
						acerto++;
					       imgcar->Left = imgcar->Left +20;
					}
				}
			}
		}
	}
	if(frminicio->sort==0)
        {
	        n = random(30);
        }else{
	        Randomize();
        	n= random(30);
        }
        int i=0;
	while(i<30)
        {
		if(n==repete[i])
		{
			n = random(30);
                        i = 0;
		}
                i++;
	}
	repete[aux] = n;

	if(aux<=frminicio->qtd)
	{
		lblperg->Caption = perg[n];
		rdg->Items->Strings[0] = atern_a[n];
		rdg->Items->Strings[1] = atern_b[n];
		rdg->Items->Strings[2] = atern_c[n];
		rdg->Items->Strings[3] = atern_d[n];
                img->Picture->LoadFromFile(fig[n]);
	}else{
                aux = frminicio->qtd;
		frmfinal->Show();
		frmjogo->Hide();
        }

}
rdg->ItemIndex = -1;

}
//---------------------------------------------------------------------------


void __fastcall Tfrmjogo::Timer1Timer(TObject *Sender)
{
seg++;
lbltempo->Caption = seg;
}
//---------------------------------------------------------------------------

void __fastcall Tfrmjogo::cmdfinalClick(TObject *Sender)
{
frmfinal->Show();
frmjogo->Hide();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmjogo::cmdfecharClick(TObject *Sender)
{
frmjogo->Close() ;
frminicio->Close();
}
//---------------------------------------------------------------------------



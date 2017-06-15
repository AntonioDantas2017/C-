/*
Antonio Josivaldo Dantas Filho - 580961
Ufscar - Sistemas de Informação - G7
POO I - AA3.1 – Programa em C++

Desenvolva um programa que solicite ao usuário sua idade e sexo e faça o cálculo da frequência cardíaca máxima (FCM) para a prática do ciclismo.
Depois exiba, a ele, qual a sua zona alvo de treinamento (frequências mínima, ideal e máxima).
 
Formulas:
FCM(homens) = 202 MENOS 72% DA IDADE
FCM(mulheres) = 189 MENOS 56% DA IDADE
 
Frequência cardíaca mínima = 60% do FCM
Frequência ideal na atividade aeróbica = 70% do FCM
Frequência cardíaca máxima = 85% do FCM
 
O programa deve ser implementado em um loop, questionando o usuário se ele deseja calcular novamente ou sair.
 
Cálculos baseados nas informações do site http://www.cdof.com.br/fisio1.htm
 
*/

#include <iostream>
using namespace std; 

int main() {
	//Declaração das Variáveis
	int idade = 0; 
	char sexo = ' ';
	int cont = 1;
	int fcm = 0;
	
	//Laço para Infinitos Calculos
	while(cont){
		//Verificação de dados
		while(!(idade > 0 && (sexo == 'F' || sexo == 'M')))
		{
			//Recebendo dados pelo teclado
			cout << "Digite a idade:";
			cin >> idade;
			cout << "Digite o sexo M ou F:";
			cin >> sexo;	
		}
		
		//Efetuando Calculo FCM
		if(sexo == 'M')
			fcm = 202 - (0.72*idade);
		else
			fcm = 202 - (0.56*idade);
		
		//Exibindo Resultados
		cout << "\nFrequência cardíaca mínima " << fcm*0.6;
		cout << "\nFrequência ideal na atividade " << fcm*0.7;
		cout << "\nFrequência cardíaca máxima " << fcm*0.85;
		
		do{
			cout << "\n\nDeseja verificar outra pessoa? 1 Sim 0 Não";
			cin >> cont;	
		}while(cont < 0 || cont >1);
		
		//Limpando Variaveis
		idade = 0;
		sexo = ' ';
	}
	
	//Finalização do Programa
	return 0;
}

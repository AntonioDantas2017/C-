/*
Antonio Josivaldo Dantas Filho - 580961
Ufscar - Sistemas de Informa��o - G7
POO I - AA3.1 � Programa em C++

Desenvolva um programa que solicite ao usu�rio sua idade e sexo e fa�a o c�lculo da frequ�ncia card�aca m�xima (FCM) para a pr�tica do ciclismo.
Depois exiba, a ele, qual a sua zona alvo de treinamento (frequ�ncias m�nima, ideal e m�xima).
 
Formulas:
FCM(homens) = 202 MENOS 72% DA IDADE
FCM(mulheres) = 189 MENOS 56% DA IDADE
 
Frequ�ncia card�aca m�nima = 60% do FCM
Frequ�ncia ideal na atividade aer�bica = 70% do FCM
Frequ�ncia card�aca m�xima = 85% do FCM
 
O programa deve ser implementado em um loop, questionando o usu�rio se ele deseja calcular novamente ou sair.
 
C�lculos baseados nas informa��es do site http://www.cdof.com.br/fisio1.htm
 
*/

#include <iostream>
using namespace std; 

int main() {
	//Declara��o das Vari�veis
	int idade = 0; 
	char sexo = ' ';
	int cont = 1;
	int fcm = 0;
	
	//La�o para Infinitos Calculos
	while(cont){
		//Verifica��o de dados
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
		cout << "\nFrequ�ncia card�aca m�nima " << fcm*0.6;
		cout << "\nFrequ�ncia ideal na atividade " << fcm*0.7;
		cout << "\nFrequ�ncia card�aca m�xima " << fcm*0.85;
		
		do{
			cout << "\n\nDeseja verificar outra pessoa? 1 Sim 0 N�o";
			cin >> cont;	
		}while(cont < 0 || cont >1);
		
		//Limpando Variaveis
		idade = 0;
		sexo = ' ';
	}
	
	//Finaliza��o do Programa
	return 0;
}

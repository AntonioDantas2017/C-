/*
Antonio Josivaldo Dantas Filho
Sistemas de Informação - G7 - 580961
POO I - AA5.1 – Implementação da uma fila (classe) em C++

Imagine uma fila de pessoas sentadas, onde não há a necessidade de ficar em pé um atrás do outro aguardando sua vez. Cada um tem uma senha (como nos bancos, atualmente) que indica sua posição na fila. A senha pode ser numérica ou alfa-numérica (você escolhe). 
Os funcionários dos bancos atendem o cliente apertando um botãozinho que apresenta em um display o número da senha do próximo cliente. Os números não precisam estar ordenados sequencialmente. A senha 1 já pode ter sido utilizada por alguém e agora será reutilizada. Assim, o que importa é a posição na fila. É atendido sempre cliente que está na primeira posição. Todos os outros clientes sobem uma posição quando o primeiro deixa a fila (o segundo vira primeiro, o terceiro vira segundo e assim por diante). 
Como cada banco tem um determinado número de cadeiras (tamanho da fila), você deverá implementar um sistema de fila (pense nos métodos da classe fila) que se adeque ao banco (tenha o tamanho que o banco deseje). 
Para isso, implemente a fila com alocação dinâmica de memória.
*/

#include <cstdlib>
#include <time.h>
#include <iostream>

#define QUANTIDADE 20 //Quantidade máxima de pessoas na fila

using namespace std;

class fila //Classe Fila
{
private:
	int *pos; //Ponteiro de Vetor da Fila
	int atual; //Posição atual do fim da fila
	int numeracao; //Numeração Inicial da Fila
public:
    fila(); 
    void acrescentar(); //Método para inserir uma nova pessoa na fila
    void atender(); //Método para atender uma pessoa da fila
    void desistir(int); //Método para retirar uma pessoa da fila
    void imprimir(); //Método para exibir a fila
};

fila::fila() //Construtor Fila
{
	pos = (int *) malloc(QUANTIDADE * sizeof(int)); //Alocação dinâmica
	atual = -1; 
	numeracao = 100;
}

void fila::acrescentar()
{
	if(atual == QUANTIDADE - 1) //Verifica se há pessoas na fila
		cout << "\n\n NAO E POSSIVEL ACEITAR MAIS PESSOAS NA FILA!" << endl;
	else{
		numeracao++;
		atual++;
		pos[atual] = numeracao;
	
	}
}

void fila::desistir(int senha){
	if(atual == -1) //Verifica se há pessoas na fila
		cout << "\n\n NAO HA PESSOAS PARA ATENDER!" << endl;
	else{
		int i;
		for(i=0;i<=atual;i++){
			if(pos[i] == senha){ //Verifica se encontrou senha solicitada
				int j;
				for(j=i;j<atual;j++){ //Reorganiza a fila
					pos[j] = pos[j+1];
				}
				pos[atual] = 0; //Fim da Fila
				i = atual+2; //Finaliza o For
				atual--; //Retira uma pessoa da Fila
			}
		}
	}	
}

void fila::atender(){ 
	if(atual == -1) //Verifica se há pessoas na fila
		cout << "\n\n NAO HA PESSOAS PARA ATENDER!" << endl;
	else{
		cout << "\n\n ATENDENDO SENHA NUMERO " << pos[0] << endl;
		int i;
		for(i=0;i<=atual;i++){ //Reorganizar a Fila
			pos[i] = pos[i+1];
		}
		pos[atual] = 0; //Fim da Fila
		atual--; //Retira uma pessoa da fila
	}	
}

void fila::imprimir(){
	if(atual == -1) //Verifica se há pessoas na fila
		cout << "\n\n NAO HA PESSOAS PARA EXIBIR!" << endl;
	else{
		int i;
		for(i=0;i<=atual;i++)
			cout << "\n\n POSICAO " << i+1 << " - SENHA NUMERO " << pos[i] << endl; 
	}
}

int opcoes() //Opções do Usuário
{
    int op = 0;
    
    while (op < 1 || op > 5)
    {
          cout << "\n\n1. Exibir Fila" << endl;
          cout << "2. Entrar uma Pessoa na Fila " << endl;
          cout << "3. Atender Pessoa da Fila " << endl;
          cout << "4. Desistir de Ficar na Fila " << endl;
          cout << "5. Sair do Programa" << endl;
          cout << "Digite uma opcao: " << endl;
          cin >> op;
    }
    return op;
}

int main(int argc, char *argv[])
{
    int opcao, c;
    fila f;
    
    srand(time(NULL));
    
    opcao = opcoes();
    
    while (opcao != 5)
    {
      switch(opcao){
    	case 1:
    		f.imprimir(); 
    		break;
    	case 2:
    		f.acrescentar();
    		break;
    	case 3:
    		f.atender();
    		break;
    	case 4:
    		cout << "\nDigite a senha:\n";
    		cin >> c; //Senha da Pessoa que está desistindo de esperar na fila
    		f.desistir(c);
    		break;
    	default:
    		break;
	  }
      opcao = opcoes();        
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
Antonio Josivaldo Dantas Filho
Sistemas de Informação - G7 - 580961
POO I - AA7.1 – Construção da classe vetor de figuras geométricas

O aluno deverá elaborar um programa que crie um vetor de figuras geométricas (conforme desejo do usuário). Você poderá trabalhar com as seguintes figuras: círculo, retângulo ou triângulo. O usuário escolherá qual figuraficará na primeira posição, qual ficará na segunda e assim por diante. Métodos possíveis no vetor são: impressão da área da figura, do tipo de figura e do perímetro.

Aqui temos um exemplo simples de polimorfismo em quefica clara a generalização do código. Torna-se possível, por exemplo, a inclusão posterior de novas classes de figuras.

Para realizar a tarefa, procure construir as classes das figuras geométricas individualmente e testá-las,para que os eventuais erros não se propaguem quando as classes forem combinadas na solução final. Depois crie a classe vetor e incorpore uma das figuras geométricas. Por fim, incorpore todas.
Com tal estratégia, a velocidade de desenvolvimento da solução final é bem alta.
*/
 
#include <cstdlib>
#include <time.h>
#include <iostream>

class Figura{ //Classe Base Figura
	public:
		virtual void MostraPerimetro(){}
		virtual void MostraArea(){}
		virtual void MostraNome(){ std::cout << "Uma Figura";}
		virtual ~Figura(){}
};

class Circulo: public Figura{ //Polimorfismo 
	private:
		int r; //raio
	public:
		Circulo(int r1){ r=r1; } 
		void MostraPerimetro(){ std::cout << 2 * 3.14 * r;};
		void MostraArea(){ std::cout << 3.14 * r * r;};
		void MostraNome(){ std::cout << "Um Ciruclo";};
};

class Retangulo: public Figura{ //Polimorfismo 
	private:
		int x,y; //Lados
	public:
		Retangulo(int x1, int y1){ x=x1; y=y1; }
		void MostraPerimetro(){ std::cout << (x*2) + (y*2);};
		void MostraArea(){ std::cout << x * y;};
		void MostraNome(){ std::cout << "Um Retangulo";};
};

class Triangulo: public Figura{ //Polimorfismo 
	private:
		int h, l1, l2, l3; //Altura e Lados
	public:
		Triangulo(int h1, int l01, int l02, int l03){ h=h1; l1=l01; l2=l02; l3=l03; }
		void MostraPerimetro(){ std::cout << l1 + l2 + l3 ;};
		void MostraArea(){ std::cout << (h * l1)/2;};
		void MostraNome(){ std::cout << "Um Triangulo";};
};

using namespace std;

int opcoes() //Opções do Usuário
{
    int op = 0;
    
    while (op < 1 || op > 5)
    {
          cout << "\n\n1. Criar Figura" << endl;
          cout << "2. Exibir tipo da Figura " << endl;
          cout << "3. Exibir Perimetro da Figura " << endl;
          cout << "4. Exibir Area da Figura" << endl;
          cout << "5. Sair" << endl;
          cout << "Digite uma opcao: " << endl;
          cin >> op;
    }
    return op;
}

int main(int argc, char *argv[])
{
	int qtd = 0;
	int contador = 1;
	cout << "Digite a quantidade de Figuras:";
	cin >> qtd;
	
	Figura *f; //Ponteiro do tipo figura
	f = (Figura*) malloc(sizeof(Figura)*qtd); //Alocação dinamica
	
	int opcao, c;
    srand(time(NULL));
    
    opcao = 1; //Inicio
    
    while (opcao != 5)
    {
      switch(opcao){
    	case 1: 
    		if(contador > qtd){
    			cont << endl << "Sem espaços para novas figuras!" << endl;
    			break;
			}
    			
			f++;
    		int op2;
    		cout << "Escolha a figura que você gostaria de criar: " << endl;
    		cout << "1. Circulo" << endl;
    		cout << "2. Retangulo" << endl;
    		cout << "3. Traingulo" << endl;
    		cin >> op2; 
    		
    		switch(op2){ //Opções
    			case 1:
    				int r;
    				cout << "Digite o raio: " << endl;
    				cin >> r;
    				f = new Circulo(r); 
    				break;
    			case 2:
    				int x, y;
    				cout << "Digite os lados X Y: " << endl;
    				cin >> x;
    				cin >> y;
    				f = new Retangulo(x,y);
    				break;
    			case 3:
    				int h, l1, l2, l3;
    				cout << "Digite a altura H e os lados L1 L2 L3: " << endl;
    				cin >> h;
    				cin >> l1;
    				cin >> l2;
    				cin >> l3;
    				f = new Triangulo(h,l1,l2,l3);
    				break;
    			default:
    				break;
    			
			}
			contador++;
    		break;
    	case 2:
    		cout << endl << "Nome da figura: ";
    		f->MostraNome();
    		break;
    	case 3:
    		cout << endl << "Perimetro da figura: ";
			f->MostraPerimetro();
    		break;
    	case 4:
    		cout << endl << "Area da figura: ";
    		f->MostraArea();
			break;
    	default:
    		break;
	  }
      opcao = opcoes();        
    }
    	
	free(f);
	system("PAUSE");
    return EXIT_SUCCESS;
}

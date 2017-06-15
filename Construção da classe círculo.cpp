/*
Antonio Josivaldo Dantas Filho
Sistemas de Informação - G7 - 580961
POO I - AA6.1 - Construção da classe círculo

Essa atividade objetiva colocar em prática os conhecimentos adquiridos sobre herança. A presente atividade apenas aborda herança simples. Você deverá criar a classe ponto como ponto de partida para a classe circulo. A classe ponto representa um ponto no espaço com as coordenadas X e Y. A classe círculo (que pode ser representada pelas coordenadas X e Y e pelo raio R) deve ser criada à partir da classe ponto. Depois, a partir da classe círculo, deve ser criada a classe cilindro (representada por um círculo e um valor de altura).

Além de entender os mecanismos de herança, você poderá compreender melhor porque as fábricas de software preferem orientação a objetos. Na prática, nas empresas, há muitas classes prontas que podem ser utilizadas tanto para realizar composições (um carro tem rodas,câmbio, direção, portas etc) como heranças.

Ah, vale a pena entender as diferenças entre composição e herança. Uma outra atividade complementar interessante seria criar a classe círculo usando composição ao invés de herança. 
*/
 
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

class ponto{ //Classe Ponto
	private:
		int x; //Ponto X
		int y; //Ponto Y
	public: 
		void setX(int x1) {x = x1;} //Recebe Valores
		void setY(int y1) {y = y1;} //Recebe Valores
		int getX() {return x;} //Retorna Valores
		int getY() {return y;} //Retorna Valores
};

class circulo : public ponto{ //Classe Circulo com Herança da Classe Ponto
	private:
		int r; //Raio
	public:
		void setR(int r1) {r = r1;}	 //Recebe Valores
		int getR() {return r;} //Retorna Valores
};

class cilindro : public circulo{ //Classe Cilindro com Herança da Classe Circulo
	private:
		int h; //Altura
	public:
		void setH(int h1) {h = h1;} //Recebe Valores
		int getH() {return h;} //Retorna Valores
};

int main(int argc, char *argv[])
{
	//Declarando
	cilindro c;
	
	//Registrando Valores para Teste
	c.setX(0);
	c.setY(0);
	c.setR(10);
	c.setH(20);
       
    //Regatando Valores para Teste
    cout << "O volume do Cilindro e: " << (3.14 * c.getH() * c.getR() * c.getR()) << " esta localizado em X: " << c.getX() << " Y: " << c.getY();
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
Antonio Josivaldo Dantas Filho
Sistemas de Informa��o - G7 - 580961
POO I - AA6.1 - Constru��o da classe c�rculo

Essa atividade objetiva colocar em pr�tica os conhecimentos adquiridos sobre heran�a. A presente atividade apenas aborda heran�a simples. Voc� dever� criar a classe ponto como ponto de partida para a classe circulo. A classe ponto representa um ponto no espa�o com as coordenadas X e Y. A classe c�rculo (que pode ser representada pelas coordenadas X e Y e pelo raio R) deve ser criada � partir da classe ponto. Depois, a partir da classe c�rculo, deve ser criada a classe cilindro (representada por um c�rculo e um valor de altura).

Al�m de entender os mecanismos de heran�a, voc� poder� compreender melhor porque as f�bricas de software preferem orienta��o a objetos. Na pr�tica, nas empresas, h� muitas classes prontas que podem ser utilizadas tanto para realizar composi��es (um carro tem rodas,c�mbio, dire��o, portas etc) como heran�as.

Ah, vale a pena entender as diferen�as entre composi��o e heran�a. Uma outra atividade complementar interessante seria criar a classe c�rculo usando composi��o ao inv�s de heran�a. 
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

class circulo : public ponto{ //Classe Circulo com Heran�a da Classe Ponto
	private:
		int r; //Raio
	public:
		void setR(int r1) {r = r1;}	 //Recebe Valores
		int getR() {return r;} //Retorna Valores
};

class cilindro : public circulo{ //Classe Cilindro com Heran�a da Classe Circulo
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

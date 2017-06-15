/*
Antonio Josivaldo Dantas Filho
Sistemas de Informa��o - G7 - 580961
POO I - AA6.2 � Constru��o da classe Fra��o com sobrecarga de operadores

Em uma classe fra��o, os objetos tem numerador e denominador (o denominador n�o pode ser nulo).  Crie a classe fra��o com todos os m�todos necess�rios para seu bom funcionamento.  Fa�a a sobrecarga dos seguintes operadores: *, ++ (pr� e p�s fixado), << (sa�da) e  >> (entrada). A opera��o de multiplica��o (*) pode ser realizada com outro objeto do mesmo tipo (fra��o) ou com inteiros, em qualquer ordem.  Mostre a utiliza��o da classe e dos operadores sobrecarregados em um programa principal. 
*/
 
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

class fracao{ //Classe fracao
	private:
		int n; //Numerador
		int d; //Denominador
	public:
		fracao() { n=1;d=1;} //Construtor
		fracao(int n1,int d1){ n = n1; d = d1 > 0?d1:1; }  //Construtor
		void setfracao(int n1,int d1){ n = n1; d = n1; }  //Alterar Valores
		friend ostream& operator<< (ostream& os, fracao &c); //Sobrecarga do operador <<
		friend istream& operator>> (istream& is, fracao &c); //Sobrecarga do operador >>
		friend fracao operator* (fracao &c1,fracao &c2); //Sobrecarga do operador * entre objetos
		friend fracao operator* (fracao &c1, int i); //Sobrecarga do operador * entre objeto e inteiro
		friend fracao operator++ (fracao &c, int i); //Sobrecarga do operador ++ p�s fixado
		friend fracao operator++ (fracao &c); //Sobrecarga do operador ++ pr� fixado
};

ostream& operator<< (ostream& os, fracao &c){
	os << "Numerador: "	<< c.n << " Denominador: " << c.d << endl; //Exibi��o na tela
	return os;
}

istream& operator>> (istream& is, fracao &c){
	is >> c.n >> c.d; //Leitura do Teclado
	return is;
}

fracao operator* (fracao &c1,fracao &c2){
	fracao c3;
	c3.setfracao(c1.n*c2.n,c1.d*c2.d); //Multiplica��o de Valores
	return c3;
}																

fracao operator* (fracao &c1,int i){
	fracao c3;
	c3.setfracao(c1.n*i,c1.d); //Multiplica��o de Valores
	return c3;
}

fracao operator++ (fracao &c, int i){
	c.n++;c.d++; 
	fracao c1(c.n,c.d); //Inser��o de Valores
	return c1;
}

fracao operator++ (fracao &c){
	++c.n;++c.d; 
	fracao c1(c.n,c.d); //Inser��o de Valores
	return c1;
}

int main(int argc, char *argv[])
{
	fracao c1,c2,c3;
	
	cout << "Digite os valores Numerador Denominador da primeira fracao:";		
	cin >> c1;
	cout << "Digite os valores Numerador Denominador da segunda fracao:";
	cin >> c2;

	cout << "fracao 2 + 1" << endl;
	c2++;
	cout << c2;

	cout << "fracao 1 + 1" << endl;
	++c1;
	cout << c1;
	
	cout << "fracao 1 * 2" << endl;
	c3 = c1 * 2;
	cout << c3;

	cout << "fracao 1 * fracao 2" << endl;
	c3 = c1 * c2;
	cout << c3;
			
	system("PAUSE");
    return EXIT_SUCCESS;
}

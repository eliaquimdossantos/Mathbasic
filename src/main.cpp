#include <iostream>
#include "mathbasic.h"

using std::cout;
using std::endl;
using std::cin;

using namespace mbasic;

int MathBasic::v1 = 0;
int MathBasic::v2 = 0;

int main(int argc, char const *argv[])
{
	char operacao;

	cout << "Digite os dois números separados por espaço ou por uma linha: " << endl;
	cin >> MathBasic::v1 >> MathBasic::v2;
	cout << "Informe a operação: " << endl << "   '+' (para adição) " << endl
		<< "ou '-' (para subtração) " << endl
		<< "ou '*' (para multiplicação)" << endl 
		<< "ou '/' (para divisão)" << endl;
	cout << ">Operação: ";

	cin >> operacao;

	cout << endl;

	switch(operacao){
		case '+':
			cout << "++Soma: " << MathBasic::add(MathBasic::v1, MathBasic::v2) << endl;
			break;
		case '-':
			cout << "--Subtração: " << MathBasic::dif(MathBasic::v1, MathBasic::v2) << endl;
			break;
		case '*':
			cout << "**Multiplicação: " << MathBasic::mux(MathBasic::v1, MathBasic::v2) << endl;
			break;
		case '/':
			cout << "//Divisão: " << MathBasic::div(MathBasic::v1, MathBasic::v2) << endl;
			break;
	}


	return 0;
}
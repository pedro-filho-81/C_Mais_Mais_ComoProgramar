#include <iostream>  // biblioteca principal de entrada e saida
#include <locale> // biblioteca principal para localiza��o geogr�fica

using namespace std; // bibliteca secund�riao para cout e cin est� na bibliteca iostream

// fun��o principal
int main()
{ // limite inicial

    // instru��o para localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // escreve ol� mundo na tela
    cout << "Ol�, Mundo C++!" << endl;

    // retorna 0 se o programa for executado corretamente
    return 0;

} // fim da fun��o main

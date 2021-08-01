#include <iostream>  // biblioteca principal de entrada e saida
#include <locale> // biblioteca principal para localização geográfica

using namespace std; // bibliteca secundáriao para cout e cin está na bibliteca iostream

// função principal
int main()
{ // limite inicial

    // instrução para localização geográfica
    setlocale(LC_ALL, "portuguese");

    // escreve olá mundo na tela
    cout << "Olá, Mundo C++!" << endl;

    // retorna 0 se o programa for executado corretamente
    return 0;

} // fim da função main

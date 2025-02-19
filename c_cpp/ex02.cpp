/* EXERCICO 01 
2 - Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.
*/

#include <iostream>

int main(void)
{
    int num1;

    std::cout << "Insira um valor qualquer: ";
    std::cin >> num1;

    if( num1 % 2 )
        std::cout << "Ímpar" << '\n';
    else
        std::cout << "Par" << '\n';
    
    return 0;
}

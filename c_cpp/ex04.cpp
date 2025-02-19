/* EXERCICO 01 
4 - Faça um algoritmo que receba um número inteiro e imprima na tela o seu antecessor e o seu sucessor.
*/

#include <iostream>

int main(void)
{

    int numero;

    std::cout << "Insira o número: ";
    std::cin >> numero;

    std::cout << "O numero informado é   : " << numero << '\n';
    std::cout << "Seu número ANTECESSOR é: " << numero-1 << '\n';
    std::cout << "Seu número SUCESSOR é  : " << numero+1 << '\n';

    return 0;
}

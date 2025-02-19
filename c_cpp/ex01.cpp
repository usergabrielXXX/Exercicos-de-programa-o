/* EXERCICO 01 
1 - Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B é mostre se a soma é menor que C.
*/

#include <iostream>

int main(void)
{
    int a, b, c;
    std::cout << "Insira o valor de A: ";
    std::cin >> a;

    std::cout << "Insira o valor de B: ";
    std::cin >> b;

    std::cout << "Insira o valor de C: ";
    std::cin >> c;

    if((a + b) < c)
    {
        std::cout << (a + b) << " é MENOR que " << c << '\n';
    }
    else
        std::cout << (a + b) << " NÃO é MENOR que " << c << '\n';
    return 0;
}
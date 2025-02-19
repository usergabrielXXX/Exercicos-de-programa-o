/* EXERCICO 01 
3 - Faça um algoritmo que leia dois valores inteiros A e B, se os valores de A e B forem iguais, deverá somar os dois valores, 
caso contrário devera multiplicar A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado a uma variável C e imprimir seu valor na tela.
*/

#include <iostream>

int main(void)
{
    int a, b, c; // c é para armazenar o resulado de a e b;

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    if( a == b )
        std::cout << a << " + " << b << " = " << a + b << '\n';
    else
    {
        c = a * b;
        std::cout << a << " x " << b << " = " << c << '\n';
    }
    return 0;
}
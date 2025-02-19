//  7 - Faça um algoritmo que leia dois valores booleanos (lógicos) e determine se ambos são VERDADEIRO ou FALSO.

#include <iostream>

int main(void)
{

    int a, b;
    bool checar;

    std::cout << "A: ";
    std::cin >> a;
    std::cout << "B: ";
    std::cin >> b;

    checar = a == b;

    if( !checar )
        std::cout << a << " NÃO é igual a " << b << '\n';
    if(checar)
        std::cout << a << " É igual a " << b << '\n';
    return 0;
}
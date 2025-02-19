// 10 - Faça um algoritmo que leia três notas obtidas por um aluno, e imprima na tela a média das 

#include <iostream>

int main(void)
{

    float nota1, nota2, nota3, media;

    std::cout << "1ª nota: ";
    std::cin >> nota1;
    std::cout << "2ª nota: ";
    std::cin >> nota2;
    std::cout << "3ª nota: ";
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3.0;

    putchar('\n');

    std::cout << "Sua nota final é: " << media << '\n';

    return 0;
}
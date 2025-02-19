/* 11 - Faça um algoritmo que leia quatro notas obtidas por um aluno, calcule a média das nota obtidas, imprima na tela o nome do aluno e 
se o aluno foi aprovado ou reprovado. Para o aluno ser considerado aprovado sua média final deve ser maior ou igual a 7.
*/

#include <iostream>
#include <iomanip>
// #include <cmath>
// #include <cstring>

#define SIZE 100
#define NOTA_DE_CORTE 7.0

void calcularNotas(char nome[], float nota1, float nota2, float nota3, float nota4);

int main(void)
{
    float nota1, nota2, nota3, nota4;
    char nome[SIZE];

    std::cout << "Insira o seu nome: ";
    // std::cin.ignore();
    std::cin.getline(nome, SIZE);

    printf("1ª nota: ");
    std::cin >> nota1;
    // std::cin.ignore();
    printf("2ª nota: ");
    std::cin >> nota2;
    // std::cin.ignore();
    printf("3ª nota: ");
    // std::cin.ignore();
    std::cin >> nota3;
    printf("4ª nota: ");
    std::cin >> nota4;

    calcularNotas(nome, nota1, nota2, nota3, nota4);
    return 0;
}

// ( 5.6 + 8.9 + 3.6 ) ÷ 3

void calcularNotas(char nome[], float nota1, float nota2, float nota3, float nota4)
{

    float media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    std::string situacao;

    if(media >= NOTA_DE_CORTE) // MAIOR ou IGUAL 7.0
        situacao = "APROVADO";
    else
        situacao = "REPROVADO";

    std::cout << std::endl;
    std::cout << "Nome: " << nome << '\n';
    std::cout << "Média do aluno: " << std::fixed << std::setprecision(2) << media << '\n'; // teste
    // std::cout << "Média do aluno: " << media << '\n';
    std::cout << "situação: " << situacao << '\n';
}
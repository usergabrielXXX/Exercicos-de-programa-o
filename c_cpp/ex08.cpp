// 8 - Faça um algoritmo que leia três valores inteiros diferentes e imprima na tela os valores em ordem decrescente.

#include <iostream>
#define TAMANHO 3

void Ordenar(int vetor[], int tamanho);
void Exibir(int vetor[], int tamanho);

int main(void)
{

    int vetor[TAMANHO], tamArray;

    std::cout << "Insira o tamanho do vetor: ";
    std::cin >> tamArray;

    if(tamArray > 3)
    {
        std::cerr << "Este vetor suporta apenas 3 posições." << '\n';
        return 1;
    }

    for(int i=0; i < tamArray; i++)
    {
        printf("Informe o %d° valor: ", i+1);
        std::cin >> vetor[i];
    }

    Ordenar(vetor, tamArray);
    Exibir(vetor, tamArray);

    return 0;
}
void Exibir(int vetor[], int tamanho)
{
    std::cout << "\nOrdem descrescente:" << '\n';
    for(int i=0; i < tamanho; i++)
    {
        std::cout << vetor[i] << '\n';
    }
}
void Ordenar(int vetor[], int tamanho)
{
    
    for(int i=0; i < TAMANHO; i++)
    {
        int temporario = 0;
        for(int j=0; j < tamanho - 1; j++)
        {
            if(vetor[j] < vetor[j + 1])
            {
                temporario = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temporario;
            }
        }
    }
}
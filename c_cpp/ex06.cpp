/* EXERCICO 01 
6 - Faça um algoritmo que leia um valor qualquer e imprima na tela com um reajuste de 5%.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
    float valorProduto, desconto, valorFinal;

    // std::cout << "O produto custa R$ " << valorProduto << '\n';
    std::cout << "Insira o valor do produto: ";
    std::cin >> valorProduto;

    desconto = (valorProduto * 5) / 100;

    // std::cout << "O desconto é de " << desconto << "%." << '\n';
    std::cout << "O desconto é de " << std::fixed << std::setprecision(2) << desconto << "%." << '\n';

    valorFinal = valorProduto - (valorProduto * desconto / 100);
    std::cout << "Seu preço final fica R$ " << std::fixed << std::setprecision(2) << valorFinal << '\n';
    
    return 0;
}

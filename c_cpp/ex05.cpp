/* EXERCICO 01 
5 - Faça um algoritmo que leia o valor do salário mínimo e o valor do salário de um usuário,
calcule quantos salários mínimos esse usuário ganha e imprima na tela o resultado. (Base para o Salário mínimo R$ 1.293,20).

Desenvolva um algoritmo que solicite ao usuário o valor do salário mínimo vigente e o seu salário atual.
O programa deve calcular e exibir quantos salários mínimos o usuário recebe, considerando que o salário mínimo de referência é R$ 1.293,20(atual R$ 1.518,00).
*/
// Se o usuário informar que seu salário é R$ 3.879,60 e o salário mínimo é R$ 1.293,20,

#include <iostream>
#include <iomanip> // casa decimal - função std::setprecision()
#include <cmath> // std::round()

int main(void)
{
    float salarioAtual = 1518.00;
    // float salarioMinimo = 1.293;
    float recebeSalario;
    float saida;

    std::cout << "Informe seu salario: ";
    std::cin >> recebeSalario;
    saida = recebeSalario / salarioAtual;

    // std::cout << "Você recebe " << std::setprecision(2) << saida << " salários minímos." << '\n';
    std::cout << "Você recebe " << std::fixed << std::setprecision(1) << std::round(saida) << " salários minímos." << '\n';

    return 0;
}

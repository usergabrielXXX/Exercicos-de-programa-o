/*
9 - Faça um algoritmo que calcule o IMC (Índice de Massa Corporal) de uma pessoa, leia o seu peso e sua altura e imprima na tela sua condição 
de acordo com a tabela abaixo:
Fórmula do IMC = peso / (altura)
Tabela Condições IMC: 
Abaixo de 18,5    | Abaixo do peso          
Entre 18,6 e 24,9 | Peso ideal (parabéns)  
Entre 25,0 e 29,9 | Levemente acima do peso
Entre 30,0 e 34,9 | Obesidade grau I 
Entre 35,0 e 39,9 | Obesidade grau II (severa)
Maior ou igual a 40 | Obesidade grau III (mórbida)
*/

#include <iostream>
#include <iomanip> // std::setprecision()
#include <cmath> // std::round

void calcular(float peso, float altura);

int main(void)
{
    float peso, altura;

    std::cout << "Informe seu peso: ";
    std::cin >> peso;
    std::cout << "Informe sua altura: ";
    std::cin >> altura;
    calcular(peso, altura);
    return 0;
}

void calcular(float peso, float altura)
{
    float resultado = peso / (altura * altura);

    std::cout << '\n';
    // Abaixo de 18,5kg
    if(resultado < 18.5){
        std::cout << "Abaixo do peso" << '\n';
        std::cout << "IMC: " << std::fixed << std::setprecision(2) << resultado << '\n';
    }
    // Entre 18,6 e 24,9
    if(resultado > 18.6 && resultado < 24.9){
        std::cout << "Peso ideal! Muito bom." << '\n';
        std::cout << "IMC: " << std::fixed << std::setprecision(2) << resultado << '\n';
    }
    // Entre 25,0 e 29,9
    if(resultado > 25.0 && resultado < 29.9){
        std::cout << "Levemente acima do peso (sobrepeso)" << '\n';
        std::cout << "IMC: " << std::fixed << std::setprecision(2) << resultado << '\n';
    }
    // Entre 30,0 e 34,9
    if(resultado > 30.0 && resultado < 34.9){
        std::cout << "Obesidade grau I" << '\n';
        std::cout << "IMC: " << std::fixed << std::setprecision(2) << resultado << '\n';
    }
        // Entre 35,0 e 39,9
    if(resultado > 35.0 && resultado < 39.9){
        std::cout << "Obesidade grau II (severa)" << '\n';
        std::cout << "IMC: " << std::fixed << std::setprecision(2) << resultado << '\n';
    }
    
    // Maior ou igual a 40
    if(resultado >= 40.0){
        std::cout << "Obesidade grau III (mórbida)" << '\n';
        std::cout << "IMC: " << std::fixed << std::setprecision(2) << resultado << '\n';
    }
}
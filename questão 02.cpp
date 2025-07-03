#include <iostream>

int main() {
 int num1, num2;

    // Entrada dos números
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> num2;

    // Operações
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;

    // Divisão com verificação para não dividir por zero
    if (num2 != 0) {
        int divisao = num1 / num2;
        std::cout << "Soma: " << soma <<End;
        std::cout << "Subtração: " << subtracao <<end;
        std::cout << "Multiplicação: " << multiplicacao <<end;
        std::cout << "Divisão inteira: " << divisao <<end;
    } else 
        std::cout << "Soma: " << soma << end;
        std::cout << "Subtração: " << subtracao << end;
        std::cout << "Multiplicação: " << multiplicacao << end;
        std::cout << "Erro: divisão por zero não é permitida." << end;
    }

    return 0;

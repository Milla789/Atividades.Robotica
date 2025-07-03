#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    
#include <string>

    std::string nome;
    int idade;

    // Lê o nome do usuário
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    // Lê a idade do usuário
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    // Exibe mensagem personalizada
    std::cout << "Olá, " << nome << "! Você tem " << idade << " anos." << std::endl;


    return 0;
}

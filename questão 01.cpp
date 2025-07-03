#include <iostream>

int main() {
 // Tipos inteiros
    short int si = -32000;
    unsigned short int usi = 65000;
    int i = -100000;
    unsigned int ui = 100000;
    long int li = -1000000;
    unsigned long int uli = 1000000;
    long long int lli = -9000000000000000000;
    unsigned long long int ulli = 18000000000000000000U;

    // Tipos de ponto flutuante
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    // Tipo caractere
    char c = 'A';
    unsigned char uc = 200;
    signed char sc = -100;

    // Tipo booleano
    bool b = true;

    // Exibição dos valores
    std::cout << "short int: " << si << "\n";
    std::cout << "unsigned short int: " << usi << "\n";
    std::cout << "int: " << i << "\n";
    std::cout << "unsigned int: " << ui << "\n";
    std::cout << "long int: " << li << "\n";
    std::cout << "unsigned long int: " << uli << "\n";
    std::cout << "long long int: " << lli << "\n";
    std::cout << "unsigned long long int: " << ulli << "\n";

    std::cout << "float: " << f << "\n";
    std::cout << "double: " << d << "\n";
    std::cout << "long double: " << ld << "\n";

    std::cout << "char: " << c << "\n";
    std::cout << "unsigned char: " << static_cast<int>(uc) << "\n";
    std::cout << "signed char: " << static_cast<int>(sc) << "\n";

    std::cout << "bool: " << std::boolalpha << b << "\n";

    return 0;
}

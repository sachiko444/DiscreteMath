#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <math.h>

int main(int argc, char** argv) {

    int operando;
    int exponente;
    int modulo;

    std::cout << "\n \n Bienvenido a la calculadora de exponenciacion rapida :^) \n";
    std::cout << "\n Para comenzar, introduce los tres numeros \n";
    std::cout << "\n    Operando:  ";
    std::cin >> operando;
    std::cout << "\n    Exponente:  ";
    std::cin >> exponente;
    std::cout << "\n    Modulo:  ";
    std::cin >> modulo;


    //Si modulo es igual a 0
    while(modulo ==0) {
        std::cout << " \n Recuerda que el modulo no debe ser igual a 0 !! >:^| \n";
        std::cout << "\n    Operando:  ";
        std::cin >> operando;
        std::cout << "\n    Exponente:  ";
        std::cin >> exponente;
        std::cout << "\n    Modulo:  ";
        std::cin >> modulo;
    }

    //Convierte exponente a binario
    char bin[100000];
    itoa(exponente,bin,2);
    std::vector<int> x;
    x.push_back(1);


    for(int i=0; i<=strlen(bin); i++) {
        if((bin[i]) == '0') {
            x[i+1] = ((int)pow((x[i]),2)) % modulo;
        } else if((bin[i]) == '1') {
            x[i+1] = (((int)pow((x[i]),2)) * operando) % modulo;
        }
    }


    std::cout << x[strlen(bin)] ;
}
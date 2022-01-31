#include "cifrar.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>


int main(int argc, char** argv) {

    Cifrar c;


    std::cout << "Bienvenido al programa de cifrados, donde podras cifrar lo que quieras :) \n";
    std::cout << "Escribe un numero para comenzar:  ";
    std::cin >> c._numero; 


    std::cout << "Ahora escribe la palabra que deseas cifrar :) \n";
    std::cout << "Mensaje:  ";
    std::cin >> c._mensaje;


    c.transforma(); 


    while(!c.permiso()) { //cuando sea false
            std::cout << "Asegurate de escribir una palabra valida y en minusculas porfavor \n";
            std::cout << "Mensaje: ";
            std::cin >> c._mensaje;
            c.transforma();
    }


    c.transforma(); 
    c.cifra();
    c.resultado();


    std::string newstr(c._newmess.begin(), c._newmess.end());

    std::cout << "Tu mensaje cifrado es:  " << newstr << "\n";




}


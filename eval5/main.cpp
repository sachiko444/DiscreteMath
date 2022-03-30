#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char** argv) {

    int operando;
    int modulo;


    std::cout << "\n \n Bienvenido a la calculadora de inversos multiplicativos :^) \n";
    std::cout << "\n Para comenzar, introduce los dos numeros \n";
    std::cout << "\n    Operando:  ";
    std::cin >> operando;
    std::cout << "\n    Modulo:  ";
    std::cin >> modulo;

    

    //Ver si tiene inverso multiplicativo (sacar el mcd y que sea 1)
    while((std::__gcd(operando, modulo) != 1) || (modulo ==0) || (operando == 0)) {
        std::cout << " \n Recuerda que los dos numeros seleccionados deben ser coprimos no iguales a 0 !! >:^| \n";
        std::cout << "\n    Operando:  ";
        std::cin >> operando;
        std::cout << "\n    Modulo:  ";
        std::cin >> modulo;
        std::__gcd(operando, modulo);
    }

    std::vector<int> g;
    std::vector<int> u;
    std::vector<int> v;
    std::vector<int> y; 

   g.push_back(modulo);
   g.push_back(operando);
   u.push_back(1);
   u.push_back(0);
   v.push_back(0);
   v.push_back(1);
   y.push_back(0);
   y.push_back(0);

    int inverso;
    int i = 1;


    while(g[i]!=0) {
        y.push_back((g[i-1])/(g[i]));
        g.push_back((g[i-1]) - (y[i+1] * g[i]));
        u.push_back((u[i-1]) - (y[i+1] * u[i]));
        v.push_back((v[i-1]) - (y[i+1] * v[i]));
        i++;
        
    }

    if(v[i-1] <0) {
        inverso = v[i-1] + modulo;
    } else {
        inverso = v[i-1];
    }


    std::cout << "El inverso es: " << inverso << "\n";


}
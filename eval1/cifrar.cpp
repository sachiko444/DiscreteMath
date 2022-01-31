#include "cifrar.h"
#include <iostream>
#include <vector>
#include <cstring>
#include <string>





std::vector<char> abc = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


//convertir mensaje en string, imprimir for cada letra

void Cifrar::transforma() { //Transforma palabra en numeros
    _mult.clear();

    for(int i = 0; i < _mensaje.length(); i++) { 

        for(int j =0; j < abc.size(); j++) {

            if(_mensaje[i] == abc[j]) {
            _mult.push_back(j);
            
            }
        }

    }
}





bool Cifrar::permiso() { //Verifica si mensaje conlleva caracteres conforme a las reglas

    

    if(_mult.size() == _mensaje.length()) {
        return true; 
    } else {
        return false; 
    }

}






void Cifrar::cifra() {  //Crea el nuevo codigo 

    for(int i = 0; i < _mult.size(); i++) {

        _newnum.push_back((_numero * _mult[i]) % 27); 

    }

}               






void Cifrar::resultado() {  //Transforma numeros en palabra cifrada



    for(int i = 0; i < _newnum.size(); i++) { 

        _newmess.push_back(abc[_newnum[i]]); 

    }


}






#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstring>


class Cifrar {

    public:
    void transforma();
    bool permiso();
    void cifra(); //no se si las variables mult y newnum deberian estar en publi o private
    void resultado();

    
    int _numero;
    std::string _mensaje; 
    std::vector<int> _mult;
    std::vector<int> _newnum;
    std::vector<char> _newmess;


};
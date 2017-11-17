#include "Poder.h"
#include "Curativo.h"
#include <iostream>
#include <string>

Curativo::Curativo(){}

Curativo::Curativo(string pNombre, string pNivel, string pTipo){

    nombrep=pNombre;
    nivelpoder=pNivel;
    tipo=pTipo;

}

void Curativo::setTipo(string pTipo){

    tipo=pTipo;
}

string Curativo::getTipo(){

    return tipo;
}
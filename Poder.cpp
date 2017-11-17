#include "Poder.h"
#include <iostream>
#include <string>

Poder::Poder(string pNombre, string pNivel){
    nombrep=pNombre;
    nivelpoder=pNivel;
}

void Poder::setNombrep(string pNombre){
    nombrep=pNombre;

}

void Poder::setNivelpoder(string pNivel){
    nivelpoder=pNivel;

}

string Poder::getNombrep(){

    return nombrep;
}

string Poder::getNivelpoder(){

    return nivelpoder;
}
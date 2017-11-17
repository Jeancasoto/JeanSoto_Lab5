#include "Poder.h"
#include "Ofensivo.h"
#include <iostream>
#include <string>

Ofensivo::Ofensivo(){}

Ofensivo::Ofensivo(string pNombre, string pNivel, string pRango, string pFuerza){

    nombrep=pNombre;
    nivelpoder=pNivel;
    rango=pRango;
    fuerza=pFuerza;

}

void Ofensivo::setRango(string pRango){

    rango=pRango;
}

void Ofensivo::setFuerza(string pFuerza){

    fuerza=pFuerza;
}

string Ofensivo::getRango(){

    return rango;
}

string Ofensivo::getFuerza(){

    return fuerza;
}



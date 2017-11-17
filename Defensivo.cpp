#include "Poder.h"
#include "Defensivo.h"
#include <iostream>
#include <string>

Defensivo::Defensivo(){}

Defensivo::Defensivo(string pNombre, string pNivel, string pResistencia, string pDuracion){

    nombrep=pNombre;
    nivelpoder=pNivel;
    resistencia=pResistencia;
    duracion=pDuracion;

}

void Defensivo::setResistencia(string pResistencia){

    resistencia=pResistencia;
}

void Defensivo::setDuracion(string pDuracion){

    duracion=pDuracion;
}

string Defensivo::getResistencia(){

    return resistencia;
}

string Defensivo::getDuracion(){

    return duracion;
}
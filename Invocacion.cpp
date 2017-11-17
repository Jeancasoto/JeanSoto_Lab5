#include "Poder.h"
#include "Invocacion.h"
#include <iostream>
#include <string>

Invocacion::Invocacion(){}

Invocacion::Invocacion(string pNombre, string pNivel, string pNombrem, string pEspecie, string pHabilidad){

    nombrep=pNombre;
    nivelpoder=pNivel;
    nombrem=pNombrem;
    especie=pEspecie;
    habilidad=pHabilidad;

}

void Invocacion::setNombrem(string pNombrem){

    nombrem=pNombrem;
}

void Invocacion::setEspecie(string pEspecie){

    especie=pEspecie;
}

void Invocacion::setHabilidad(string pHabilidad){

    habilidad=pHabilidad;
}


string Invocacion::getNombrem(){

    return nombrem;
}

string Invocacion::getEspecie(){

    return especie;
}

string Invocacion::getHabilidad(){

    return habilidad;
}
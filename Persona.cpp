#include "Persona.h"

Persona::Persona(string pNacion, string pNombre, string pEdad, string pSexo){

    nacion=pNacion;
    nombre=pNombre;
    edad=pEdad;
    sexo=pSexo;

}

Persona::~Persona(){}

void Persona::setNacion(string pNacion){

    nacion=pNacion;

}
void Persona::setNombre(string pNombre){

    nombre=pNombre;

}
void Persona::setEdad(string pEdad){

    edad=pEdad;

}
void Persona::setSexo(string pSexo){

    sexo=pSexo;

}

string Persona::getNacion(){

    return nacion;

}

string Persona::getNombre(){

    return nombre;

}
string Persona::getEdad(){

    return edad;

}
string Persona::getSexo(){

    return sexo;

}

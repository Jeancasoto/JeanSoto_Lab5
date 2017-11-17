#include "NonBender.h"

//NonBender::~NonBender(){}

NonBender::NonBender(string pNacion, string pNombre, string pEdad, string pSexo, string pTrabajo, string pFuerza, string pVelocidad){
    nacion=pNacion;
    nombre=pNombre;
    edad=pEdad;
    sexo=pSexo;
    trabajo=pTrabajo;
    fuerza=pFuerza;
    velocidad=pVelocidad;

}

void NonBender::setTrabajo(string pTrabajo){
    trabajo=pTrabajo;

}

void NonBender::setFuerza(string pFuerza){
    fuerza=pFuerza;
    
}

void NonBender::setVelocidad(string pVelocidad){
    velocidad=pVelocidad;
    
}

string NonBender::getTrabajo(){
    return trabajo;

}

string NonBender::getFuerza(){
    return fuerza;

}

string NonBender::getVelocidad(){
    return velocidad;

}
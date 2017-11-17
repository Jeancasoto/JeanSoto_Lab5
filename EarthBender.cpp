#include "EarthBender.h"

EarthBender::~EarthBender(){}

EarthBender::EarthBender(string pNacion, string pNombre, string pEdad, string pSexo, string pCantcoles, string pGraduacion, Poder* pPoder){
    nacion=pNacion;
    nombre=pNombre;
    edad=pEdad;
    sexo=pSexo;
    coles=pCantcoles;
    graduacion=pGraduacion;
    poder=pPoder;

}

void EarthBender::setColes(string pColes){
    coles=pColes;

}

void EarthBender::setGraduacion(string pGraduacion){
    graduacion=pGraduacion;
    
}

void EarthBender::setPoder(Poder* pPoder){
    poder=pPoder;
    
}

string EarthBender::getColes(){
    return coles;

}

string EarthBender::getGraduacion(){
    return graduacion;

}

Poder* EarthBender::getPoder(){
    return poder;

}
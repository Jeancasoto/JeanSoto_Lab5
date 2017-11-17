#include "AirBender.h"

AirBender::~AirBender(){}

AirBender::AirBender(string pNacion, string pNombre, string pEdad, string pSexo, string pCantpelo, string pColorflechas, Poder* pPoder){
    nacion=pNacion;
    nombre=pNombre;
    edad=pEdad;
    sexo=pSexo;
    cantpelo=pCantpelo;
    colorflechas=pColorflechas;
    poder=pPoder;

}

void AirBender::setPelo(string pPelo){
    cantpelo=pPelo;

}

void AirBender::setFlechas(string pFlechas){
    colorflechas=pFlechas;
    
}

void AirBender::setPoder(Poder* pPoder){
    poder=pPoder;
    
}

string AirBender::getPelo(){
    return cantpelo;

}

string AirBender::getFlechas(){
    return colorflechas;

}

Poder* AirBender::getPoder(){
    return poder;

}
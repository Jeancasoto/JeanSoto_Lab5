#include "WaterBender.h"

WaterBender::~WaterBender(){}

WaterBender::WaterBender(string pNacion, string pNombre, string pEdad, string pSexo, string pTribu, string pArma, Poder* pPoder){
    nacion=pNacion;
    nombre=pNombre;
    edad=pEdad;
    sexo=pSexo;
    tribu=pTribu;
    arma=pArma;
    poder=pPoder;

}

void WaterBender::setTribu(string pTribu){
    tribu=pTribu;

}

void WaterBender::setArma(string pArma){
    arma=pArma;
    
}

void WaterBender::setPoder(Poder* pPoder){
    poder=pPoder;
    
}

string WaterBender::getTribu(){
    return tribu;

}

string WaterBender::getArma(){
    return arma;

}

Poder* WaterBender::getPoder(){
    return poder;

}
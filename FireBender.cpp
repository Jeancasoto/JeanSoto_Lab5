#include "FireBender.h"

FireBender::~FireBender(){}

FireBender::FireBender(string pNacion, string pNombre, string pEdad, string pSexo, string pCicatrices, string pVictorias, Poder* pPoder){
    nacion=pNacion;
    nombre=pNombre;
    edad=pEdad;
    sexo=pSexo;
    ncicatrices=pCicatrices;
    nvictorias=pVictorias;
    poder=pPoder;

}

void FireBender::setCicatrices(string pCicatrices){
    ncicatrices=pCicatrices;

}

void FireBender::setVictorias(string pVictorias){
    nvictorias=pVictorias;
    
}

void FireBender::setPoder(Poder* pPoder){
    poder=pPoder;
    
}

string FireBender::getCicatrices(){
    return ncicatrices;

}

string FireBender::getVictorias(){
    return nvictorias;

}

Poder* FireBender::getPoder(){
    return poder;

}
#pragma once
#include "Persona.h"
#include <string>
#include <stdlib.h>
using namespace std;

class NonBender :public Persona{

    public:
        string trabajo;
        string fuerza;
        string velocidad;

       // NonBender();
        //~NonBender();
        NonBender(string, string, string ,string , string ,string, string);

        //setter
        void setTrabajo(string);
        void setFuerza(string);
        void setVelocidad(string);

        //getter
        string getTrabajo();
        string getFuerza();
        string getVelocidad();
};
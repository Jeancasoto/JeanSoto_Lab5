#pragma once
#include "Poder.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Invocacion: public Poder{
    public:
        string nombrem;
        string especie;
        string habilidad;

        Invocacion();
        Invocacion(string, string, string, string, string);

        //setter
        void setNombrem(string);
        void setEspecie(string);
        void setHabilidad(string);

        //getter
        string getNombrem();
        string getEspecie();
        string getHabilidad();


};
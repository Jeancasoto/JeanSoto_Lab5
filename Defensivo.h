#pragma once
#include "Poder.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Defensivo :public Poder{
    public:
        string resistencia;
        string duracion;

        Defensivo();
        Defensivo(string, string, string, string);

        //setter
        void setResistencia(string);
        void setDuracion(string);

        //getter
        string getResistencia();
        string getDuracion();


};
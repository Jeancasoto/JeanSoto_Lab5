#pragma once
#include "Poder.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Ofensivo :public Poder{ 
    public:
        string rango;
        string fuerza;

        Ofensivo();
        Ofensivo(string, string, string, string);

        //setter
        void setRango(string);
        void setFuerza(string);

        //getter
        string getRango();
        string getFuerza();


};
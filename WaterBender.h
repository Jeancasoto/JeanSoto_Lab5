#pragma once
#include "Persona.h"
#include "Poder.h"
#include <string>
#include <stdlib.h>
using namespace std;

class WaterBender :public Persona{

    public:
        string tribu;
        string arma;
        Poder* poder;

        WaterBender();
        ~WaterBender();
        WaterBender(string, string, string ,string , string ,string, Poder*);

        //setter
        void setTribu(string);
        void setArma(string);
        void setPoder(Poder*);

        //getter
        string getTribu();
        string getArma();
        Poder* getPoder();
};
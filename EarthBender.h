#pragma once
#include "Persona.h"
#include "Poder.h"
#include <string>
#include <stdlib.h>
using namespace std;

class EarthBender :public Persona{

    public:
        string coles;
        string graduacion;
        Poder* poder;

        EarthBender();
        ~EarthBender();
        EarthBender(string, string, string ,string , string ,string, Poder*);

        //setter
        void setColes(string);
        void setGraduacion(string);
        void setPoder(Poder*);

        //getter
        string getColes();
        string getGraduacion();
        Poder* getPoder();
};
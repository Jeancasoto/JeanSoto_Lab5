#pragma once
#include "Persona.h"
#include "Poder.h"

class FireBender public:Persona{

    public:
        string ncicatrices;
        string nvictorias;
        Poder* poder;

        FireBender();
        ~FireBender();
        FireBender(string, string, string ,string , string ,string, Poder*);

        //setter
        void setCicatrices(string);
        void setVictorias(string);
        void setPoder(Poder*);

        //getter
        string getCicatrices();
        string getVictorias();
        Poder* getPoder();
};
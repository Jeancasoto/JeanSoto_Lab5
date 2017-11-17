#pragma once
#include "Persona.h"
#include "Poder.h"

class AirBender public:Persona{

    public:
        string cantpelo;
        string colorflechas;
        Poder* poder;

        AirBender();
        ~AirBender();
        AirBender(string, string, string ,string , string ,string, Poder*);

        //setter
        void setPelo(string);
        void setFlechas(string);
        void setPoder(Poder*);

        //getter
        string getPelo();
        string getFlechas();
        Poder* getPoder();
};
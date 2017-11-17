#pragma once 
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Persona{
    public:
        string nacion;
        string nombre;
        string edad;
        string sexo;

        Persona();
        Persona(string, string, string, string);
        virtual ~Persona();

        //setter
        void setNacion(string);
        void setNombre(string);
        void setEdad(string);
        void setSexo(string);

        //getter
        string getNacion();
        string getNombre();
        string getEdad();
        string getSexo();


};
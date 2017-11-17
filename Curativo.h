#pragma once
#include "Poder.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Curativo :public Poder{
    public:
        string tipo;
       

        Curativo();
        Curativo(string, string, string);

        //setter
        void setTipo(string);

        //getter
        string getTipo();


};
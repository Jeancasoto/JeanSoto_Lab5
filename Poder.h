#pragma once
#include <iostream>
#include <string>
#include <string>
#include <stdlib.h>
using namespace std;

class Poder{
    public:
        string nombrep;
        string nivelpoder;

        Poder();
        Poder(string, string);

        //setter
        void setNombrep(string);
        void setNivelpoder(string);

        //getter
        string getNombrep();
        string getNivelpoder();


};
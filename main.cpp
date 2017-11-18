#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Persona.h"
#include "Poder.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "NonBender.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Invocacion.h"

using namespace std;

int main(){
                // ofstream file ("Texto.txt");
                //     if(file.is_open()){
                //         file<<cadena;
                //     }//fin if
                // file.close();   

    char resp='s';
    while(resp=='s' || resp=='S'){
        vector<Persona*> personas;
        char r;
        cout<<"--------ADMINISTRADOR PERSONAJES DE AVATAR------"<<endl<<endl;
        cout<<"a)Agregar \nb)Eliminar \nc)Listar \nd)Salir"<<endl<<endl;
        cin>>r;
        switch(r){
             
            case 'a':{//switch de opciones
                char maestro;
                cout<<"a)Agregar maestro \nb)Agregar normalmente"<<endl;
                cin>>maestro;
                if(maestro=='a'){

                }
                if(maestro=='b'){
                     string cadena="";
                    string nacion;
                    string nombre;
                    string edad;
                    string sexo;
                    string trabajo;
                    string fuerza;
                    string velocidad;

                    cadena+="--NONBENDER--";
                    cadena+="\n";
                    cout<<"Ingrese nacion"<<endl;
                    cadena+="Nacion: ";
                    cin>>nacion;
                    cadena+=nacion;
                    cadena+="\n";
                    cout<<"Ingrese nombre"<<endl;
                    cadena+="Nombre: ";
                    cin>>nombre;
                    cadena+=nombre;
                    cadena+="\n";
                    cout<<"Ingrese edad"<<endl;
                    cadena+="Edad: ";
                    cin>>edad;
                    cadena+=edad;
                    cadena+="\n";
                    cout<<"Ingrese sexo"<<endl;
                    cadena+="Sexo: ";
                    cin>>sexo;
                    cadena+=sexo;
                    cadena+="\n";
                    cout<<"Ingrese trabajo"<<endl;
                    cadena+="Trabajo: ";
                    cin>>trabajo;
                    cadena+=trabajo;
                    cadena+="\n";
                    cout<<"Ingrese fuerza"<<endl;
                    cadena+="Fuerza: ";
                    cin>>fuerza;
                    cadena+=fuerza;
                    cadena+="\n";
                    cout<<"Ingrese velocidad"<<endl;
                    cadena+="Velocidad: ";
                    cin>>velocidad;
                    cadena+=velocidad;
                    cadena+="\n";
                    cadena+="\n";

                   Persona* non= new NonBender(nacion, nombre, edad, sexo, trabajo, fuerza, velocidad );
                    
                  
                   ofstream file ("Texto.txt");
                    if(file.is_open()){
                        file<<cadena;
                    }//fin if
                 file.close();   


                  
                }
            }
            break;
            //fin case a
            case 'b':{
                cout<<"No Elimina"<<endl;
                 
            }
            break;
            //fin case b
            case 'c':{
                 cout<<"Escribe en el archivo los non benders , ojo porfa en eso!"<<endl;

            }
            break;
            //fin case c
            case 'd':{
                resp='n';

            }
            break;
            //fin case d

        }

    }//fin while con respuesta de usuario


    return 0;
}
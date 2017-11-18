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
                cout<<"A)Agregar maestro \nB)Agregar normalmente"<<endl;
                cin>>maestro;
                if(maestro=='A'){

                }
                if(maestro=='B'){
                     string cadena="";
                    string nacion;
                    string nombre;
                    string edad;
                    string sexo;
                    string trabajo;
                    string fuerza;
                    string velocidad;

                    cout<<"Ingrese nacion"<<endl;
                    cin>>nacion;
                    cadena+=nacion;
                    cout<<"Ingrese nombre"<<endl;
                    cin>>nombre;
                    cadena+=nombre;
                    cout<<"Ingrese edad"<<endl;
                    cin>>edad;
                    cadena+=edad;
                    cout<<"Ingrese sexo"<<endl;
                    cin>>sexo;
                    cadena+=sexo;
                    cout<<"Ingrese trabajo"<<endl;
                    cin>>trabajo;
                    cadena+=trabajo;
                    cout<<"Ingrese fuerza"<<endl;
                    cin>>fuerza;
                    cadena+=fuerza;
                    cout<<"Ingrese velocidad"<<endl;
                    cin>>velocidad;
                    cadena+=velocidad;

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
                cout<<"CASOB"<<endl;
                 
            }
            break;
            //fin case b
            case 'c':{
                 cout<<"CASOC"<<endl;

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
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
                // ofstream file ("Texto.txt");
                //     if(file.is_open()){
                //         file<<cadena;
                //     }//fin if
                // file.close();   

    char resp='s';
    while(resp=='s' || resp=='S'){
        char r;
        cout<<"--------ADMINISTRADOR PERSONAJES DE AVATAR------"<<endl<<endl;
        cout<<"a)Agregar \nb)Eliminar \nc)Listar \nd)Salir"<<endl<<endl;
        cin>>r;
        switch(r){
            case 'a':{
                char maestro;
                cout<<"a)Agregar maestro \nb)Agregar normalmente"<<endl;
                cin>>maestro;
                switch(maestro){
                    case 'a':{
                        

                    }
                    break;
                    //fin case a de maestro
                    case 'b':{


                    }
                    break;
                    //fin case b de maestro

                }

                
            }
            break;
            //fin case a
            case 'b':{


            }
            break;
            //fin case b
            case 'c':{


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
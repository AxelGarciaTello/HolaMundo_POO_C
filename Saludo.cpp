#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Saludo{
private:
    string mensaje;
    
public:
    void crearMensaje(void){
        mensaje="Hola mundo\nMiau.";
    }
    
    string darMensaje(void){
        return mensaje;
    }
};
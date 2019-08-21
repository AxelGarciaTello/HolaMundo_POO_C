#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Saludo{
private:
    string nombre;
    
public:
    void preguntarNombre(){
        cout<<"Cual es tu nombre?"<<endl;
        cin>>nombre;
    }
    
    void saludar(){
        cout<<"Hola "<<nombre<<".\nHola mundo."<<endl;
    }
};
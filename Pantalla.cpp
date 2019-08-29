#include "Saludo.cpp"

class Pantalla{
private:
    Saludo *mensaje;
    
public:
    void imprimir(void){
        mensaje = new Saludo();
        mensaje->crearMensaje();
        string texto=mensaje->darMensaje();
        cout<<texto<<endl;
    }
};
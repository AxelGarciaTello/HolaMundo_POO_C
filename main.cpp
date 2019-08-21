#include "Saludo.cpp"

int main(void){
    Saludo *saludo;
    saludo = new Saludo();
    saludo->preguntarNombre();
    saludo->saludar();
    return 0;
}

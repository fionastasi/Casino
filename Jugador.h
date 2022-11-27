//
//  Jugador.h
//  Casino


#include <string>

class Jugador
{
private: //Atributos
    std::string nombre;
    int dineroInicial;
public: //Métodos
    Jugador(std::string,int); //Constructor
    void setNombre(std::string);
    std::string getNombre();
    void setDineroInicial(int);
    int getDineroInicial();
};

//Constructor para inciar los atributos:
Jugador::Jugador (std::string _nombre, int _dineroInicial){
    nombre = _nombre;
    dineroInicial = _dineroInicial;
}

std::string Jugador::getNombre(){
    return nombre;
}

int Jugador::getDineroInicial(){
    return dineroInicial;
}

void Jugador::setNombre(std::string _nombre){
    nombre = _nombre;
}

void Jugador::setDineroInicial(int _dineroInicial){
    dineroInicial = _dineroInicial;
}


#ifndef Jugador_h
#define Jugador_h


#endif /* Jugador_h */

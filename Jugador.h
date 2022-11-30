//
//  Jugador.h
//  Casino
#ifndef Jugador_h
#define Jugador_h

#include <string>

class Jugador
{
private:  //Atributos
    std::string nombre;
    int dineroInicial;
public: //Métodos
    Jugador(std::string,int); //Constructor
    void setNombre(std::string);
    std::string getNombre();
    int setDineroInicial(int,int);
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

int Jugador::setDineroInicial(int _dineroInicial,int fichasIniciales){
    dineroInicial = _dineroInicial - fichasIniciales;
    return fichasIniciales;
}

#endif /* Jugador_h */

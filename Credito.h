//
//  Credito.h
//  Casino
//
//

#ifndef Credito_h
#define Credito_h
#include "Jugador.h"

class Credito
private: public Jugador;{
    int fichasIniciales;
    int fichasFinales;
public:
    Credito (int,int);
    int getFichasIniciales();
    int getFichasFinales();
    void setFichasIniciales(int);
    void setFichasFinales(int);
};

void Credito::setCredito(int _fi, int _ff){
    fichasIniciales = _fi;
    fichasFinales = _ff;
}

int Credito::getFichasIniciales(){
    return fichasIniciales;
}

int Credito::getFichasFinales(){
    return fichasFinales;
}

void Jugador::setDineroInicial(int _dineroInicial){
    dineroInicial = _dineroInicial - fichasIniciales;
    return dineroInicial;
}



#endif /* Credito_h */

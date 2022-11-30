//
//  Fichas.h
//  Casino
//
//

#ifndef Fichas_h
#define Fichas_h
#include "Jugador.h"

class Fichas: public Jugador{
    private:
    int fichasIniciales;
    int fichasFinales;
public:
    Fichas (int,int);
    void setFichas(int,int);
    int getFichasIniciales();
    int getFichasFinales();
    void setFichasIniciales(int);
    void setFichasFinales(int);
};

Fichas::Fichas(int FichasIniciales,int FichasFinales):Jugador("", 0){
    fichasIniciales=FichasIniciales;
    fichasFinales=FichasFinales;
}

void Fichas::setFichas(int _fi, int _ff){
    fichasIniciales = _fi;
    fichasFinales = _ff;
}

int Fichas::getFichasIniciales(){
    return fichasIniciales;
}

int Fichas::getFichasFinales(){
    return fichasFinales;
}




#endif /* Credito_h */

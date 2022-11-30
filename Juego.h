//
//  Juego.h
//  Casino
//
//

#ifndef Juego_h
#define Juego_h
#include "Credito.h"

class Juego
{
private:
    int apuesta();
public:
    Juego (int);
    int getApuesta();
    int setApuesta(int,int);
};

int setApuesta(int FichasIniciales, int apuesta)
{
    return FichasIniciales-apuesta;
}

#endif /* Juego_h */

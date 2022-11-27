//
//  Juego.h
//  Casino
//
//

#ifndef Juego_h
#define Juego_h
#include <Credito.h>

class Juego
{
private:
    int apuesta();
public:
    Juego (int);
    int getApuesta();
    void setApuesta(int);
};

void setApuesta(int);{
    setFichasIniciales=FichasIniciales-apuesta;
    return fichasIniciales;
}

#endif /* Juego_h */

/******************************************************************************
    Casino classes: Jugador
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Jugador{
    private:
        string nombre;
        int dinero;
        int bebidaGratis;
        credito[]:Credito
        juegos[]:Juego 
    public:
        Jugador();
        void setNombre (string);
        void setDinero(int);
        void setBebidaGratis(int);
        string getNombre();
        int getDinero();
        int getBebidaGratis();
        int apostar();
        boolean cobrar();
        Credito credito;
        Juego juegos[2];
};



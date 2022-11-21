/******************************************************************************
Casino classes: Juego
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Juego{
    private:
        int apuesta;
    public:
        Juego();
        int apostar();
        int getApuesta();
        void setApuesta(int);
};

//
//  Ruleta.h
//  Casino
//
//


#ifndef Ruleta_h
#define Ruleta_h
#include "Credito.h"
#include "Juego.h"

class Ruleta: public Juego{
private:
    int dineroMesa;
    int apuesta;
    int num1Mesa;
    int colorMesa;
    int num1J;
    int colorJ;
    int jugar;
    int premio;
    string resultado;
public:
    int getDineroMesa();
    void setDineroMesa(int);
    int getApuesta();
    void setApuesta();
    int getNum1();
    int getColor();
    void setNum1(int);
    void setColor(int);
    int getJugar();
    int setJugar(int);
    int getPremio();
    int setPremio(int);
    void getresultado();
    void setresultado(string);
};

int Ruleta::getDineroMesa()
{
    return dineroMesa;
}
void Ruleta::setDineroMesa(int _dineroMesa)
{
    dineroMesa = _dineroMesa;
}
int Ruleta::setJugar(int apostar)
{
    if (jugar== 2)
    {
        cout<<"Cuanto desea apostar: 1)10 o 2)20"<<endl;
        if (apostar==1){
            apostar=apostar-10;}
        else if (apostar==2){
            apostar=apostar-20;
        }
        else{
            cout<<"opción no válida"<<endl;
        }
        int numJ=rand()%36+1;
        int colorJ=rand()%2+1;
        getresultado();
        return premio;
    }
    else {
        cout<<"Vuelva pronto!"<<endl;
    }
    return 0;
}

void Ruleta::getresultado()
{
    cout<<"El resultado fue:"<<"[{0}] [{1}]"<< num1Mesa<< colorMesa<<endl;
    cout<<"Sus apuesta fue:"<<"[{0}] [{1}]"<< num1J<< colorJ<<endl;
}
int Ruleta::setPremio(int apostar)
{
//Si el número y el color son iguales, gana su apuesta + 10 monedas
    if(num1J==num1Mesa && colorMesa==colorJ)
    {
        setDineroMesa(getDineroMesa()-10);
        return 10;
        apostar=apostar+10;
        cout<<"Usted gano: 10"<<endl;
    }
    else {
        cout<<"Usted gano: 0"<<endl;
    }
    return 0;
}


#endif /* Ruleta_h */

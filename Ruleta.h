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
    int numJ;
    int colorJ;
    int jugar;
    int premio;
    string resultado;
public:
    Ruleta(int);
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
Ruleta::Ruleta(int FichasApostadas):Juego(0){
    apuesta=FichasApostadas;
}

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
        int opcion;
        cout<<"Cuanto desea apostar: 1)10 o 2)20"<<endl;
        cin>>opcion;
        if (opcion==1){
            apostar=apostar-10;}
        else if (opcion==2){
            apostar=apostar-20;
        }
        else{
            cout<<"opción no válida"<<endl;
        }
        num1Mesa=rand()%36+1;
        colorMesa=rand()%2+1;
    cout<<"Elije tu numero y color"<<endl;
    cin>>numJ;
    cin>>colorJ;
        getresultado();
        return premio;
}

void Ruleta::getresultado()
{
    cout<<"El resultado fue:"<<"[{"<<num1Mesa<<"}]"<<"[{"<<colorMesa<<"}]"<<endl;
    cout<<"Sus apuesta fue:"<<"[{"<<numJ<<"}]"<<"[{"<<colorJ<<"}]"<<endl;
}
int Ruleta::setPremio(int apostar)
{
//Si el número y el color son iguales, gana su apuesta + 10 monedas
    if(numJ==num1Mesa && colorMesa==colorJ)
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


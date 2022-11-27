//
//  Ruleta.h
//  Casino
//
//


#ifndef Ruleta_h
#define Ruleta_h
#include "Credito.h"
#include "Juego.h"

class Ruleta
private: public Juego{
    int dineroMesa();
    int apuesta();
    int num1Mesa();
    int colorMesa();
    int num1J();
    int colorJ();
    int jugar();
    int premio();
    string resultado();
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
    void setJugar(int);
    int getPremio();
    void setPremio(int);
    string getresultado();
    void setresultado(string);
};

int Ruleta::getDineroMesa()
{
    return dineroMesa;
}
void TragaMoneda::setDineroMaquina(int _dineroMesa)
{
    dineroMesa = _dineroMesa;
}
void Ruleta::setJugar()
{
    dineroMaquina++;
    if jugar== 2;
    {
        cout<<"Cuanto desea apostar: 1)10 o 2)20"<<endl;
        if apostar=1;{
            setFichasIniciales(getFichasIniciales()-10);
        else if apostar=2;{
            setFichasIniciales(getFichasIniciales()-20);
        }
        else{
            cout<<"opción no válida"<<endl;
        }
        }
        Random azar=new Random();
        num1=(int)azar.Next(0,36);
        color=(int)azar.Next(rojo,negro);
        resultado();
        return premio();
    }
    else {
        cout<<"Vuelva pronto!"<<endl;
    }
}

void Ruleta::getResultado()
{
    cout<<"El resultado fue:"<<"[{0}] [{1}]", num1Mesa(), colorMesa()<<endl;
    cout<<"Sus apuesta fue:"<<"[{0}] [{1}]", num1J(), colorJ()<<endl;
}
int TragaMonedas::setPremio()
{
//Si el número y el color son iguales, gana su apuesta + 10 monedas
    if(num1J==num1Mesa && colorMesa==colorJ)
    {
        setDineroMesa(getDineroMesa()-10);
        return 10;
        setFichasIniciales(getFichasIniciales()apuesta+10);
        cout<<"Usted gano: 10"<<endl;
    }
    else {
        int premio = dineroMesa;
        setdineroMesa = 0;
        return premio;
        cout<<"Usted gano: 0"<<endl;
    }
}


#endif /* Ruleta_h */

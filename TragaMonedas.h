//
//  TragaMonedas.h
//  Casino
//
//

#ifndef TragaMonedas_h
#define TragaMonedas_h
#include "Credito.h"
#include "Juego.h"

class TragaMonedas
private: public Juego{
    int dineroMaquina();
    int apuesta();
    int num1();
    int num2();
    int num3();
    int jugar();
    int premio();
    string resultado();
public:
    int getDineroMaquina();
    void setDineroMaquina(int);
    int getApuesta();
    void setApuesta();
    int getNum1();
    int getNum2();
    int getNum3();
    void setNum1(int);
    void setNum2(int);
    void setNum3(int);
    int getJugar();
    void setJugar(int);
    int getPremio();
    void setPremio(int);
    string getresultado();
    void setresultado(string);
};

int TragaMonedas::getDineroMaquina()
{
    return dineroMaquina;
}
void TragaMoneda::setDineroMaquina(int _dineroMaquina)
{
    dineroMaquina = _dineroMaquina;
}
void TragaMoneda::setJugar()
{
    dineroMaquina++;
    if jugar== 1;
    {
        cout<<"Cuanto desea apostar: 1)5 o 2)10"<<endl;
        if apostar=1;{
            setFichasIniciales(getFichasIniciales()-5);
        else if apostar=2;{
            setFichasIniciales(getFichasIniciales()-10);
        }
        else{
            cout<<"opción no válida"<<endl;
        }
        }
        Random azar=new Random();
        num1=(int)azar.Next(0,10);
        num2=(int)azar.Next(0,10);
        num3=(int)azar.Next(0,10);
        resultado();
        return premio();
    }
    else {
        cout<<"Vuelva pronto!"<<endl;
    }
}
void TragaMoneda::getResultado()
{
    cout<<"Sus números son:"<<"[{0}] [{1}] [{2}]", num1, num2, num3<<endl;
}
int TragaMonedas::setPremio()
{
#Si son 3 número iguales, gana 10 monedas
    if(num1==num2 && num1==num3)
    {
        setDineroMaquina(getDineroMaquina()-10);
        return 10;
        setFichasIniciales(getFichasIniciales()+10);
        cout<<"Usted gano: 10"<<endl;
    }
    else {
        if(num1==num2 || num1==num3 || num2==num3)
        {
            setcreditoMaquina(getcreditoMaquina()-5);
            return 5;
            setFichasIniciales(getFichasIniciales()+5);
            cout<<"Usted gano: 5"<<endl;
        }
        else {
            int premio = creditoMaquina;
            setcreditoMaquina = 0;
            return premio;
            cout<<"Usted gano: 0"<<endl;
        }
    }
}

#endif /* TragaMonedas_h */

//
//  TragaMonedas.h
//  Casino
//
//

#ifndef TragaMonedas_h
#define TragaMonedas_h
#include "Credito.h"
#include "Juego.h"

class TragaMonedas: public Juego{
private:
    int apuesta;
    int num1;
    int num2;
    int num3;
    int jugar;
    int premio;
    string resultado;
public:
    TragaMonedas(int);
    int dineroMaquina;
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
    int setJugar(int);
    int getPremio();
    int setPremio(int);
    void getresultado();
    void setresultado(string);
};

TragaMonedas::TragaMonedas(int Fichasapostadas):Juego(0){
    apuesta=Fichasapostadas;
}

int TragaMonedas::getDineroMaquina()
{
    return dineroMaquina;
}
void TragaMonedas::setDineroMaquina(int _dineroMaquina)
{
    dineroMaquina = 100;
}
int TragaMonedas::setJugar(int apostar)
{
    int opcion;
        cout<<"Cuanto desea apostar: 1)5 o 2)10"<<endl;
    cin>>opcion;
        if (opcion==1){
            apostar=apostar-5;}
        else if (opcion==2){
            apostar=apostar-10;
        }
        else{
            cout<<"opción no válida"<<endl;
        }
        num1=rand()%10+1; //Generar un num random del 0-10
        num2=rand()%10+1;
        num3=rand()%10+1;
        //Random azar=new Random();
        //num1=(int)azar.Next(0,10);
        //num2=(int)azar.Next(0,10);
        //num3=(int)azar.Next(0,10);
        getresultado();
        return premio;
}
void TragaMonedas::getresultado()
{
    cout<<"Sus números son:"<<"[{"<<num1<<"}]"<<"[{"<<num2<<"}]"<<"[{"<<num3<<"}]"<<endl;
}
int TragaMonedas::setPremio(int apostar)
{
//Si son 3 número iguales, gana 10 monedas
    if(num1==num2 && num1==num3)
    {
        dineroMaquina=dineroMaquina-10;
        return 10;
        apostar=apostar+10;
        cout<<"Usted gano: 10"<<endl;
    }
    else {
        if(num1==num2 || num1==num3 || num2==num3)
        {
            dineroMaquina=dineroMaquina-5;
            return 5;
            apostar=apostar+5;
            cout<<"Usted gano: 5"<<endl;
        }
        else {
            cout<<"Usted gano: 0"<<endl;
        }
    }
    return 0;
}

#endif /* TragaMonedas_h */

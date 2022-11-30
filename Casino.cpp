//
//  Casino.cpp
//  Casino
//
//
#include <iostream>
using namespace std;
#include <stdio.h>
#include "Jugador.h"
#include "Credito.h"
#include "Juego.h"
#include "TragaMonedas.h"
#include "Ruleta.h"

Jugador jugador("Fiona",1000);
Fichas fichas(0,0);
Juego juego(0);
TragaMonedas tragaMonedas(0);
Ruleta ruleta(0);


int main(){
    cout<<"Bienvenido al casino, introduce tu nombre"<<endl;
    string nombre;
    cin>>nombre;
    jugador.setNombre(nombre);
    cout<<"indica cuanto dinero tienes:"<<endl;
    int cantidadDinero;
    cin>>cantidadDinero;
    jugador.setDineroInicial(cantidadDinero,0);
    cout<<jugador.getNombre();
    cout<<jugador.getDineroInicial();
    cout<<"Cuantas fichas quieres?"<<endl;
    int fichasDeseadas;
    cin>>fichasDeseadas;
    fichas.setFichas(cantidadDinero,fichasDeseadas);
    int opcionJuego;
    while(true) {
        cout<<"Desea jugar a la traga monedas (1) o a la ruleta (2)? Selecciona el (3) para salir"<<endl;
        cin>>opcionJuego;
        if (opcionJuego==1){
            cout<<tragaMonedas.setJugar(fichasDeseadas);
            //fichas.agregarFichas(tragaMonedas.setJugar(fichasDeseadas));
        }else if (opcionJuego==2){
            cout<<ruleta.setJugar(fichasDeseadas);
        }else {
            cout<<"Gracias por jugar"<<endl;
        }
        if (fichasDeseadas==0 || opcionJuego==3){
            break;
        }
    }
}

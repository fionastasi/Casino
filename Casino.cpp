//
//  Casino.cpp
//  Casino
//
//

#include <stdio.h>
#include "Jugador.h"
#include "Credito.h"
#include "Juego.h"
#include "TragaMonedas.h"
#include "Ruleta.h"

Jugador Jugador;
Credito Credito;
Juego Juego;
TragaMonedas TragaMonedas;
Ruleta Ruleta;


int main(){
    cout<<"Bienvenido al casino, por favor ingresa tu nombre: "<<Jugador.getNombre()<<" e indica cuanto dinero tienes: "<< Jugador.getDineroInicial()<<endl;
    cin >> nombre;
    cin >> dineroInicial;
    cout<<"Perfecto, cuanto de tu dinero deseas cambiar a fichas:"<<Credito.getFichasIniciales()<<endl;
    cin >> fichasIniciales;
    cout>>"Desea jugar a la traga monedas (1) o a la ruleta (2)"<<TragaMonedas.getJugar()<<Ruleta.getJugar()<<endl;
    cin >> TragaMonedas.getJugar();
    cin >> Ruleta.getJugar();
}


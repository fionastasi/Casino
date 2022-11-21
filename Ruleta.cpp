/******************************************************************************
Casino classes: Ruleta
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Ruleta{
    private:
        boolean jugar;
    public:
        int elegirCasilla();
        int apostar();
        bool getJugar();
        void setJugar(boolean);
};

Ruleta::Ruleta(jugar_){
    jugar = jugar_;
};

void Ruleta::setJugar(bool jugar_){
  jugar = jugar_;
}
bool Ruleta::getJugar(){
  return jugar;
}

int main()
{
    bool jugar;
    cout << "Jugar a la ruleta? Si(1) - No(0)" << endl;
    cin >> jugar;
    if (jugar == true)
        cout << "Elige tu casilla:" << elegirCasilla << "Cuanto vas a apostar?" << apostar << endl;
    else
        cout << "no problem";
    return 0;
}

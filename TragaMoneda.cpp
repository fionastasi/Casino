/******************************************************************************
Casino classes: TragaMoneda
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class TragaMoneda{
    private:
        bool jugar;
    public:
        bool iniciar();
        int apostar();
        bool getJugar();
        void setJugar(boolean);
};

TragaMoneda::TragaMoneda(jugar_){
    jugar = jugar_;
};

void TragaMoneda::setJugar(bool jugar_){
  jugar = jugar_;
}
bool TragaMoneda::getJugar(){
  return jugar;
}

int main()
{
    bool jugar;
    cout << "Jugar a la TragaMoneda? Si(1) - No(0)" << endl;
    cin >> jugar;
    if (jugar == true)
        cout << "Iniciar" << iniciar << "Cuanto vas a apostar?" << apostar << endl;
    else
        cout << "no problem";
    return 0;
}


/******************************************************************************
Casino classes: Credito
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Credito{
    private:
        int dinero();
    public:
        int comprarFichas();
        int cambiarFichas();
        int getDinero();
        void setDinero(int);
};

Credito::Credito (dinero_){
    dinero = dinero_;
}
void Credito::setDinero(int dinero_){
  dinero = dinero_;
}
int Credito::getDinero(){
  return dinero;
}

int main()
{
    int dinero;
    int d=0;
    cout << "Cuanto dinero quieres ingresar? 1) 10 2)50 3)100 " << endl;
    cin >> dinero;
    if (dinero == 1){
        d = dinero;
        cout << "+10" <<  endl;
        return d;
    }
    else if (dinero == 2) {
        d = dinero;
        cout << "+50" <<  endl;
        return d;
    }
    else if (dinero == 3) {
        d = dinero;
        cout << "+100" <<  endl;
        return d;
    }
    else {
        cout<<"Opción no valida"<< endl;
    }
}
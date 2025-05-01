#include <iostream>
#include <string>

using namespace std;

int main()
{

    float peso;
    string piel;

    cout << "Ingrese su peso en kilos: " << endl;
    cin>>peso;

    if (peso >= 60)
    {

        cout << "Gorda de mierda." << endl;

    }
    else if (peso < 60)
    {
        cout << "te salvaste." << endl;
    }

    system("cls");

    cout << "Ingrese su color de piel: " << endl;
    cin>>piel;

    if (piel == "negro")
    {

        cout << "negro de mierda." << endl;

    }
    else
    {
        cout << "te salvaste." << endl;
    }

    return 0;
}

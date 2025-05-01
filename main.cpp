#include <iostream>

using namespace std;

int main()
{

    float peso;

    cout << "Ingrese su peso en kilos: " << endl;
    cin>>peso;

    if (peso >= 60)
    {

        cout << "Gorda de mierda." << endl;

    }
    else if (peso < 60)
    {
        cout << "te salvaste" << endl;
    }

    return 0;
}

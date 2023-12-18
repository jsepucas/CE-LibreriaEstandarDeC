#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;


int main (){
    char cad1[] = "El coche de allí";
    cout << "La cadena 1 es: " << cad1 << endl;

    char cad2[] = "Es verde ";
    cout << "La cadena 2 es: " << cad2 << endl;

    int result = strcmp (cad1, cad2);

    if (result == 0) {
        cout << "Las cadenas son iguales" << endl;
    } else if (result < 0) {
        cout << "La cadena 1 es menor que la cadena 2" << endl;
    } else {
        cout << "La cadena 1 es mayor que la cadena 2" << endl;
    }


}

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    char str[] = "Quiero unas AirMax 1";
    cout << "La cadena es: " << str << endl;

    int longitud = strlen(str);

    cout << "La longitud de la cadena es: " << longitud << endl;

    return 0;
}
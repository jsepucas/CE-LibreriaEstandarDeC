#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    FILE *archivo = fopen("archivo.txt", "r");

    if (archivo == NULL) {
        cout << "Ha ocurrido un error al abrir el archivo" << endl;
    }

    fclose(archivo);

    return 0;
}
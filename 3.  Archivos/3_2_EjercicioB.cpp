#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    FILE *archivo = fopen("archivo.txt", "w");

    if (archivo == NULL) {
        cout << "Ha ocurrido un error al abrir el archivo" << endl;
        return 1;
    }

    fprintf(archivo, "Necesitamos calefaccion en la planta 3 : ) \n");

    fclose(archivo);

    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    char buffer[50];


    fgets(buffer, 50, archivo);

    printf("Leido del archivo: %s\n", buffer);

    fclose(archivo);

    return 0;

}
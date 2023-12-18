#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));

    int num_rand = rand();
    cout << "El numero aleatorio es: " << num_rand << endl;

    return 0;

}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"

using namespace std;

int main() {
    srand(time(NULL)); // Inicializar semilla aleatoria

    // Crear 10 objetos de tipo Persona con edades distintas entre 18 y 27
    // Edades disponibles: 18, 19, 20, 21, 22, 23, 24, 25, 26, 27
    int edades[10] = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};

    // Desordenar las edades para que no salgan siempre en orden secuencial
    for (int i = 0; i < 10; i++) {
        int r = i + rand() % (10 - i);
        int temp = edades[i];
        edades[i] = edades[r];
        edades[r] = temp;
    }

    Persona* personas[10];

    cout << "--- CREACION DE LAS 10 PERSONAS (Edades unicas entre 18 y 27) ---" << endl;
    for (int i = 0; i < 10; i++) {
        personas[i] = new Persona(edades[i]);
        personas[i]->mostrar();
    }

    // Liberar memoria
    for (int i = 0; i < 10; i++) {
        delete personas[i];
    }

    return 0;
}
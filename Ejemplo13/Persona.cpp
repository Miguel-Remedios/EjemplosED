#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Persona::Persona(int edad) {
    this->edad = edad;
    // Género aleatorio: 0 o 1
    this->genero = rand() % 2; 
    generarDNI();
}

Persona::~Persona() {
    // Destructor
}

int Persona::getEdad() const {
    return edad;
}

bool Persona::esMujer() const {
    return genero;
}

void Persona::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Persona::mostrar() const {
    std::cout << "Persona -> "
              << "Genero: " << (genero ? "Mujer" : "Hombre") << ", "
              << "Edad: " << edad << ", "
              << "DNI: " << dni << std::endl;
}

void Persona::generarDNI() {
    // Genera un DNI ficticio de forma automática
    int numero = 10000000 + rand() % 90000000;
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    char letra = letras[numero % 23];
    
    snprintf(dni, sizeof(dni), "%d%c", numero, letra);
}
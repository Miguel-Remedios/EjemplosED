#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>

class Persona {
private:
    bool genero;      // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

    void generarDNI(); // Método auxiliar para generar el DNI de forma automática

public:
    Persona(int edad);
    ~Persona();

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int nuevaEdad);
    void mostrar() const;
};

#endif
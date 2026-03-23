#include <stdio.h>
#include <string.h>

struct Persona{
    char nombre [50];
    int edad;
};

int main() {
    struct Persona a1;

    strcpy(a1.nombre, "Luciano Barlettini");
    a1.edad = 25;

    printf("Nombre: %s\n", a1.nombre);
    printf("Edad: %d\n", a1.edad);

    return 0;
}

/*
🟢 Nivel 0 — Crear y mostrar

Definir un struct Persona con:

nombre (string)
edad (int)

Crear una variable, cargarle datos y mostrarla.
Que imprima los datos.
*/
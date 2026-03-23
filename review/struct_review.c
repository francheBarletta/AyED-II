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
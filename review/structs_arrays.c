#include <stdio.h>
#define N 3

struct Persona
{
    char nombre[50];
    int edad;
};

void personas(struct Persona arr[])
{
    int i = 0;
    while (i < N)
    {
        printf("Ingrese el nombre: ");
        scanf("%s", &arr[i].nombre);

        printf("Ingrese la edad:");
        scanf(" %d", &arr[i].edad);

        i++;
    }
}

int main(void)
{
    struct Persona arr[N];

    personas(arr);

    int i = 0;
    while (i < N)
    {
        printf("Nombre: %s\n", arr[i].nombre);
        printf("Edad: %d\n", arr[i].edad);
        i++;
    }

    return 0;
}

/*🟠 Nivel 1 — Arreglo de structs
Objetivo:

Crear un arreglo de 3 personas.

Cargar los datos (hardcodeado está bien)
Mostrar todas usando un for*/
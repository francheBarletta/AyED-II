#include <stdio.h>
#define N 5

struct Persona
{
    int edad;
    char nombre[50];
};

void cargar_persona(struct Persona arr[])
{
    int i = 0;
    int max = 0;

    while (i < N)
    {
        printf("Ingrese el nombre: ");
        scanf("%s", &arr[i].nombre);

        printf("Ingrese la edad: ");
        scanf(" %d", &arr[i].edad);

        i++;
    }
}

int buscarMayorEdad(struct Persona arr[], int n)
{
    int pos = 0;
    int i = 1;

    while (i < n)
    {
        if (arr[i].edad > arr[pos].edad)
        {
            pos = i;
        }
        i++;
    }
    return pos;
}

int main()
{
    struct Persona arr[N];
    cargar_persona(arr);
    int pos = buscarMayorEdad(arr, N);

    printf("La persona con la mayor edad es: %s (%d)\n", arr[pos].nombre, arr[pos].edad);
}

/*🔴 Ejercicio: Buscar persona con mayor edad
📌 Enunciado

Definir un struct Persona que contenga:

nombre
edad

Luego:

Crear un arreglo de personas (por ejemplo, 5 elementos)
Cargar los datos de cada persona
Implementar una función que:
reciba el arreglo de personas
reciba la cantidad de elementos
devuelva el índice de la persona con mayor edad
Desde el main, usar esa función y:
mostrar el nombre y la edad de la persona encontrada*/
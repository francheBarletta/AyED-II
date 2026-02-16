#include <stdio.h>
#define N 5

int main()
{
    int x;
    int i = 0;
    int arr[N];

    while (i < 5)
    {
        printf("Ingrese 5 numeros: ");
        scanf("%d", &x);
        arr[i] = x;
        i++;
    }
    i = 0;

    while (i < N)
    {
        printf("El arreglo ingresado es: %d \n", arr[i]);
        i++;
    }
    return 0;
}

/*🔵 Ejercicio 3.1 — Cargar e imprimir arreglo

Definí un arreglo de tamaño 5

Pedí los valores

Imprimilos*/
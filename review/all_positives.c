#include <stdio.h>
#define N 5

int positivo(int arr[], int n)
{
    int i = 0;
    int contador = 0;

    while (i < n)
    {
        if (arr[i] < 0)
        {
            contador = 1;
        }
        i++;
    }
    if (contador == 1)
    {
        printf("Hay uno o mas negativos");
    }
    else
    {
        printf("Todos son positivos");
    }
    return 0;
}

int main(void)
{
    int arr[N];
    int i = 0;

    while (i < N)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &arr[i]);
        i++;
    }

    printf("%d\n", positivo(arr, N));

    return 0;
}

/*🔴 Ejercicio 3.1 — Todos positivos

Función:

bool todos_positivos(int n, int a[]);

Y desde main:

Pedís arreglo

Imprimís:

"Todos positivos"

"Alguno no es positivo"*/
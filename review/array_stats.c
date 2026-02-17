#include <stdio.h>
#include <limits.h>

#define N 5

int sumatoria(int arr[], int n)
{
    int i = 0;
    int suma = 0;
    while (i < n)
    {
        suma = suma + arr[i];
        i++;
    }
    return suma;
}

float promedio(int arr[], int n)
{
    int i = 0;
    int suma = 0;
    while (i < n)
    {
        suma = suma + arr[i];
        i++;
    }
    return (float)suma / n;
}

int maximo(int arr[], int n)
{
    int i = 0;
    int max = arr[0];

    while(i < n){
        if(arr[i] > max){
            max = arr[i];
        }
        i++;
    }
    return max;
}

int main(void) {
    int arr[N];
    int i = 0;

    while (i < N) {
        printf("Ingrese un numero: ");
        scanf("%d", &arr[i]);
        i++;
    }

    printf("Suma: %d\n", sumatoria(arr, N));
    printf("Promedio: %.2f\n", promedio(arr, N));
    printf("Maximo: %d\n", maximo(arr, N));

    return 0;
}

/*🔵 Ejercicio 3.2 — Suma y máximo

Con el arreglo anterior:

Calcular suma

Calcular máximo

Calcular promedio*/
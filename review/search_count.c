#include <stdio.h>
#define N 5

int pares(int arr[], int n)
{
    int i = 0;
    int countpar = 0;

    while (i < n)
    {
        if (arr[i] % 2 == 0)
        {
            countpar = countpar + 1;
        }
        i++;
    }
    return countpar;
}

float promedio(int arr[], int n)
{
    int i = 0;
    int suma = 0;
    int mayor_prom = 0;

    while (i < n)
    {
        suma = suma + arr[i];
        i++;
    }
    return (float)suma / n;
}

int mayor_que_promedio(int arr[], int n)
{
    int i = 0;
    int contador = 0;
    float prom = promedio(arr, n);

    while (i < n)
    {
        if (arr[i] > prom)
        {
            contador++;
        }
        i++;
    }

    return contador;
}

int is_here(int arr[], int n)
{
    int encontrado = 0;
    int i = 0;
    int x;
    printf("Ingrese un numero a encontrar: ");
    scanf("%d", &x);
    while (i < n)
    {
        if (x == arr[i])
        {
            encontrado = 1;
        }
        i++;
    }
    if (encontrado == 1)
    {
        printf("El Numero esta en el Arreglo");
    }
    else
    {
        printf("El Numero NO esta en el Arreglo");
    }
    return encontrado;
}

int main()
{
    int arr[N];
    int i = 0;

    while (i < N)
    {
        printf("Ingrese los valores del arreglo: ");
        scanf("%d", &arr[i]);
        i++;
    }

    printf("La cantidad de pares es: %d\n", pares(arr, N));
    printf("La cantidad de numeros mayores al promedio es: %d\n", mayor_que_promedio(arr, N));
    printf("%d\n", is_here(arr, N));

    return 0;
}

/*🔵 Ejercicio 3.3 — Búsqueda y Conteo
📌 Enunciado

Dado un arreglo de tamaño N ya cargado:

Crear una función que cuente cuántos números son pares.

Crear una función que cuente cuántos números son mayores que el promedio.

Crear una función que determine si un número ingresado por el usuario está en el arreglo (búsqueda lineal).

Desde main, mostrar los resultados.*/
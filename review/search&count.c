#include <stdio.h>

int pares(int arr[],int n){
    int i = 0;
    int countpar = 0;

    while(i < n){
        if(arr[i] % 2 == 0){
            countpar = countpar + 1;
        }
        i++;
    }
    return countpar;
}

float promedio(int arr[], int n){
    int i = 0;
    int suma = 0;
    int count_mayor_promedio = 0;

    while(i < n){
        suma = suma + i;
        i++;
    }
    float prom = (float)suma / n;
    return prom;
}




/*🔵 Ejercicio 3.3 — Búsqueda y Conteo
📌 Enunciado

Dado un arreglo de tamaño N ya cargado:

Crear una función que cuente cuántos números son pares.

Crear una función que cuente cuántos números son mayores que el promedio.

Crear una función que determine si un número ingresado por el usuario está en el arreglo (búsqueda lineal).

Desde main, mostrar los resultados.*/
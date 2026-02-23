#include <stdio.h>
#define N 5

void order(int arr[], int n)
{
    int i = 0;

    while (i < n - 1)
    {
        int id = i;
        int j = i + 1;

        while (j < n)
        {
            if (arr[j] > arr[id])
            {
                id = j;
            }
            j++;
        }
        int temp = arr[i];
        arr[i] = arr[id];
        arr[id] = temp;

        i++;
    }
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
    order(arr, N);
    printf("El arreglo ordenado es: \n");

    i = 0;
    while (i < N)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}

/*🔴Ejercicio 4.2 — Ordenar arreglo de menor a mayor

Con el arreglo ya cargado:

Ordenarlo

Imprimirlo ordenado

(Opcional) Mostrar antes y después*/
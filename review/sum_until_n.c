#include <stdio.h>
#include <assert.h>

int main()
{

    int n;
    int i = 1;
    int suma = 0;
    printf("Ingrese un numero natural para sumar hasta: ");
    scanf("%d", &n);
    assert(n > 0);

    while (i < n)
    {
        suma = suma + i;
        i = i + 1;
    }

    printf("El resultado de la suma es: %d \n", suma);

    return 0;
}

/*🟠 Ejercicio 1.1 — Suma hasta N

Pedí un entero N ≥ 0
Mostrá la suma de los primeros N naturales usando un for.*/
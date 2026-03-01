#include <stdio.h>

int main()
{
    int x;
    int pos = 0;
    int neg = 0;
    int ceros = 0;
    int i = 0;

    while (i < 10)
    {
        printf("Ingrese un numero Real: ");
        scanf("%d", &x);
        if (x > 0)
        {
            pos = pos + 1;
        }
        else if (x < 0)
        {
            neg = neg + 1;
        }
        else
        {
            ceros = ceros + 1;
        }
        i++;
    }
    printf("La cantidad de positivos es la siguiente: %d \n", pos);
    printf("La cantidad de negativos es la siguiente: %d \n", neg);
    printf("La cantidad de ceros es la siguiente: %d \n", ceros);

    return 0;
}

/*🟠 Ejercicio 1.2 — Contador con condición

Pedí 10 números al usuario.

Mostrá:

Cuántos son positivos

Cuántos son negativos

Cuántos son cero*/
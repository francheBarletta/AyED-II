#include <stdio.h>

int main(void)
{
    int x;
    printf("Ingrese un numero: ");
    scanf("%d", &x);

    x = x * 2;

    printf("El numero doble es: %d \n", x);

    return 0;
}

#include <stdio.h>
#include <assert.h>

int main(){

    int n;
    int i = 1;
    int suma = 0;
    printf("Ingrese un numero natural para sumar hasta: ");
    scanf("%d", &n);
    assert(n > 0);
    
    while(i < n){
        suma = suma + i;
        i = i + 1;
    }

    printf("El resultado de la suma es: %d \n", suma);

    return 0;
}
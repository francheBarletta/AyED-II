#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

/*
static void partition(int a[], unsigned int izq, unsigned int der, unsigned int *ppiv)
{
    unsigned int i = izq + 1;
    unsigned int j = der;
    *ppiv = izq;

    while (i <= j)
    {
        if (a[i] <= a[izq])
        {
            i++;
        }
        else if (a[j] >= a[izq])
        {
            j--;
        }
        else if (a[i] > a[izq] && a[j] < a[izq])
        {
            swap(a, i, j);
        }
        swap(a, izq, j);
        *ppiv = j;
    }
}
*/
static void quick_sort_rec(int a[], unsigned int izq, unsigned int der)
{
    unsigned int ppiv;
    if (der > izq)
    {
        ppiv = partition(a, izq, der);
        quick_sort_rec(a, izq, ppiv - 1);
        quick_sort_rec(a, ppiv + 1, der);
    }
}

void quick_sort(int a[], unsigned int length)
{
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
}

/*
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c array_helpers.c sort.c main.c
gcc -Wall -Werror -Wextra -pedantic -std=c99 -no-pie array_helpers.o sort.o sort_helpers.o main.o -o sorter
./sorter input/example-unsorted.in

7
1 2 3 3 5 7 9
*/
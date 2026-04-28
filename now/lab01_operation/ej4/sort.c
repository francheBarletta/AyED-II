#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"

static unsigned int min_pos_from(int a[], unsigned int i, unsigned int length)
{
    unsigned int min_pos = i;
    for (unsigned int j = i + 1; j < length; ++j)
    {
        if (!goes_before(a[min_pos], a[j]))
        {
            min_pos = j;
        }
    }
    return (min_pos);
}

void selection_sort(int a[], unsigned int length)
{
    for (unsigned int i = 0; i < length; ++i)
    {
        unsigned int min_pos = min_pos_from(a, i, length);
        swap(a, i, min_pos);
    }
}

static void insert(int a[], unsigned int i)
{
    unsigned int j;
    j = i;
    while (j > 0 && goes_before(a[j], a[j - 1]))
    {
        swap(a, j - 1, j);
        j--;
    }
}

void insertion_sort(int a[], unsigned int length)
{
    for (unsigned int i = 1; i < length; ++i)
    {
        insert(a, i);
    }
}

static unsigned int partition(int a[], unsigned int izq, unsigned int der)
{
    unsigned int i = izq + 1;
    unsigned int j = der;
    unsigned int ppiv = izq;

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
    }
    swap(a, ppiv, j);
    ppiv = j;

    return j;
}

static void quick_sort_rec(int a[], unsigned int izq, unsigned int der)
{
    unsigned int ppiv;
    if (der > izq)
    {
        ppiv = partition(a, izq, der);
        if (ppiv > 0)
        {
            quick_sort_rec(a, izq, ppiv - 1);
        }
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
*/
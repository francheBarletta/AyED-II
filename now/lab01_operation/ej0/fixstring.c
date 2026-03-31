#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s)
{
    unsigned int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

bool fstring_eq(fixstring s1, fixstring s2)
{

    unsigned int i = 0;
    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
        {
            return true;
        }
        i++;
    }
    return false;
}

bool fstring_less_eq(fixstring s1, fixstring s2)
{

    unsigned int i = 0;
    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
        {
            return true;
        }
        i++;
    }
    return false;
}
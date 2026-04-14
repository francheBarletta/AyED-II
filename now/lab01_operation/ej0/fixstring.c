#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s) {
        unsigned int i = 0;
        while (s[i]) i++;
        // garantizado que s[i] == 0
        return i;
}

bool fstring_eq(fixstring s1, fixstring s2) {
        unsigned int i = 0;
        while (s1[i] && s2[i] && s1[i] == s2[i]) i++;
        // garantizado que s1[i] == 0 v s2[i] == 0 v s1[i] != s2[i]
        // s1 === s2 <=> s1[i] == s2[i] < queremos demostrar esta equivalencia
        return s1[i] == s2[i];
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
        unsigned int i = 0;
        while (s1[i] && s2[i] && s1[i] == s2[i]) i++;
        // i es la primer posición donde la proposición
        // s1[i] ^ s2[i] ^ s1[i] == s2[i] es falsa
        // s1[i] == 0 v s2[i] == 0 v s1[i] != s2[i]
        // para todo i anterior a este, valió s1[i] == s2[i] (donde no había terminado ningún string)
        // "s1 anterior a s2" <=> lo de arriba ^ (s1[i] <= s2[i] o s1 == 0)
        return s1[i] <= s2[i];
}

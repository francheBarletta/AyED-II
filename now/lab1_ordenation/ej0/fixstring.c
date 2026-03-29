#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s) {
    unsigned int contar = 0;
    while(s[contar] != '\0'){ 
        contar++;
    }
    return contar;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    int i = 0;
    while(s1[i] == s2[i]){
        if (s1[i] == '\0'){
            return true;
        }
        i++;
    }
    return false;
}


bool fstring_less_eq(fixstring s1, fixstring s2) {
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] < s2[i]){
            return true;
        }
        if(s1[i] > s2[i]){
            return false;
        }
        i++;
    }
    return false;
}
/*
terminar fstring_less_eq
*/


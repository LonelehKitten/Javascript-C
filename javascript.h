#ifndef JAVASCRIPT_H
#define JAVASCRIPT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef string ( char * );

typedef struct Object {

    char * char_attr;
    int * int_attr;
    float * float_attr;
    double * double_attr;
    string * string_attr;
    void * attr;
    
    void * (* method)(int, ...);
    void (* on)(char *, void (*)(int, ...), int, ...);
    
    struct Object * super;

} Object;

#define function(T, S) ({ T __fn__ (int arg_length, ...) S; __fn__;})
#define param_init va_list vl; if(arg_length) va_start(vl, arg_length);
#define event(S) ({ void __fn__ (char * evt, void (*callback)(int, ...), int al, ...) S; __fn__; })
#define $(S) int main() { ready(&obj); S ; return 0; }

void ready(Object * obj);

#endif /* JAVASCRIPT_H */

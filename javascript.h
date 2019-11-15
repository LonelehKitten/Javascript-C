#ifndef JAVASCRIPT_H
#define JAVASCRIPT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#define string char *

typedef struct EventHandler {
    struct EventHandler * (* ready)();
} EventHandler;



typedef struct Object {

    string * id;
    void * literal_vars;
    string * strings;

    void * (* get)();
    void (* set)(string, void *, ...);
    
    void * (* method)(int, ...);
    void (* on)(char *, void (*)(int, ...), int, ...);
    
    struct Object * super;

} Object;

#define function(T, S) ({ T __fn__ (int arg_length, ...) S; __fn__;})
#define param_init va_list vl; if(arg_length) va_start(vl, arg_length);
#define event(S) ({ void __fn__ (char * evt, void (*callback)(int, ...), int al, ...) S; __fn__; })
#define array(T, V) ({ T __arr__ [] = V ; __arr__;})
#define $(S) int main() { ready(&obj); S ; return 0; }

void __javascript_c_init__ ();

void ready(Object * obj);

void new ();
void var (void * );

#endif /* JAVASCRIPT_H */

#ifndef KEY_H
#define KEY_H

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
 
char getKey();

int hasInput();

#endif /* KEY_H */
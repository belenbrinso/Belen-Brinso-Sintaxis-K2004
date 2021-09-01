#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum tokens {
    FDT,
    SEP,
    CAD
};

int get_token(char* buffer);
int obtener_buffer(char buffer[]);

#endif
#include "scanner.h"

int esComa(char caracter){
    return caracter == ',';
}
int esEOF(char caracter){
    return caracter == EOF;
}

int get_token(char* buffer){
    if (esEOF(buffer[0]))
        return FDT;
    else if (esComa(buffer[0]))
        return SEP;
    else
        return CAD;
}

int obtener_buffer(char buffer[]){
    char caracter;
    int offset = 0;

    caracter = getchar();
    while(isspace(caracter)){
        caracter = getchar();
    }

    buffer[offset] = caracter;
    offset++;

    if(esComa(caracter) || esEOF(caracter)){
        return 1;
    }

    caracter = getchar();
    while(!isspace(caracter) && !esComa(caracter) && !esEOF(caracter)){
        buffer[offset] = caracter;
        offset++;
        caracter = getchar();
    }
    ungetc(caracter, stdin);

    return 1;
}
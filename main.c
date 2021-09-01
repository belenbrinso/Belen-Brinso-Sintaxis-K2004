#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "scanner.h"

int main () {
    int nro_token;
    char* token = "";
    char* nombre[] = {"Fin de texto", "Separador", "Cadena"};

    while(strcmp(token, "Fin de texto") != 0){

        char buffer[128] = {0};
        obtener_buffer(buffer);
        nro_token = get_token(buffer);
        token = nombre[nro_token];
        printf("%s: %s\n", token, buffer);
    }

    return EXIT_SUCCESS;
}
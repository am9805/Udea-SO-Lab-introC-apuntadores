#include <stdio.h>
#include <string.h>

char *obtenerSubCadena(char *array, int index);

int main() {
    char *cadena = "Hola que tal";
    char *subcadena;
    int indice = 5;
    printf("Cadena original: %s\n", cadena);
    subcadena = obtenerSubCadena(cadena, indice);
    printf("SubCadena desde índice %d: %s\n", indice, subcadena);
    return 0;
}

char *obtenerSubCadena(char *array, int index) {
    if(index >= strlen(array)){
        return NULL;
    } else {
        array += index;
        return array;
    }
}
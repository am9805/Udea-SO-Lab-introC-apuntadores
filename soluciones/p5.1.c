#include <stdio.h>

int contarCaracter(char *array, char ch);

int main() {
    char cadena[1000] = {0};
    char caracter;
    int numApariciones;
    printf("Escriba una cadena de caracteres: ");
    scanf("%s", &cadena);
    printf("Escriba el caracter a buscar: ");
    scanf(" %c", &caracter);
    numApariciones = contarCaracter(cadena, caracter);
    if(numApariciones != -1) {
        printf("El caracter %c ha aparecido %d veces en la cadena ingresada.", caracter, numApariciones);
    } else {
        printf("El caracter %c no ha aparecido en la cadena ingresada | retorno función: %d", caracter, numApariciones);
    }
    return 0;
}

int contarCaracter(char *array, char ch) {
    int contador = -1, existe = 0;
    for (int i = 0; i < 1000; i++) {
        if(ch == array[i]) {
            if(existe == 0){
                existe = 1;
                contador++;
            }
            contador++;
        }
    }
    return contador;
}
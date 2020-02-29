#include <stdio.h>

int contarCaracter(char *array, char ch);
int obtenerIndice(char *array, char ch);
int main() {
    char cadena[1000] = {0};
    char caracter;
    int numApariciones;
    int indice;
    printf("Escriba una cadena de caracteres: \n");
    scanf("%s", &cadena);
    printf("Escriba el caracter a buscar: \n");
    scanf(" %c", &caracter);
    numApariciones = contarCaracter(cadena, caracter);
    if(numApariciones != -1) {
        printf("El caracter %c ha aparecido %d veces en la cadena ingresada.\n", caracter, numApariciones);
        indice = obtenerIndice(cadena, caracter);
        printf("El indice se su primera aparicion es: %d\n", indice);
    } else {
        printf("El caracter %c no ha aparecido en la cadena ingresada | retorno función: %d\n", caracter, numApariciones);
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

int obtenerIndice(char *array, char ch) {
  int indice = 0;
    for (int i = 0; i < 1000; i++) {
        if(ch == array[i]) {
          indice = i;
          break;
        }
    }
    return indice;
}
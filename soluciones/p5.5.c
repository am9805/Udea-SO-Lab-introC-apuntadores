#include <stdio.h>
#include <string.h>

/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/

/* Funciones de test */
void testVolverMayuscula(void);
void testEsLetra(void);
void testStringToMayuscula(void);

/* Funciones del programa */
int esLetra(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);

/*********************************************************/
/*                     Funcion main                      */
/*********************************************************/


int main(void) {
  testVolverMayuscula();
  testEsLetra();
  testStringToMayuscula();
  return 0;
}

/* Funciones del programa */

/**  
 *   @brief  Determina si un caracter alfabetico
 *  
 *   @param  ch es el caracter a verificar
 *   @return 1 si el caracter es una letra del alfabeto y 0 si es otro simbolo.
 */
int esLetra(char ch) {
  return ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) ? 1 : 0;
}

/**  
 *   @brief  Convierte un caracter en mayuscula
 *  
 *   @param  ch es el caracter ingresado
 *   @return void
 */
void volverMayuscula(char *ch) {
  *ch -= (*ch >= 97 && *ch <= 122) ? 32 : 0;
}


/**  
 *   @brief  Convierte en mayusculas la cadena de caracteres ingresada.
 *  
 *   @param  s es una cadena de caracteres ingresada y la cual despues del proceso en la función tendra los caracteres en mayuscula.
 *   @return void
 */

void stringToMayuscula(char s[]) {
  for (int i = 0; i < strlen(s); i++) {
      if (esLetra(s[i])) {
        volverMayuscula(&s[i]);
      }
  }
}

/* Funciones de test */

/**  
 *   @brief  Funcion para testear volverMayuscula
 *  
 *   @param  void
 *   @return void
 */
void testVolverMayuscula(void) {
  char *p_char;
  char l1 = 'a', l2 = 'z';
  p_char = &l2;
  printf("Minusculas -> %c, %c\n", l1, l2);
  volverMayuscula(&l1);
  volverMayuscula(p_char);
  printf("Mayusculas -> %c, %c\n", l1, *p_char);
}

/**  
 *   @brief  Funcion para testear esLetra
 *  
 *   @param  void
 *   @return void
 */
void testEsLetra(void) {
  char c1 = '!', c2 = 's';
  printf("%c -> %d\n", c1, esLetra(c1));
  printf("%c -> %d\n", c2, esLetra(c2));
}

void testStringToMayuscula(void) {
  char s1[] = "hola que mas!!!\n";
  char s2[] = "1234 e_-+!!hay";
  printf("Cadenas en minuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
  stringToMayuscula(s1);
  stringToMayuscula(s2);
  printf("\nCadenas en mayuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
}

/* Funciones de test */
/* TEST PROPIOS PARA PROBAR QUE LA FASE 1 FUNCIONE
void testVolverMayuscula() {
    char letraMinuscula = 'a';
    char letraMayuscula = 'A';
    volverMayuscula(&letraMinuscula);
    if(letraMinuscula == letraMayuscula){
        printf("Test de volver mayúscula completado satisfactoriamente :D\n");
    } else {
        printf("Test de volver mayúscula completado con errores :c");
    }
}

void testEsLetra(void) {
    char letra = 'b';
    if(esLetra(letra)){
        printf("Test de verificación de letra completado satisfactoriamente :D\n");
    } else {
        printf("Test de verificación de letra completado con errores :c");
    }
}

void testStringToMayuscula(void) {
    char palabraMinuscula[22] = "esternocleidomastoideo";
    char palabraMayuscula[22] = "ESTERNOCLEIDOMASTOIDEO";
    stringToMayuscula(palabraMinuscula);
    if(!memcmp(palabraMinuscula, palabraMayuscula, strlen(palabraMinuscula))){
        printf("Test de volver mayúscula una palabra completado satisfactoriamente :D\n");
    } else {
        printf("Test de volver mayúscula una palabra completado con errores :c");
    }
}*/
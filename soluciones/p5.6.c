#include <stdio.h>
#include <stdlib.h>

int mediana(int *valores, int tamano);
int comp(const void *elem1, const void *elem2);
void testMediana();

int main()
{
  testMediana();
  return 0;
}

int mediana(int *valores, int tamano)
{
  int posicion = ((tamano + 1) / 2) - 1;
  printf("Pos: %d\n", posicion);
  return valores[posicion];
}

int comp(const void *elem1, const void *elem2)
{
  int f = *((int *)elem1);
  int s = *((int *)elem2);
  if (f > s)
    return 1;
  if (f < s)
    return -1;
  return 0;
}
void testMediana()
{
  int elementos[] = {4, 5, 2, 3, 1, 0, 9, 8, 6};
  int medianaV, tamano;
  qsort(elementos, sizeof(elementos) / sizeof(*elementos), sizeof(*elementos), comp);
  tamano = sizeof(elementos) / sizeof(*elementos);
  medianaV = mediana(elementos, tamano);
  printf("Mediana esperada: 4, mediana obtenida: %d\n", medianaV);
  if (medianaV == 4)
  {
    printf("Exito!");
  }
  else
  {
    printf("Nanai qks");
  }
}

#include <stdio.h>

float mediaPorEstudiante(float *notas);
void mediaPorMateria(float *notasAlejo, float *notasAna, float *notasPablo);
float mediaTotal(float *notasAlejo, float *notasAna, float *notasPablo);

int main()
{

    float alejandro[] = {5.0, 4.0, 3.0, 3.3, 4.5};
    float ana[] = {3.5, 5.0, 4.0, 3.5, 4.0};
    float pablo[] = {3.0, 4.5, 3.0, 4.0, 4.2};
    float mediaAlejandro, mediaAna, mediaPablo, mediaTotalCurso;
    mediaAlejandro = mediaPorEstudiante(alejandro);
    printf("La media de las notas de Alejandro: %f\n", mediaAlejandro);
    mediaAna = mediaPorEstudiante(ana);
    printf("La media de las notas de Ana: %f\n", mediaAna);
    mediaPablo = mediaPorEstudiante(pablo);
    printf("La media de las notas de Pablo: %f\n", mediaPablo);
    mediaPorMateria(alejandro, ana, pablo);
    mediaTotalCurso = mediaTotal(alejandro, ana, pablo);
    printf("La media total del curso es: %f\n", mediaTotalCurso);
    return 0;
}

float mediaPorEstudiante(float *notas)
{
    float media;
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma = suma + notas[i];
    }
    media = suma / 5;
    return media;
}

void mediaPorMateria(float *notasAlejo, float *notasAna, float *notasPablo)
{
    float media;
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma = notasAlejo[i] + notasAna[i] + notasPablo[i];
        media = suma / 3;
        switch (i)
        {
        case 1:
            printf("La media en notas de matemáticas es: %f\n", media);
            break;
        case 2:
            printf("La media en notas de espanol es: %f\n", media);
            break;
        case 3:
            printf("La media en notas de ingles es: %f\n", media);
            break;
        case 4:
            printf("La media en notas de sociales es: %f\n", media);
            break;
        case 5:
            printf("La media en notas de fisica es: %f\n", media);
            break;
        default:
            break;
        }
    }
}

float mediaTotal(float *notasAlejo, float *notasAna, float *notasPablo)
{
    float media;
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
       suma = suma +  notasAlejo[i] + notasAna[i] + notasPablo[i];
    }
    media = suma / 15;
    return media;
}
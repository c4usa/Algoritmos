#include <stdio.h>

int main(int argc, char *argv[])
{
    int minutos;
    float segundos, tiempo_total_segundos, velocidad_media;

    printf("Introduce los tiempos de los corredores en formato (minutos, segundos). Introduzca (0, 0.0) para terminar.\n");
    
    printf("Introduce el tiempo en formato válido (minutos >= 0, segundos >= 0.0) del corredor: ");
    scanf("%d,%f", &minutos, &segundos);

    while (minutos != 0 || segundos != 0.0)
    {
        if (minutos < 0 || segundos < 0.0)
        {
            printf("Valores invalidos. Inténtalo de nuevo.\n");
        }
        else
        {
            tiempo_total_segundos = (minutos * 60) + segundos;
            velocidad_media = 1500 / tiempo_total_segundos;

            printf("Tiempo: %d minutos, %.2f segundos\n", minutos, segundos);
            printf("Velocidad media: %.2f m/s\n\n", velocidad_media);
        }

        printf("Introduce el tiempo en formato válido (minutos >= 0, segundos >= 0.0) del corredor: ");
        scanf("%d,%f", &minutos, &segundos);
    }

    return 0;
}

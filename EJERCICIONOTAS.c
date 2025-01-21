// Diego Molina, Tomás González
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numNotas, numEstudiantes, nota, totalNota, aprobados, reprobados, cont, cont2, validador;
    cont = 1;
    cont2 = 1;
    aprobados = 0;
    reprobados = 0;
    validador = 0;
    float promedio;
    while (validador < 1)
    {
        printf("Ingrese el numero de estudiantes: ");
        scanf("%d", &numEstudiantes);
        printf("Ingrese la cantidad de notas por estudiante: ");
        scanf("%d", &numNotas);
        if (numEstudiantes <= 0 || numNotas <= 0)
        {
            printf("Ingrese datos validos\n");
        }
        else
        {
            printf("\n");
            while (cont <= numEstudiantes)
            {
                printf("Estudiante n#%d", cont);
                printf("\n");
                cont2 = 1;
                totalNota = 0;
                while (cont2 <= numNotas)
                {
                    printf("Ingrese la nota del estudiante: ");
                    scanf("%d", &nota);
                    if (nota < 0 || nota > 10)
                    {
                        printf("Ingrese una nota valida");
                    }
                    else
                    {
                        totalNota = totalNota + nota;
                        cont2++;
                    }
                }
                promedio = totalNota / numNotas;
                if (promedio >= 6)
                {
                    aprobados++;
                }
                else
                {
                    reprobados++;
                }
                cont++;
                printf("\n");
            }
            printf("\nEl numero de aprobados es: %d", aprobados);
            printf("\nEl numero de reprobados es: %d", reprobados);
            validador++;
        }
    }
    return 0;
}
#include <stdio.h>

int main (int argc, char *argv[]) 
{
       int numAlumnos, numNotas;
    int matricula, mejorMatricula = 0, peorMatricula = 0;
    float calificacion, suma, promedio, mejorPromedio = -1, peorPromedio = 101;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &numAlumnos);

    for (int i = 0; i < numAlumnos; i++) {
        printf("\nIngrese la matrícula del alumno %d: ", i + 1);
        scanf("%d", &matricula);

        printf("Ingrese la cantidad de notas para el alumno %d: ", matricula);
        scanf("%d", &numNotas);

        suma = 0;

        for (int j = 0; j < numNotas; j++) {
            printf("Ingrese la calificación %d: ", j + 1);
            scanf("%f", &calificacion);

            suma += calificacion;
        }

        if (numNotas > 0) {
            promedio = suma / numNotas;

            if (promedio > mejorPromedio) {
                mejorPromedio = promedio;
                mejorMatricula = matricula;
            }

            if (promedio < peorPromedio) {
                peorPromedio = promedio;
                peorMatricula = matricula;
            }
        }
    }

    if (mejorPromedio >= 0) {
        printf("\nMejor alumno:\n");
        printf("Matrícula: %d, Promedio: %.2f\n", mejorMatricula, mejorPromedio);

        printf("\nPeor alumno:\n");
        printf("Matrícula: %d, Promedio: %.2f\n", peorMatricula, peorPromedio);
    } else {
        printf("No se ingresaron datos de alumnos.\n");
    }
    return 0;
}

#include <stdio.h>

int main (int argc, char *argv[]) {
    int opcion;
    float salario = 0, salarioHora, horasTrabajadas, ventasBrutas, pagoPorPieza, piezasProducidas;

    do {
        printf("\nMenu de opciones:\n");
        printf("1. Calcular el salario de un gerente\n");
        printf("2. Calcular el salario de un trabajador horario\n");
        printf("3. Calcular el salario de un trabajador a comisión\n");
        printf("4. Calcular el salario de un trabajador a destajo\n");
        printf("5. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el salario semanal fijo del gerente: ");
                scanf("%f", &salario);
                printf("El salario semanal del gerente es: %.2f\n", salario);
                break;

            case 2:
                printf("Ingrese el salario por hora del trabajador: ");
                scanf("%f", &salarioHora);
                printf("Ingrese el número de horas trabajadas: ");
                scanf("%f", &horasTrabajadas);

                if (horasTrabajadas <= 40) {
                    salario = salarioHora * horasTrabajadas;
                } else {
                    salario = (salarioHora * 40) + ((horasTrabajadas - 40) * salarioHora * 1.5);
                }

                printf("El salario semanal del trabajador horario es: %.2f\n", salario);
                break;

            case 3:
                printf("Ingrese las ventas semanales brutas del trabajador: ");
                scanf("%f", &ventasBrutas);

                salario = 250 + (ventasBrutas * 0.057);
                printf("El salario semanal del trabajador a comisión es: %.2f\n", salario);
                break;

            case 4:
                printf("Ingrese el pago por pieza: ");
                scanf("%f", &pagoPorPieza);
                printf("Ingrese el número de piezas producidas: ");
                scanf("%f", &piezasProducidas);

                salario = pagoPorPieza * piezasProducidas;
                printf("El salario semanal del trabajador a destajo es: %.2f\n", salario);
                break;

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida. Por favor, intente de nuevo.\n");
        }

    } while (opcion != 5);

    return 0;
}

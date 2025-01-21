#include <stdio.h>

int main (int argc, char *argv[])
{
    int numero = 0, cont = 0, sumaNum = 0;
    float promNum = 0.0;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        sumaNum += numero;
        ++cont;
        if (cont > 1) {
            promNum = (float)sumaNum / (cont-1);
        }
        
    } while (numero != 0);

    printf("La suma de todos los numeros es de: %d\n", sumaNum);
    printf("El promedio de todos los numeros es de: %.2f\n", promNum);

    return 0;
}

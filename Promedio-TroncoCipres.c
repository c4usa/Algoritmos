#include <stdio.h>

int main (int argc, char *argv[])
 {
    int cont=0;
    float diametro, altura, promAltura, promDiametro, sumAltura, sumDiametro;
    char salida;
    do
    {
        printf("Ingrese el diametro del tronco en centimetros: ");
        scanf("%f",&diametro);
        printf("Ingrese la altura del tronco en centimetros: ");
        scanf("%f",&altura);
        sumAltura= sumAltura+altura;
        sumDiametro= sumDiametro+diametro;
        cont++;
        do
        {
        printf("Para continuar presione S, para salir presione N: ");
        scanf("%c",&salida);
        if (salida=='N')
        {
            break;
        }else if (salida=='S')
        {
            break;
        }
        } while (diametro>=0 && altura>=0);
    } while (salida=='S');
    if (cont>0)
    {
        promDiametro= sumDiametro/cont;
        promAltura= sumAltura/cont;
        printf("El diametro promedio del tronco de los cipreces es de: %.2f\n", promDiametro);
        printf("La altura promedio del tronco de los cipreces es de: %.2f\n",promAltura);
    }
    
    return 0;
}

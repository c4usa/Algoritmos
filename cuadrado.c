#include <stdio.h>

int main (int argc, char *argv[]) 
{
    int filas, columnas, numero;
    do
    {
        printf("Ingrese el tamaño del cuadrado: ");
        scanf("%d", &numero);
        for (filas= 0;filas<numero; filas++)
        {
            for (columnas= 0; columnas < numero; columnas++)
            {
                if (filas==0 || filas==numero-1||columnas==0||columnas==numero-1)
                {
                    printf("*");
                }else
                {
                    printf(" ");
                }printf(" ");
            }printf("\n");
        }
    } while (numero!=0 && numero>0);
    
    return 0;
}
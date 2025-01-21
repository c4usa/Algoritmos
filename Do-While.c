#include <stdio.h>

int main (int argc, char *argv[])
{
    int numero;
    int pares=0,impares=0;
    do
    {
        printf("Ingrese un numero, si desea salir ingrese un numero negativo: ");
        scanf("%d",&numero);
        if (numero!=0 && numero>=0)
        {
            if (numero%2==0)
            {
                ++pares;
            }
            else
            {
                impares++;
            }
        }
    } while (numero >= 0);
    printf("Cantidad de veces que hay un numero par: %dveces \n",pares);
    printf("Cantidad de veces que hay un numero impar: %dveces \n",impares);
    return 0;
}
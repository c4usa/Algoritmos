// Diego Molina, Tomás González
#include <stdio.h>

int main (int argc, char *argv[]) 
{
    int numero, divisiblepara=0, cont=2, division=0;

    do 
    {
        printf("Ingrese un numero positivo: ");
        scanf("%d",&numero);
        if (numero<0) 
        {
        printf("Ingrese solo números positivo.\n");
        }
    } while (numero<0);  
    while (cont<=numero/2) 
    { 
        division=numero % cont;
        if (division== 0) 
        {
            divisiblepara++; 
            break;  
        }
        cont++;
    }
    if (divisiblepara== 0 && numero>1)
    {  
        printf("Primo\n");
    } 
    else if (numero<=1) 
    {
        printf("No es primo\n");
    } 
    else 
    {
        printf("No es primo\n");
    }

    return 0;
}

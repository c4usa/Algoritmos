#include <stdio.h>

int main()
{
    int numero, numeroOriginal, numeroReverso = 0, residuo;

    printf("Ingrese un número: ");
    scanf("%d", &numero);
    numeroOriginal = numero;
    while (numero != 0)
    {
        residuo = numero % 10;
        numeroReverso = numeroReverso * 10 + residuo;
        numero= numero/10;
    }
    if (numeroOriginal == numeroReverso)
    {
        printf("El número %d es un palíndromo\n", numeroOriginal);
    }
    else
    {
        printf("El número %d no es un palíndromo\n", numeroOriginal);
    }
    return 0;
}

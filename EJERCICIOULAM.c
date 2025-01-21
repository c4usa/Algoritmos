// Diego Molina, Tomás González
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Secuencia de Ulam: %d", numero);

    while (numero != 1)
    {
        if (numero % 2 == 0)
        {
            numero = numero / 2;
        }
        else
        {
            numero = 3 * numero + 1;
        }
        printf(" -> %d", numero);
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main (int argc, char *argv[]) 
{
    int tamaño=0,opcion, valor=0, n=0, suma=0, producto;
    {
    printf("\nMenu de opciones:\n");
    printf("1. Calcular e imprimir la suma de una secuencia de enteros\n");
    printf("2. Calcular e imprimir la suma de los enteros pares del 2 al valor ingresado\n");
    printf("3. Calcular e imprimir el producto de los enteros impares del 1 al valor ingresado\n");
    printf("4. Salir\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);
    if (opcion==1)
    {
    printf("Ingrese el número de valores a sumar: ");
    scanf("%d", &n);
    printf("Ingrese los %d valores: \n", n);
    for (int i = 0; i <n; i++) {
        scanf("%d", &valor);
        suma += valor;
    }printf("%d",suma);
    }
    else if (opcion==2)
    {
    printf("Ingrese un valor entero: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    printf("La suma de los enteros pares del 2 al %d es: %d\n", n, suma);
    }
    else if (opcion==3)
    {
    long long producto = 1; 
    printf("Ingrese un valor entero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        producto *= i;
    }

    printf("El producto de los enteros impares del 1 al %d es: %lld\n", n, producto);
    } while (opcion!=4);
    
    return 0;
}
}

// Alterntaiva Solución 2

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int opcion, tiempo;
    float division, precio, pago, cambio;
    char usuario[20], password[20];
    int intentos = 0;
    int intentosMaximos = 3;
    int seguir = 1;
    // Usuario y contraseña definidos
    const char usuarioCorrecto[] = "ParqueaderoQS";
    const char contrasenaCorrecta[] = "pago123";
    while (seguir)
    {
        intentos = 0;
        // Validación Usuario-Contraseña
        while (intentos < intentosMaximos)
        {
            printf("Ingrese el usuario: ");
            scanf("%s", usuario);
            printf("Ingrese la contraseña: ");
            scanf("%s", password);
            if (strcmp(usuario, usuarioCorrecto) == 0 && strcmp(password, contrasenaCorrecta) == 0)
            {
                int volverAutenticar = 1;
                // Menú de opciones
                while (volverAutenticar)
                {
                    printf("\n------Menu------\n");
                    printf("1. Pagar tarifa de estacionamiento\n");
                    printf("2. Salir\n");
                    printf("Seleccione una opción: ");
                    scanf("%d", &opcion);
                    if (opcion == 1)
                    {
                        printf("Ingrese la cantidad de tiempo (minutos) que estuvo estacionado: ");
                        scanf("%d", &tiempo);
                        // Cálculos de las tarifas
                        division = tiempo / 15;
                        if (tiempo % 15 == 0)
                        {
                            precio = division * 0.25;
                        }
                        else
                        {
                            precio = (division * 0.25) + 0.25;
                        }
                        printf("El precio a pagar por el estacionamiento es de: %.2f dólares\n", precio);
                        printf("Ingrese el valor de su pago (billetes aceptados: 1, 5, 10, 20): ");
                        scanf("%f", &pago);
                        if (pago != 1 && pago != 5 && pago != 10 && pago != 20)
                        {
                            printf("Pago inválido. Use solo billetes de 1, 5, 10 o 20 dólares.\n");
                        }
                        else
                        {
                            cambio = pago - precio;
                            if (cambio < 0)
                            {
                                printf("El pago es insuficiente .Intente de nuevo.\n");
                            }
                            else
                            {
                                printf("El cambio es de: %.2f dólares\n", cambio);
                                printf("¡Gracias por visitar el Quicentro Sur! Vuelva pronto.\n");
                                volverAutenticar = 0;
                            }
                        }
                    }
                    else if (opcion == 2)
                    {
                        printf("¡Gracias por usar nuestro servicio!. ¡Que tenga un buen día!\n");
                        seguir = 0;
                        volverAutenticar = 0;
                    }
                    else
                    {
                        printf("Opción inválida. Intente otra vez.\n");
                    }
                }
                break;
            }
            else
            {
                printf("Usuario o contraseña incorrectos. Intente nuevamente.\n");
                intentos++;
            }
        }
        if (intentos == intentosMaximos)
        {
            printf("Número máximo de intentos alcanzado.\n");
            seguir = 0;
        }
    }
    return 0;
}
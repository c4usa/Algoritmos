#include <stdio.h>

int main() {
    int voto, totalVotos = 0;
    int votosCandidato[5] = {0};
    float porcentaje[5] = {0.0};

    printf("Ingrese los votos (finalice con 0):\n");

    do {
        scanf("%d", &voto);

        if (voto >= 1 && voto <= 5) {
            votosCandidato[voto - 1]++;
            totalVotos++;
        } else if (voto != 0) {
            printf("Voto no válido, intente nuevamente.\n");
        }

    } while (voto != 0);

    if (totalVotos == 0) {
        printf("No se registraron votos.\n");
        return 0;
    }

    for (int i = 0; i < 5; i++) {
        porcentaje[i] = (votosCandidato[i] / (float)totalVotos) * 100;
    }

    printf("\nResultados de la votación:\n");
    for (int i = 0; i < 5; i++) {
        printf("Candidato %d: %d votos (%.2f%%)\n", i + 1, votosCandidato[i], porcentaje[i]);
    }

    return 0;
}

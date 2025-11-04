#include <stdio.h>

int main() {
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do BISPO:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do CAVALO:\n");

    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo (%d)\n", i);
    }

    int j = 1;
    while (j <= casasEsquerda) {
        printf("Esquerda (%d)\n", j);
        j++;
    }

    printf("\nFim da simulação de movimentos.\n");

    return 0;
}

#include <stdio.h>

void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1);
}

void moverBispo(int casas, int atualVertical, int atualHorizontal) {
    if (atualVertical > casas || atualHorizontal > casas) return;
    for (int v = atualVertical; v <= atualVertical; v++) {
        for (int h = atualHorizontal; h <= atualHorizontal; h++) {
            printf("Cima, Direita (%d)\n", v);
        }
    }
    moverBispo(casas, atualVertical + 1, atualHorizontal + 1);
}

void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1);
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre, 1);

    printf("\n");

    printf("Movimento do BISPO:\n");
    moverBispo(casasBispo, 1, 1);

    printf("\n");

    printf("Movimento da RAINHA:\n");
    moverRainha(casasRainha, 1);

    printf("\n");

    printf("Movimento do CAVALO:\n");

    int movimentos = 0;
    for (int vertical = 1, horizontal = 1; vertical <= 2 && horizontal <= 1; vertical++) {
        printf("Cima (%d)\n", vertical);
        movimentos++;
        if (vertical == 2) {
            for (int h = 1; h <= 1; h++) {
                printf("Direita (%d)\n", h);
                movimentos++;
                if (movimentos >= 3) break;
            }
        }
    }

    printf("\nFim da simulação de movimentos.\n");

    return 0;
}

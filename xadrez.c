#include <stdio.h>

/* ============================
   FUNÇÕES RECURSIVAS (NÍVEL MESTRE)
   ============================ */

// Movimento recursivo do Bispo (diagonal)
void moverBispoRecursivo(int casas) {
    if (casas == 0)
        return;

    printf("Bispo moveu 1 casa na diagonal\n");
    moverBispoRecursivo(casas - 1);
}

int main() {

    const int BISPO_CASAS = 4;
    const int TORRE_CASAS = 5;
    const int RAINHA_CASAS = 3;

    int i, x, y;

    printf("Movimentação do Bispo:\n");
    for (i = 1; i <= BISPO_CASAS; i++) {
        printf("Bispo moveu %d casa(s) na diagonal\n", i);
    }

    printf("\nMovimentação da Torre:\n");
    for (i = 1; i <= TORRE_CASAS; i++) {
        printf("Torre moveu %d casa(s) para a direita\n", i);
    }

    printf("\nMovimentação da Rainha:\n");
    for (i = 1; i <= RAINHA_CASAS; i++) {
        printf("Rainha moveu %d casa(s) para a esquerda\n", i);
    }

    printf("\nMovimentação do Cavalo:\n");
    for (x = 1; x <= 2; x++) {
        for (y = 1; y <= 1; y++) {
            printf("Cavalo moveu %d horizontal e %d vertical\n", x, y);
        }
    }

    printf("\nMovimentação do Bispo (Recursivo):\n");
    moverBispoRecursivo(3);

    printf("\nMovimentação Avançada do Cavalo:\n");
    for (x = 1; x <= 3; x++) {
        for (y = 1; y <= 3; y++) {
            if (x == y)
                continue;
            if (x + y > 3)
                break;
            printf("Cavalo: %d horizontal, %d vertical\n", x, y);
        }
    }

    return 0;
}

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

    /* ============================
       NÍVEL NOVATO
       ============================ */

    const int BISPO_CASAS = 4;
    const int TORRE_CASAS = 5;
    const int RAINHA_CASAS = 3;

    int i, x, y;

    // Movimentação do Bispo (diagonal)
    printf("Movimentação do Bispo:\n");
    for (i = 1; i <= BISPO_CASAS; i++) {
        printf("Bispo moveu %d casa(s) na diagonal\n", i);
    }

    // Movimentação da Torre (direita)
    printf("\nMovimentação da Torre:\n");
    for (i = 1; i <= TORRE_CASAS; i++) {
        printf("Torre moveu %d casa(s) para a direita\n", i);
    }

    // Movimentação da Rainha (esquerda)
    printf("\nMovimentação da Rainha:\n");
    for (i = 1; i <= RAINHA_CASAS; i++) {
        printf("Rainha moveu %d casa(s) para a esquerda\n", i);
    }

    /* ============================
       NÍVEL AVENTUREIRO
       ============================ */

    // Movimentação do Cavalo (em L)
    printf("\nMovimentação do Cavalo:\n");

    for (x = 1; x <= 2; x++) {          // movimento horizontal
        for (y = 1; y <= 1; y++) {      // movimento vertical
            printf("Cavalo moveu %d casa(s) horizontal e %d vertical\n", x, y);
        }
    }

    /* ============================
       NÍVEL MESTRE
       ============================ */

    // Movimento recursivo do Bispo
    printf("\nMovimentação do Bispo (Recursivo):\n");
    moverBispoRecursivo(3);

    // Cavalo com múltiplas variáveis, break e continue
    printf("\nMovimentação Avançada do Cavalo:\n");

    for (x = 1; x <= 3; x++) {
        for (y = 1; y <= 3; y++) {

            // ignora movimentos inválidos
            if (x == y)
                continue;

            // encerra se ultrapassar o padrão do cavalo
            if (x + y > 3)
                break;

            printf("Cavalo: %d horizontal, %d vertical\n", x, y);
        }
    }

    return 0;
}

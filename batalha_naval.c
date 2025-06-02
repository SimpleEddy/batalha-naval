#include <stdio.h>

int main() {
    // Criar o tabuleiro 10x10 com tudo 0 (água)
    int tabuleiro[10][10] = {0};

    // Posicao do navio horizontal (linha 0, coluna 0)
    int linhaNavioH = 0;
    int colunaNavioH = 0;

    // Colocar o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavioH][colunaNavioH + i] = 3; // Marca as casas do navio
    }

    // Posicao do navio vertical (linha 4, coluna 5)
    int linhaNavioV = 4;
    int colunaNavioV = 5;

    // Verificar se o lugar para navio vertical está livre
    int sobreposicao = 0;
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaNavioV + i][colunaNavioV] != 0) {
            sobreposicao = 1; // Se não estiver livre, marca sobreposicao
            break;
        }
    }

    if (sobreposicao) {
        // Se tiver navios em cima, mostra mensagem de erro
        printf("Erro: Navios estao em cima um do outro. Mude o lugar do navio vertical.\n");
    } else {
        // Se não tiver problema, coloca navio vertical no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaNavioV + i][colunaNavioV] = 3;
        }

        // Mostrar o tabuleiro na tela
        printf("Tabuleiro com navios:\n");
        for (int linha = 0; linha < 10; linha++) {
            for (int coluna = 0; coluna < 10; coluna++) {
                printf("%d ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }
    }

    return 0;
}

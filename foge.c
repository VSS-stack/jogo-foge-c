#include <stdio.h>
#include <stdlib.h>
#include "foge.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

void fantasmas() {
    MAPA copia;

    copiamapa(&copia, &m);

    for(int i = 0; i < m.linhas; i++) {
        for(int j = 0; j < m.colunas; j++) {
            if(copia.matriz[i][j] == 'F') {
                if(!posicaovazia(&m, i, j+1) && !posicaovazia(&m, i, j+1)) {
                    movepersonagem(&m, i, j, i, j+1);
                }
            }
        }
    }

    liberamapa(&copia);
}

int acabou() {
    return 0;
}

int teclavalida(char direcao) {
    return direcao != ESQUERDA && direcao != CIMA && direcao != BAIXO && direcao != DIREITA;
}

void move(char direcao) {

    if(teclavalida(direcao)) {
        return;
    }

    int proximox = heroi.x;
    int proximoy = heroi.y;
    
    switch(direcao) {
        case ESQUERDA:
            proximoy--;
            break;
        case CIMA:
            proximox--;
            break;
        case BAIXO:
            proximox++;
            break;
        case DIREITA:
            proximoy++;
            break;
    }

    if(limitevalido(&m, proximox, proximoy)) {
        return;
    }

    if(posicaovazia(&m, proximox, proximoy)) {
        return;
    }

    movepersonagem(&m, heroi.x, heroi.y, proximox, proximoy);

    heroi.x = proximox;
    heroi.y = proximoy;
}

int main() {

    lemapa(&m);
    encontranomapa(&m, &heroi, HEROI);

    do {
        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
        fantasmas();
    } while(!acabou());

    /*Liberando memória alocada*/
    liberamapa(&m);
}
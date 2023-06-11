typedef struct mapa {
    char **matriz;
    int linhas;
    int colunas;
} MAPA;

typedef struct posicao {
    int x;
    int y;
} POSICAO;

void liberamapa(MAPA *m);
void lemapa(MAPA *m);
void alocamapa(MAPA *m);
void imprimemapa(MAPA *m);
void encontranomapa(MAPA *m, POSICAO *p, char c);
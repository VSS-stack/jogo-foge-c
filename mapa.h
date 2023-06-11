typedef struct mapa {
    char **matriz;
    int linhas;
    int colunas;
} MAPA;

void liberamapa(MAPA *m);
void lemapa(MAPA *m);
void alocamapa(MAPA *m);
void imprimemapa(MAPA *m);
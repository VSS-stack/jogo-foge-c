void liberamapa();
void lemapa();
void alocamapa();
void imprimemapa();
int acabou();
void move(char direcao);

typedef struct mapa {
    char **matriz;
    int linhas;
    int colunas;
} MAPA;
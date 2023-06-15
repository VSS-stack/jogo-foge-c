#define HEROI             '@'
#define VAZIO             '.'
#define PAREDE_VERTICAL   '|'
#define PAREDE_HORIZONTAL '-'

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
int limitevalido(MAPA *m, int x, int y);
int posicaovazia(MAPA *m, int x, int y);
void movepersonagem(MAPA *m, int xorigem, int yorigem, int xdestino, int ydestino);
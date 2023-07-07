#define CIMA     'w'
#define BAIXO    's'
#define ESQUERDA 'a'
#define DIREITA  'd'
#define BOMBA    'b'

int acabou();
void move(char direcao);
int teclavalida(char direcao);
void fantasmas();
void explodepilula();
void explodepilula2(int x, int y, int somax, int somay, int qtd);
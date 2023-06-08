#include <stdio.h>
#include <stdlib.h>

int main() {
    char mapa[5][11];

    FILE *f;
    f = fopen("mapa.txt", "r");

    for(int i = 0; i <= 4; i++) {
        fscanf(f, "%s", mapa[i]);
    }

    for(int i = 0; i <= 4; i++) {
        printf("%s\n", mapa[i]);
    }

    fclose(f);
}
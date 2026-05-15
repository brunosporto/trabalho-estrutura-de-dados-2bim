#include <stdio.h>

void torresDeHanoi(int discos, char origem, char destino, char auxiliar, int *movimentos) {
    if (discos == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        (*movimentos)++;
        return;
    }

    torresDeHanoi(discos - 1, origem, auxiliar, destino, movimentos);

    printf("Mover disco %d de %c para %c\n", discos, origem, destino);
    (*movimentos)++;

    torresDeHanoi(discos - 1, auxiliar, destino, origem, movimentos);
}

int main() {
    int discos;
    int movimentos = 0;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &discos);

    if (discos <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    printf("\nMovimentos das Torres de Hanoi:\n\n");

    torresDeHanoi(discos, 'A', 'C', 'B', &movimentos);

    printf("\nTotal de movimentos: %d\n", movimentos);

    return 0;
}
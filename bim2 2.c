#include <stdio.h>
#include <stdlib.h>

int fibonacciIngenuo(int n, int *chamadas) {
    (*chamadas)++;

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacciIngenuo(n - 1, chamadas) + fibonacciIngenuo(n - 2, chamadas);
}

int fibonacciMemoizado(int n, int *cache, int *chamadas) {
    (*chamadas)++;

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    if (cache[n] != -1) {
        return cache[n];
    }

    cache[n] = fibonacciMemoizado(n - 1, cache, chamadas) +
               fibonacciMemoizado(n - 2, cache, chamadas);

    return cache[n];
}

int main() {
    int n;
    int chamadasIngenuo = 0;
    int chamadasMemoizado = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    int *cache = malloc((n + 1) * sizeof(int));

    if (cache == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        cache[i] = -1;
    }

    int resultadoIngenuo = fibonacciIngenuo(n, &chamadasIngenuo);
    int resultadoMemoizado = fibonacciMemoizado(n, cache, &chamadasMemoizado);

    printf("\nResultado Fibonacci de %d: %d\n", n, resultadoIngenuo);

    printf("\n--- Comparacao ---\n");
    printf("Versao ingenua: %d chamadas recursivas\n", chamadasIngenuo);
    printf("Versao memoizada: %d chamadas recursivas\n", chamadasMemoizado);

    printf("\nResultado memoizado: %d\n", resultadoMemoizado);

    free(cache);

    return 0;
}
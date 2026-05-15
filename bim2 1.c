#include <stdio.h>

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

int main() {
    int n;
    int chamadas = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    int resultado = fibonacciIngenuo(n, &chamadas);

    printf("Fibonacci de %d = %d\n", n, resultado);
    printf("Total de chamadas recursivas: %d\n", chamadas);

    return 0;
}
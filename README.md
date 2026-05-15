# trabalho-estrutura-de-dados-2bim

1.Caso base
if (n == 0)
    return 0;

if (n == 1)
    return 1;

O caso base acontece quando n vale 0 ou 1.

Esses valores já são conhecidos na sequência de Fibonacci, então a recursão para ali.

O que reduz o problema
fibonacciIngenuo(n - 1, chamadas)
fibonacciIngenuo(n - 2, chamadas)

A cada chamada, o problema fica menor porque o valor de n diminui.

2.Caso base
if (n == 0)
    return 0;

if (n == 1)
    return 1;

É exatamente igual ao Fibonacci ingênuo.

Quando chega em 0 ou 1, a função retorna o valor diretamente.

O que reduz o problema
fibonacciMemoizado(n - 1, cache, chamadas)
fibonacciMemoizado(n - 2, cache, chamadas)

O valor de n também vai diminuindo a cada chamada recursiva.

A diferença é que:

if (cache[n] != -1)
    return cache[n];

Se o resultado já foi calculado antes, ele é reaproveitado do cache, evitando repetir cálculos.

Isso reduz muito a quantidade de chamadas recursivas.

3.Caso base
if (discos == 1)

Quando existe apenas 1 disco, basta fazer um único movimento.

Então a recursão termina.

O que reduz o problema
torresDeHanoi(discos - 1, ...)

A cada chamada, a quantidade de discos diminui.

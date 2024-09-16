#include <stdio.h>

int main()
{
    float x = 0.0f;
    float y = 0.0f;

    // 1. Introduza o numero 1
    printf("Introduza o primeiro numero: \t");
    scanf("%f", &x); // Corrigido o fechamento de aspas e posição de &x
    
    // 2. Introduza o numero 2
    printf("Introduza o segundo numero: \t");
    scanf("%f", &y); // Corrigido o fechamento de aspas e posição de &y

    float soma = 0.0f;
    float produto = 0.0f;
    float diferenca = 0.0f; // Corrigido o nome da variável para "diferenca"
    float quociente = 0.0f;

    // 3. Correr funções
    soma = x + y;
    produto = x * y;
    diferenca = x - y;
    quociente = x / y;

    // 4. Exibir resultados
    printf("Soma: %f\n", soma);          // Corrigido a exibição
    printf("Produto: %f\n", produto);    // Corrigido a exibição
    printf("Diferença: %f\n", diferenca); // Corrigido a exibição
    printf("Quociente: %f\n", quociente); // Corrigido a exibição

    return 0;
}

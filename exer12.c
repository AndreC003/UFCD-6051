#include <stdio.h>

int maior_do_que(int numero1, int numero2)
{
    if(numero1 > numero2)
    {
        return numero1;
    }
    else
    {
        return numero2;
    }
}

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    // Ler o primeiro número
    printf("Introduza o primeiro número: \n");
    scanf("%d", &numero1);

    // Ler o segundo número
    printf("Introduza o segundo número: \n");
    scanf("%d", &numero2);

    // Mostrar o maior número
    if (numero1 == numero2) {
        printf("Os dois números são iguais.\n");
    } else {
        printf("O maior número é: %d\n", maior_do_que(numero1, numero2));
    }

    return 0;
}

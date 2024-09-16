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

int menor_do_que(int numero1, int numero2)
{
    if(numero1 < numero2)
    {
        return numero1;
    }
    else
    {
        return numero2;
    }
}

int igual_a(int numero1, int numero2)
{
    if(numero1 == numero2)
    {
        return 1; // Retorna 1 se são iguais
    }
    else
    {
        return 0; // Retorna 0 se não são iguais
    }
}

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    printf("Introduza o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("Introduza o segundo numero: \n");
    scanf("%d", &numero2);

    // Usar as funções e armazenar os resultados
    if (igual_a(numero1, numero2)) {
        printf("Os dois números são iguais.\n");
    } else {
        printf("O maior número é: %d\n", maior_do_que(numero1, numero2));
        printf("O menor número é: %d\n", menor_do_que(numero1, numero2));
    }

    return 0;
}
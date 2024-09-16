#include <stdio.h>

int main()
{

int temperatura = 0;

// Introduzir a temperatura inicial
printf(" Introduza a temperatura:  ");
scanf("%d", &temperatura);

// Enquanto a temperatura for superior a 40, continua a pedir para introduzir a temperatura
// simulação de temperatura, através do teclado

while (temperatura > 40)
{
    printf(" Introduza a temperatura:    ");
    scanf("%d", &temperatura);
}



return 0;



}

// Start -> (>40)*1 -não-> 
#include <stdio.h>

int main()

{
char character;

printf(" Introduza um caractere : \t");
scanf("%c", &character);

printf("        %c         \n", character);
printf("       %c%c%c          \n", character, character, character);
printf("      %c%c%c%c%c           \n", character, character, character, character, character);
printf("       %c%c%c          \n", character, character, character);

} 
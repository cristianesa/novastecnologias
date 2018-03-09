#include "stdio.h"
#include "stdlib.h"

int main(int argc, char* argv[])
{
    int a;
    char b[10];

    printf("Digite um número: ");
    scanf("%d, &a);

    itoa(a,b,2); // Converte para base 2

    printf("\n O numero %d em binario é: %",a,");

    getch();
    return 0;

    
}
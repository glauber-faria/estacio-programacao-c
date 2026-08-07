//
// Created by Glauber Faria on 05/08/26.
//
#include <stdio.h>
int main(int argc, char *argv[]) {
    int n1, n2;

    printf("Digite dois numeros inteiros\n");
    scanf("%d %d", &n1, &n2);

    if (n1 == n2) printf("ambos sao iguais\n");
    if (n1 > n2) printf("o primeiro é maior que o segundo\n");
    if (n1 < n2) printf("o segundo é maior que o primeiro\n");

    printf("Divisao entre os 2 numeros = %d \n",n1/n2);
    printf("Multiplicacao entre os 2 numeros = %d \n",n1*n2);
    printf("Resto da divisao entre os 2 numeros = %d \n",n1 % n2);

    return 0;
}
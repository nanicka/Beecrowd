#include<stdio.h>

int main(){

/*Entrada
A primeira linha da entrada contém um inteiro t, indicando o número de casos de teste. 
Cada caso de teste é descrito por uma linha contendo dois inteiros separados por um espaço,
n e m (6 ≤ n, m ≤ 10000), indicando o tamanho da grade (n linhas e m colunas).

Saída
Para cada caso de teste, imprima uma linha contendo o menor número de sonares necessários.*/

int n, m, t, i;


    scanf("%d", &t);

    for(i=0; i<t;i++){
    scanf("%d %d", &n, &m);
    printf("%d\n", (n/3)*(m/3));
    }

}
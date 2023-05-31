#include<stdio.h>

/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, 
sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração
mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.*/

int main(){

    int hInicial, hFinal;

    scanf("%d %d", &hInicial, &hFinal);

    if (hInicial>hFinal){
        printf("O JOGO DUROU %d HORA(S)\n", (24-(hInicial-hFinal)));
    }else if (hInicial<hFinal){
        printf("O JOGO DUROU %d HORA(S)\n", (hFinal-hInicial));
    }else{
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

}
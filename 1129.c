#include<stdio.h>


/* Entrada
O prof. João determinou que os quadrados seriam divididos em duas classes: aqueles com média menor ou igual a 127 
serão considerados pretos e aqueles com média maior a 127 serão considerados brancos.

A entrada contém vários casos de teste. A primeira linha de um caso de teste contém um número inteiro N indicando
o número de questões da folha de respostas (1 ≤ N ≤ 255). Cada uma das N linhas seguintes descreve a resposta a 
uma questão e contém cinco números inteiros A, B, C, D e E, indicando os valores de nível de cinza médio para cada 
uma das alternativas da resposta (0 ≤ A, B, C, D, E ≤ 255).

O ultimo caso de teste é seguido por uma linha que contém apenas um número zero.*/

int main(){

int A, B, C, D, E;
int N, i, cont=0;


do{
scanf("%d", &N);

    for(i=0; i<N;i++){
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

            if(A<=127){
                A=1;
                cont++;
            }
            if(B<=127){
                B=1;
                cont++;
            }
            if(C<=127){
                C=1;
                cont++;
            }
            if(D<=127){
                D=1;
                cont++;
            }  
            if(E<=127){
                E=1;
                cont++;
            } 

            if(cont==1){

            if(A==1){
                printf("A\n");
            }
            if(B==1){
                printf("B\n");
            }
            if(C==1){
               printf("C\n");
            }
            if(D==1){
               printf("D\n");
            }  
            if(E<=127){
                printf("E\n");
            }                
                
                }else{ printf("*\n");}     
    cont=0;
    }
            
}while(N);

}
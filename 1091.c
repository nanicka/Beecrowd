#include<stdio.h>

int main(){

    int K, N, M, X, Y, aux;

    do{
        scanf("%d", &K);
        if(K==0) break;

        scanf("%d %d", &N, &M);
        aux=0;
        do{
            aux++;
        scanf("%d %d", &X, &Y);

            if(X==N || Y==M){
                printf("divisa\n");
            }else if (X>N && Y>M){
                printf("NE\n");
            }else if(X>N && Y<M){
                printf("SE\n");
            }else if (X<N && Y>M){
                printf("NO\n");
            }else {
                printf("SO\n");
            }
            
        }while (aux<K);
        
    }while(1);
}
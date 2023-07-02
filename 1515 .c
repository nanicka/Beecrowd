#include<stdio.h>
#include<string.h>

/*Entrada
Haverá diversos casos de teste.

Cada caso de teste inicia com um inteiro N (1 ≤ N ≤ 100), que indica quantas mensagens 
Hello Galaxy foram coletados por Rafael em sua pesquisa.

Em seguida haverão N linhas, cada uma representando uma mensagem. Cada mensagem é 
representada pelo nome do planeta da civilização, contendo entre 1 e 50 caracteres 
(somente letras), e dois inteiros A e T (2014 ≤ A ≤ 2113, 1 ≤ T ≤ 1000), representando, respectivamente,
o ano em que a mensagem foi recebida no planeta Terra, e a quantidade de anos que tal mensagem levou para 
chegar do planeta de origem até o planeta Terra.
O último caso de teste é indicado quando N = 0, o qual não deverá ser processado.

Saída
Para cada caso de teste, deverá ser impressa uma linha, contendo o nome do planeta da primeira civilização
a enviar a mensagem Hello Galaxy. Pode-se supor que não haverá empates.*/

int main(){

int n, a, t, primeiro, i, chegada[50];
char planeta[100][100], nomeP[1][100];

do {
    scanf("%d", &n);
        if (!(n)) break;

    for(i=0;i<n;i++){
        scanf("%s %d %d", planeta[i], &a, &t);
        chegada[i]=(a-t);
    }
    primeiro=chegada[0];
    for (i=0;i<n;i++){
        if(primeiro>chegada[i]){
            strcpy(nomeP, planeta[i]);
            primeiro=chegada[i];
        }else if(i==0) strcpy(nomeP, planeta[0]);

    }

    printf("%s\n", nomeP);

}while(1);
    
}
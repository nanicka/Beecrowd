#include <stdio.h>
#include <math.h>


int main(){
int a, b, c, maiorAB;

scanf("%d %d %d", &a, &b, &c);

maiorAB=(a+b+abs(a-b))/2;

    if (maiorAB>c){
        printf("%d eh o maior\n", maiorAB);
    }else{
        printf("%d eh o maior\n", c);
    }

}
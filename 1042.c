#include<stdio.h>

int main(){

int A, B, C;

scanf("%d %d %d", &A, &B, &C);

if((A<=B) && (B<=C)){
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
}

if((B<=A) && (A<=C)){
    printf("%d\n", B);
    printf("%d\n", A);
    printf("%d\n", C);
}

if((B<=C) && (C<=A)){
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", A);
}

if((A<=C) && (C<=B)){
    printf("%d\n", A);
    printf("%d\n", C);
    printf("%d\n", B);
}

if((C<=B) && (B<=A)){
    printf("%d\n", C);
    printf("%d\n", B);
    printf("%d\n", A);
}

if((C<=A) && (A<=B)){
    printf("%d\n", C);
    printf("%d\n", A);
    printf("%d\n", B);
}

printf("\n%d\n", A);
printf("%d\n", B);
printf("%d\n", C);

}
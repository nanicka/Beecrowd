#include<stdio.h>
#include<math.h>

int main(){

float a, b, c, maior=0, l1=0, l2=0;

scanf("%f %f %f", &a,&b,&c);

if ((a>b) && ((a>=c)||(b>c))){maior=a; l1=b; l2=c;}
else if ((b>a) && ((b>=c)||(a>c))){maior=b; l1=a; l2=c;}
else if ((c>a) && ((c>=b)||(a>c))){maior=c; l1=b; l2=a;}
else{maior=a; l1=b; l2=c;}

if(maior>=(l1+l2)){printf("NAO FORMA TRIANGULO\n");}
else {
    if((pow(maior,2) == (pow(l1,2)+(pow(l2,2))))) {printf("TRIANGULO RETANGULO\n");}
    else if ((pow(maior,2) > (pow(l1,2)+(pow(l2,2))))) {printf("TRIANGULO OBTUSANGULO\n");}
    else if ((pow(maior,2) < (pow(l1,2)+(pow(l2,2))))) {printf("TRIANGULO ACUTANGULO\n");}

    if(maior==l1 && maior==l2){printf("TRIANGULO EQUILATERO\n");}
    else if(maior==l1 || maior==l2 || l1==l2){printf("TRIANGULO ISOSCELES\n");}

}

}
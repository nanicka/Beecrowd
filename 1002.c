#include<stdio.h>
#include<math.h>

//A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:
//- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.

int main(){

double raio, pi=3.14159;

printf("Insira o raio da circunferencia: \n");
scanf("%lf", &raio);

printf("A= %.4lf", (pow(raio,2)*pi));

}
#include<stdio.h>
#include<math.h>

//Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
 //Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

 int main(){

    char vendedor;
    double salario, vendas;

    scanf("%s", &vendedor);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2lf", (0.15*vendas)+salario);

 }
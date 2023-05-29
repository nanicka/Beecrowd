#include<stdio.h>

/*A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:
Salário	Percentual de Reajuste
0 - 400.00             15%
400.01 - 800.00        12%
800.01 - 1200.00       10%
1200.01 - 2000.00      7%
Acima de 2000.00       4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho 
e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais)
e o percentual de reajuste ganho, conforme exemplo abaixo.*/

int main(){

float salario, novoS;

scanf("%f", &salario);

    if (salario<=400)
    {
        novoS=salario+(0.15*salario);
        printf("Novo salario: %.2f\n", novoS);
        printf("Reajuste ganho: %.2f\n", (novoS-salario));
        printf("Em percentual: 15 %%\n");
    }
    else if ((salario>400) && (salario<=800))
    {
        novoS=salario+(0.12*salario);
        printf("Novo salario: %.2f\n", novoS);
        printf("Reajuste ganho: %.2f\n", (novoS-salario));
        printf("Em percentual: 12 %%\n");
    }
    else if ((salario>800) && (salario<=1200))
    {
        novoS=salario+(0.10*salario);
        printf("Novo salario: %.2f\n", novoS);
        printf("Reajuste ganho: %.2f\n", (novoS-salario));
        printf("Em percentual: 10 %%\n");
    }
    else if ((salario>1200) && (salario<=2000))
    {
        novoS=salario+(0.07*salario);
        printf("Novo salario: %.2f\n", novoS);
        printf("Reajuste ganho: %.2f\n", (novoS-salario));
        printf("Em percentual: 7 %%\n");
    }
    else if ((salario>1200) && (salario<=2000))
    {
        novoS=salario+(0.07*salario);
        printf("Novo salario: %.2f\n", novoS);
        printf("Reajuste ganho: %.2f\n", (novoS-salario));
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        novoS=salario+(0.04*salario);
        printf("Novo salario: %.2f\n", novoS);
        printf("Reajuste ganho: %.2f\n", (novoS-salario));
        printf("Em percentual: 4 %%\n");
    }

}
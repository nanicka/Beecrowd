#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

/*Vinicius leva muito a sério seu condicionamento físico e, diariamente às 6h da manhã, chova ou faça sol,
no verão e no inverno, ele corre no entorno de uma lagoa. Ao longo da pista de corrida existem N placas
igualmente espaçadas. Para não desanimar do exercício, Vinicius conta o número de placas pelas quais
ele já passou e verifica se ele já correu pelo menos 10%, pelo menos 20%, : : : , pelo menos 90% do percurso.

Vamos ajudar o Vinicius, calculando para ele o número de placas que ele precisa contar para ter
completado pelo menos 10%, 20%, : : : , 90% da corrida, dados o número de voltas que ele pretende 
correr e o número total de placas ao longo da pista.

Por exemplo, suponhamos que Vinicius queira dar 3 voltas e o número de placas seja 17. 
Então, para garantir ter corrido pelo menos 30% do percurso, ele precisa contar 16 placas.
Para garantir pelo menos 60%, ele precisa contar 31 placas.*/

int voltas, placas;
float placasT;

scanf("%d %d", &voltas, &placas);

placasT=voltas*placas;

    printf("%.f %.f %.f %.f %.f %.f %.f %.f %.f\n", ceil((0.1)*placasT), ceil((0.2)*placasT), ceil((0.3)*placasT), 
    ceil((0.4)*placasT), ceil((0.5)*placasT), ceil((0.6)*placasT), ceil((0.7)*placasT), ceil((0.8)*placasT), ceil((0.9)*placasT)); 

}
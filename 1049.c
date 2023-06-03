#include<stdio.h>
#include<string.h>

int main(){

char c1[12], c2[12], c3[12];

scanf("%s", &c1);
scanf("%s", &c2);
scanf("%s", &c3);

    if(!strcmp(c1,"vertebrado")){
        if (strcmp(c2,"ave")==0){
            if (!strcmp(c3,"carnivoro"))
               printf("aguia\n"); 
            else 
                printf("pomba\n");

        }else {
            if (!strcmp(c3,"herbivoro"))
               printf("vaca\n"); 
        else
                printf("homem\n");}
                
        }else 
        if(!strcmp(c2,"inseto")){
            if(!strcmp(c3,"hematofago"))
                printf("pulga\n");
            else 
                printf("lagarta\n");
            
        } else{
            if(!strcmp(c3,"hematofago")){
                printf("sanguessuga\n");
            }else 
                printf("minhoca\n");
            
        }
}
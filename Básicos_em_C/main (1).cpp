#include <stdio.h>

int main()
{
    
    float km, dias, vt ;
     
    printf("Quantos dias você alugou o carro?");
    scanf("%f", &dias );
    printf("Quantos kilometros você rodou");
    scanf("%f",&km);
     vt = dias*90 + km * 0.20;
    printf("Total a pagar  %2f",vt);

    return 0;
}

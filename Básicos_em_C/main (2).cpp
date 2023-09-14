#include <stdio.h>

int main()
{
    
    float produto, vt ;
     
    printf("Qual o valor do produto desejado ?");
    scanf("%f", &produto );
    vt = produto - ( produto * 0.05);
    printf("Esse produto com o desconto sai no valor de:%f",vt);
    
     
    

    return 0;
}

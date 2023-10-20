#include <stdio.h>
#include <math.h>

void conv(){
    float raio ,pi =3.1414592;

    printf("Digite o Raio ");
    scanf("%f",&raio);
    
    float v = (4*pi * pow(raio,3))/3;
    printf("Volume da esfera :%.1f",v);
}

int main (){
    conv();

return 0;
}

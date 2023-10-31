// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void imprimir(int matriz[10][10]){
     for (int i = 0; i < 10; i++){
        for (int j = 0 ; j < 10; j++){
            printf("%d\t",matriz[i][j]) ;
        } 
        printf("\n");
    }
}
void l2porl8(int matriz [10][10]){
    int temp;
    for(int j=0; j<10;j++){
        temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp ; 
    }
}

void c4porc10(int matriz [10][10]){
    int temp;
    for(int i=0; i<10;i++){
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp ; 
    }
}
void trocardiagonais(int matriz [10][10]){
    int temp;
    for(int i=0; i<10;i++){
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9-i];
        matriz[i][9-i] = temp ; 
    }
}
void l5porc10(int matriz [10][10]){
    int temp;
    for(int i=0; i<10;i++){
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp ; 
    }
}

int main(){
    int matriz[10][10];
    
    for (int i = 0; i < 10; i++){
        for (int j = 0 ; j < 10; j++){
            matriz[i][j] = i * 10 + j ;
        } 
    }
    
    imprimir(matriz);
    printf("\n");
    l2porl8(matriz);
    printf("\n");
    c4porc10(matriz);
    printf("\n");
    trocardiagonais(matriz);
    printf("\n");
    l5porc10(matriz);
    imprimir(matriz);
    
    return 0 ;
}

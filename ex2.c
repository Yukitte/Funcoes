#include <stdio.h>
#include <math.h>

char* num(int dia) {
    switch (dia)
    {
    case 1:
        return "Janeiro - 31 dias" ;
        break;
    case 2:
        return "Fevereiro - 28 dias";
        break;
    case 3:
        return "Março - 31 dias";
        break;
    case 4:
        return "Abril - 30 dias";
        break;
    case 5:
        return "Maio - 31 dias";
        break;
    case 6:
        return "Junho - 30 dias";
        break;
    case 7:
        return "Julho - 31 dias";
        break;
    case 8:
        return "Agosto - 31 dias";
        break;
    case 9:
        return "Setembro - 30 dias";
        break;
    case 10:
        return "Outubro - 31 dias";
        break;
    case 11:
        return "Novembro - 30 dias";
        break;
    case 12:
        return "Dezembro - 31 dias";
        break;
    
    default:
        printf("ERROR!");
    }
}

int main() {
    int x;
    char* mes;

    printf("Digite o numero do mes:");
    scanf("%d", &x);

    mes = num(x);
    printf("O mes e os dias são: %s\n", mes);

    return 0;
}

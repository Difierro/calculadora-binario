#include <stdio.h>
int arrayLength(); //função para definir o tamanho do array de acordo com o numero decimal

int main(){
    int numeroDecimal;
    int ibl = 0; //indice de alocação dos 0's e 1's
    int tamanhoArray; //tamanho do array
    
    printf("Calculadora Decimal para Binario: \n");
    printf("Digite o numero inteiro positivo: ");
    scanf("%d", &numeroDecimal);
    
    tamanhoArray = arrayLength(numeroDecimal);
    char binario[tamanhoArray];
    
    while(numeroDecimal >= 1){
        if (numeroDecimal % 2 == 0){
            binario[ibl] = '0';
        }else{
            binario[ibl] = '1';
        }
        ibl++;
        numeroDecimal = numeroDecimal / 2;
    }

    for(int i = tamanhoArray-1; i >= 0; i--){
        printf("%c ", binario[i]);
    }

    return 0; 
}

int arrayLength(int numeroDecimal){
    int ib = 0;
    while(numeroDecimal >= 1){ 
        numeroDecimal= numeroDecimal / 2;
        ib++;
    }

    return ib;
}

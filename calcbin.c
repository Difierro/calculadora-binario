// aparece local da memória

#include <stdio.h>
int arrayLength();
char calc();

int main(){
    int nd;
    int ibl, iblII;
    
    printf("Calculadora Decimal para Binario: \n");
    printf("Digite o numero inteiro decimal: ");
    scanf("%d", &nd);
    
    iblII = arrayLength(nd);
    ibl = iblII;
    char binario[ibl];
    
    while(nd >= 1){
        binario[ibl] = calc(nd);
        nd = nd/2;
    }

    for(int i =0; i< iblII; i++){
        printf("%d", binario[i]);
    }
    

    

    return 0; 
}

int arrayLength(int nd){
    int ib;
    while(nd >= 1){
        if (nd % 2 == 0){
            nd= nd/2;
        }else{
            nd= nd/2;
        }
        ib++;
    }

    return ib;
}

char calc(int nd){
    char numBinario;
        if (nd % 2 == 0){
            numBinario = '0';
        }else{
            numBinario = '1';
        }
        return numBinario;
}

//8 = 1000
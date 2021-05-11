#include <stdio.h>

int main() {

    int tamPar, tamImpar, x, vetDigitado[10], vetPar[10], vetImpar[10];
    int vetor [5],aux;
    
    tamPar = 0;
    tamImpar = 0;

    for (x = 0; x < 10; x++) {
        printf("\nDigite o %d.o numero: ", x + 1);
        scanf("%d%*c", &vetDigitado[x]);

        if (vetDigitado[x] % 2 == 0) {
            vetPar[tamPar] = vetDigitado[x];
            tamPar++;
        }
        else {
            vetImpar[tamImpar] = vetDigitado[x];
            tamImpar++;
        }
    }

    printf("\nVetor Par:\n");
    for (x = 0; x < tamPar; x++) {
    	for (int x=0; x<5 ; x++){
    		for(int j=x+1;j<5;j++){
    			if(vetor[x] > vetor [j]){
    			 aux = vetor[x];
				 vetor[x] = vetor[j];
				 vetor[j] = aux;	
				}
			}
		}
        printf("%d\n", vetPar[x]);
    }

    printf("\nVetor Impar:\n");
    for (x = 0; x < tamImpar; x++) {
        printf("%d\n", vetImpar[x]);
    }
    return 0;
}

#include <stdio.h>


#define TAM 10


   int main(){

      int i, taman, vetDigitado[TAM],vetPar[TAM],vetImpar[TAM];


        for(i=0;i<TAM;i++){
            printf("\nDigite o %d.o numero: ", i+1);
            scanf("%d%*c", &vetDigitado[i]);
            taman=sizeof(vetDigitado);

               if(vetDigitado[i] % 2 == 0){
                 vetPar[i]=vetDigitado[i];
                 vetImpar[i] = taman;
                 }

             else{
                vetImpar[i]=vetDigitado[i];
                vetPar[i] = taman;
               }
        }
               printf("\n\tVetor PAR: \n");
               for(i=0; i<TAM; i++){
               if (vetPar[i] != taman)
               printf("\n\nPosicao [%d]= %d \n\n", i, vetPar[i]);
               }
               printf("\n\tVetor IMPAR: \n");
               for(i=0; i<TAM; i++){
               if (vetImpar[i] != taman)
               printf("\n\nPosicao [%d]= %d \n",i, vetImpar[i]);
               }

           return 0;
  }

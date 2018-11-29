#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "Redes_Neurais.h"


//MAIN_____________________________________//
int main(){
    //vetorStatusTreinamento: 0 -> Asfalto | 1 -> Grama
    int *vetorStatusTreinamento = criarVetorStatusTreinamento();
    //matrizTreinamento: vetor[536] de cada imagem de treinamento
    double **matrizTreinamento = criarMatrizTreinamento(vetorStatusTreinamento);
    
    
    return 0;
}
//_________________________________________//
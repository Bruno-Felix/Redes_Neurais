#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "Redes_Neurais.h"


//MAIN_____________________________________//
int main(){
    //vetorStatus: 0 -> Asfalto | 1 -> Grama
    int *vetorStatusTreinamento = criarVetorStatusTreinamento();
    int *vetorStatusTeste = criarVetorStatusTeste();

    //matriz: vetor[536] de cada imagem de treinamento ou teste
    double **matrizTreinamento = criarMatrizTreinamento(vetorStatusTreinamento);
    double **matrizTeste = criarMatrizTeste(vetorStatusTeste);

    criarCamadaEntrada();




    return 0;
}
//_________________________________________//

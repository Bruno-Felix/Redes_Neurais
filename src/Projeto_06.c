#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "Redes_Neurais.h"



//MAIN_____________________________________//
int main(int argc, char *argv[]){

    int Tamanho = 0;
    Tamanho = atoi(argv[1]);

    int i=0;
    double vetorSaidas[50];

    //printf("%d\n", Tamanho);
    //vetorStatus: 0 -> Asfalto | 1 -> Grama
    int *vetorStatusTreinamento = criarVetorStatusTreinamento();
    int *vetorStatusTeste = criarVetorStatusTeste();

    //matriz: vetor[536] de cada imagem de treinamento ou teste
    double **matrizTreinamento = criarMatrizTreinamento(vetorStatusTreinamento);
    double **matrizTeste = criarMatrizTeste(vetorStatusTeste);

    Neuronio *ponteiroPosicaoEntrada = criarCamadaEntrada();
    Neuronio *ponteiroPosicaoOculto = criarCamadaOculta(Tamanho);

    double *vetorEntrada = calculoEntrada(i, matrizTreinamento, ponteiroPosicaoEntrada);
    double *vetorOculto = calculoOculta(i, vetorEntrada, ponteiroPosicaoOculto, Tamanho);

    return 0;
}
//_________________________________________//

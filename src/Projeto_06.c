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
    double *vetorEntrada = (double *)malloc(536 * sizeof(double));



    //printf("%d\n", Tamanho);
    //vetorStatus: 0 -> Asfalto | 1 -> Grama
    int *vetorStatusTreinamento = criarVetorStatusTreinamento();
    int *vetorStatusTeste = criarVetorStatusTeste();

    //matriz: vetor[536] de cada imagem de treinamento ou teste
    double **matrizTreinamento = criarMatrizTreinamento(vetorStatusTreinamento);
    double **matrizTeste = criarMatrizTeste(vetorStatusTeste);

    Neuronio *ponteiroPosicaoEntrada = criarCamadaEntrada();
    Neuronio *ponteiroPosicaoOculto = criarCamadaOculta(Tamanho);

<<<<<<< HEAD
    double **vetorEntradaW = criarMatriz_W_Entrada();
    double **vetorOcultoW = criarMatriz_W_Oculto(Tamanho);
=======
    for (int i = 0; i < 536; ) {
      //printf("entrou\n");
      vetorEntrada[i] = calculoEntrada(i, matrizTreinamento[i], ponteiroPosicaoEntrada);
      //printf("v: %lf\n", vetorEntrada[i]);
      i++;
      printf("%d\n", i);
    }
    double *vetorOculto = calculoOculta(i, vetorEntrada, ponteiroPosicaoOculto, Tamanho);
>>>>>>> 9ed7fb65ccf5a9b32ad063bdf6e20b61d456522e

    return 0;
}
//_________________________________________//

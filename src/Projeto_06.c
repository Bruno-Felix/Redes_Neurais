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

    double **vetorEntradaW = criarMatriz_W_Entrada();
    double **vetorOcultoW = criarMatriz_W_Oculto(Tamanho);

    int count = 0;
    double erroQuadratico = 1;
    while(count != 1000 || erroQuadratico <= 0.2){

        for(int k=0; k<50; k++){
            calculaGeracao(k, i, matrizTeste,  matrizTreinamento,  ponteiroPosicaoEntrada,  ponteiroPosicaoOculto,  vetorEntradaW,  vetorOcultoW,  Tamanho);


        }



        count++;
    }

    return 0;
}
//_________________________________________//

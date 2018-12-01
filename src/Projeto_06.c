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

    //vetorStatus: 0 -> Asfalto | 1 -> Grama
    int *vetorStatusTreinamento = criarVetorStatusTreinamento();
    int *vetorStatusTeste = criarVetorStatusTeste();

    //matriz: vetor[536] de cada imagem de treinamento ou teste
    double **matrizTreinamento = criarMatrizTreinamento(vetorStatusTreinamento);
    double **matrizTeste = criarMatrizTeste(vetorStatusTeste);

    Neuronio *ponteiroPosicaoEntrada = criarCamadaEntrada();
    Neuronio *ponteiroPosicaoOculto = criarCamadaOculta(Tamanho);
    NeuronioS *ponteiroPosicaoSaida = criarNeuronioSaida(Tamanho);

    double **vetorEntradaW = criarMatriz_W_Entrada();
    double **vetorOcultoW = criarMatriz_W_Oculto(Tamanho);
    double *vetorSaidaW = Cria_W_saida(Tamanho);

    int count = 0;
    double erroQuadratico = 1;
    double vetorStatusTesteD[50];


    //--------------------------------
    //      MUDAR PARA 1000
    //--------------------------------
    while(count != 10 && erroQuadratico >= 0.2){
      double vetorS [50];
      double erro[50];
      double somatorio = 0;
      double vetorStatusTreinamentoD[50];



    for(int k=0; k<50; k++){
        vetorStatusTreinamentoD[k] = (double)vetorStatusTreinamento[k];
        
        vetorS[k] =  calculaGeracao(k, i, matrizTeste,  matrizTreinamento,  ponteiroPosicaoEntrada,  ponteiroPosicaoOculto,  vetorEntradaW,  vetorOcultoW,  Tamanho, ponteiroPosicaoSaida, vetorSaidaW);
        printf("Saida Geracao[%d][%d]: %lf\n", count, k, vetorS[k]);
        
        erro[k] = vetorStatusTreinamentoD[k] - vetorS[k];
        if(vetorS[k] > vetorStatusTreinamentoD[k]){
            erro[k] = erro[k] * -1;
        }
        
        backpropagacaion(matrizTreinamento, vetorEntradaW, ponteiroPosicaoEntrada, vetorOcultoW, Tamanho, vetorSaidaW, ponteiroPosicaoOculto, erro[k], vetorS[k], ponteiroPosicaoSaida, k);
           
    }

    for (size_t h = 0; h < 50; h++) {
        somatorio += pow(erro[h], 2);
        //printf("somatorio: %lf\n", somatorio);
    }

    erroQuadratico = somatorio / 50;
    printf("-----------------------------------------------------\n                Erro Quadrado: %lf\n", erroQuadratico);
    
    count++;
    }

    return 0;
}
//_________________________________________//

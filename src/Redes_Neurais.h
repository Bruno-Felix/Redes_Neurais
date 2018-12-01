#ifndef REDES_NEURAIS_H
#define REDES_NEURAIS_H

typedef struct neuronio{
    double d; //Gradiente
    double b; //vies
    double v; //Saida
}Neuronio;

typedef struct neuronioS{
  double d;
  double b;
  double v;
}NeuronioS;

double **leituraVetorGrama();
double **leituraVetorAsfalto();

int *criarVetorStatusTreinamento();
int *criarVetorStatusTeste();

double **criarMatrizTreinamento(int *VetorStatusTreinamento);
double **criarMatrizTeste(int *VetorStatusTreinamento);

Neuronio *criarCamadaEntrada();
double **criarMatriz_W_Entrada();
Neuronio *criarCamadaOculta(int parametro);
double **criarMatriz_W_Oculto(int parametro);
NeuronioS *criarNeuronioSaida(int parametro);
double *Cria_W_saida(int parametro);



double calculoEntrada(int k, int i, double **matriz, Neuronio *ponteiroPosicao, double **vetorEntradaW);
double  calculoOculta(int k, int i, double *vetor, Neuronio *ponteiroPosicao, double **vetorOcultoW, int parametro);
double calculoSaida(double *vetor, NeuronioS *ponteiroPosicao ,  double *vetor_W_Saida, int parametro );

double calculaGeracao(int k, int i, double **matrizTreste, double **matrizTreinamento, Neuronio *ponteiroPosicaoEntrada, Neuronio *ponteiroPosicaoOculto, double **vetorEntradaW, double **vetorOcultoW, int parametro, NeuronioS *ponteiroPosicaoSaida, double *vetor_W_Saida);


void backpropagacaion(double **matrizTreinamento, double **matriz_W_Entrada, Neuronio *ponteiroPosicaoEntrada, double **matriz_W_Oculto, int parametro, double *vetor_W_Saida, Neuronio *ponteiroPosicaoOculto, double erro, double saida, NeuronioS *ponteiroPosicaoSaida, int k);
void calculaGradienteSaida(double erro, double saida, NeuronioS *ponteiroPosicaoSaida);
void calculaGradienteOculta(Neuronio *ponteiroPosicaoOculto,  NeuronioS *ponteiroPosicaoSaida, double *vetor_W_Saida, int parametro);
void calculoGradienteEntrada(Neuronio *ponteiroPosicaoOculto, double **matriz_W_Oculto, Neuronio *ponteiroPosicaoEntrada, int parametro);
void atualizaWEntrada(double **matriz_W_Entrada, double **matrizTreinamento, int k, Neuronio *ponteiroPosicaoEntrada);
void atualizaWOculto(int parametro, double **matriz_W_Oculto, Neuronio *ponteiroPosicaoEntrada);
void atualizaWSaida(int parametro, double * vetor_W_Saida, Neuronio *ponteiroPosicaoOculto, NeuronioS *ponteiroPosicaoSaida);
void atualizaBEntrada(Neuronio *ponteiroPosicaoEntrada);
void atualizaBOculto(Neuronio *ponteiroPosicaoOculto, int parametro);
void atualizaBSaida(NeuronioS *ponteiroPosicaoSaida);


#endif

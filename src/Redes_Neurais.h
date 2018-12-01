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


void backpropagacaion();
NeuronioS calulaGradienteSaída();
Neuronio calulaGradiente();
double atualizaWEntrada(double **matrizW);
double atualizaWOculto(double **matrizW);
Neuronio atualizaB();


#endif

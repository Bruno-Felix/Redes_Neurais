#ifndef REDES_NEURAIS_H
#define REDES_NEURAIS_H

typedef struct neuronio{
    double d; //Gradiente
    double b; //vies
    double v; //Saida
}Neuronio;

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
void criaNeuronioSaida(int );


double calculoEntrada(int k, int i, double **matriz, Neuronio *ponteiroPosicao, double **vetorEntradaW);
double  calculoOculta(int k, int i, double *vetor, Neuronio *ponteiroPosicao, double **vetorOcultoW, int parametro);

double calculaGeracao(int k, int i, double **matrizTreste, double **matrizTreinamento, Neuronio *ponteiroPosicaoEntrada, Neuronio *ponteiroPosicaoOculto, double **vetorEntradaW, double **vetorOcultoW, int parametro);



#endif

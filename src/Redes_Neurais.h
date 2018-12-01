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

<<<<<<< HEAD
double calculoEntrada(int i, double **vetor, Neuronio *ponteiroPosicao);
double *calculoOculta(int i, double *vetorEntrada, Neuronio **ponteiroPosicao, int parametro);
=======
double calculoEntrada(int i, double *vetor, Neuronio *ponteiroPosicao);
double *calculoOculta(int i, double *vetorEntrada, Neuronio *ponteiroPosicao, int parametro);
>>>>>>> 9ed7fb65ccf5a9b32ad063bdf6e20b61d456522e




#endif

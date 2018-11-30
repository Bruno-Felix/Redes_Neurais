#ifndef REDES_NEURAIS_H
#define REDES_NEURAIS_H

double **leituraVetorGrama();
double **leituraVetorAsfalto();

int *criarVetorStatusTreinamento();
int *criarVetorStatusTeste();

double **criarMatrizTreinamento(int *VetorStatusTreinamento);
double **criarMatrizTeste(int *criarVetorStatusTreinamento);

void criarCamadaOculta(int *parametro);
void criarCamadaEntrada();

typedef struct neuronio{
    double d; //Gradiente
    double w[536]; //Núcleo
    double b; //vies
    double v; //Saida
}Neuronio;




#endif

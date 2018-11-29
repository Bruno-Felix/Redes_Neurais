#ifndef REDES_NEURAIS_H
#define REDES_NEURAIS_H

double **leituraVetorGrama();
double **leituraVetorAsfalto();
int *criarVetorStatusTreinamento();
double **criarMatrizTreinamento(int *VetorStatusTreinamento);

typedef struct neuronio{
    double d; //Gradiente
    double w[536]; //Núcleo
    double b; //vies
    double v; //Saida
}Neuronio;

#endif

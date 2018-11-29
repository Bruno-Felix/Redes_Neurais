#ifndef REDES_NEURAIS_H
#define REDES_NEURAIS_H

double **leituraVetorGrama();
double **leituraVetorAsfalto();

int *criarVetorStatusTreinamento();
int *criarVetorStatusTeste();

double **criarMatrizTreinamento(int *VetorStatusTreinamento);
double **criarMatrizTeste(int *criarVetorStatusTreinamento);


#endif
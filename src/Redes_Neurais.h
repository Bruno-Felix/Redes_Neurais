#ifndef REDES_NEURAIS_H
#define REDES_NEURAIS_H

double **leituraVetorGrama();
double **leituraVetorAsfalto();

int *criarVetorStatusTreinamento();
int *criarVetorStatusTeste();

double **criarMatrizTreinamento(int *VetorStatusTreinamento);
double **criarMatrizTeste(int *criarVetorStatusTreinamento);

void criacamada2(*parametro);

typedef struct neuronio{
    double d; //Gradiente
    double w[536]; //Núcleo
    double b; //vies
    double v; //Saida
}Neuronio;
Neuronio camada1[536]
double saida1[536]


#endif

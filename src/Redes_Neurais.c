#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "Redes_Neurais.h"


void random536(double *vetor, int semente){
  srand(time(NULL)+semente);
  for (int i=0; i<536; i++){
    *(vetor+i) = (rand() % 31999) - 16000;
  }
}

void criacamada2(*parametro) {
  camada2 = (Neuronio*)calloc(*parametro, sizeof (Neuronio));
  saida2 = (double*)calloc(*parametro, sizeof (double));

  if (camada2 = NULL) {
    reutrn 0;
  }
  if (saida2 = NULL) {
    reutrn 0;
  }

}
double calculoSaida(double *p, double *w, double b){
  double somatorio = 0;
  double n, s;

  for(int i=0; i<536; i++){
    somatorio += (*(w+i)) * (*(p+i));
  }
  n = somatorio + b;
  s = 1 / (1 + exp(-n));
  return s;
}

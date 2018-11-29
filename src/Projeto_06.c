#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "Redes_Neurais.c"



//MAIN_____________________________________//
int main(){
  int ncamada2 = atoi(argv[1]);
int qtd_neu_entrada    = 536;    // Quantidade de Neurônios da camada de entrada
int qtd_camada_Oc      = 1;    // Quantidade de Camadas Intermediárias (Ocultas)
int qtd_neu_camada_Oc  = ncamada2;    // Quantidade de Neurônios por camada Oculta
int qtd_neu_saida      = 1;    // Quantidade de Neurônios da camada de saída
int qtd_neu_total      =(qtd_neu_entrada+qtd_neu_saida+(qtd_camada_Oc*qtd_neu_camada_Oc)); // Quantidade Total de Neurônios da Rede Neural
int neu_penult_camada  = qtd_neu_entrada + ((qtd_camada_Oc - 1)* qtd_neu_camada_Oc); // primeiro neurônio da penúltima camada que vai apontar para a camada de saída
double saida1[536];
Neuronio Camada1[536];







    return 0;
}
//_________________________________________//

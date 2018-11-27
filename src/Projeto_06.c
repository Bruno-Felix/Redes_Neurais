#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "Redes_Neurais.h"


//MAIN_____________________________________//
int main(){
    
    int *vetorStatusTreinamento = criarVetorStatusTreinamento();
    double **matrizTreinamento = criarMatrizTreinamento(vetorStatusTreinamento);
    
    
    return 0;
}
//_________________________________________//
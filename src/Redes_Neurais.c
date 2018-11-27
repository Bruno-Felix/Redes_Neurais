#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "Redes_Neurais.h"


int getParametroLinhaComando(int argc, char *argv[], int *parametro){
  if (argc == 1){
    return 0;
  }else{
    *param = atoi(argv[1]);
    return 1;
}

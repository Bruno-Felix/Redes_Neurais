A rede neural esta bem completa, fazendo as �pocas e gerando o erro quadratico de cada uma delas.

As camadas est�o bem alocadas, com os tamanhos devidos, fazendo as contas apropriadas.

Para compilar, entre na pasta src, e entre com :"gcc Projeto_06.c Redes_Neurais.c -o prog -lm"

Paramos em uma fun��o dentro do backpropagation de mudar o gradiente do vetor entrada, deu segfault.

O loop de treinamento da rede esta em 10 apenas para teste, onde o certo seria botar 1000.

N�o fizemos o final das metricas porque o erro nao alterava, logo as compara��es seriam inconclusicas.



 

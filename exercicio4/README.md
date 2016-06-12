#**MC723 - Exercício 4**

####Nome: André Tsuyohi Sakiyama
####RA: 150547

  Após a configuração da plataforma multicore, a aplicação que foi criada para fazer uso dos dois cores existentes foi um programa que calcula a soma dos elementos de um vetor de inteiros, o vetor é inicializado com tamanho de 500000, com valores de 1 a 500000.

  Inicialmente foi testado com dois cores, em que cada core fazia uma soma parcial com metade dos elementos e adicinava o resultado a uma variável global. No término do core mais lento, este imprimia o resultado final.  Cada core fez respectivamente 300569 e 305150 instruções. Como ambos cores trabalham em pararelo,  o tempo de execução da aplicação é o tempo do core mais lento e supondo que o processador gasta um ciclo por instrução e roda a 3.4GHz, o tempo total da aplicação foi de 0.08975 milisegundos.

  Em seguida foi feita algumas modificações no programa para que este rodasse apenas com um core. Os resultados dos testes foram: 455122 instruções geradas, e portanto o tempo total da aplicação foi de  0.13386 segundos.

  Podemos observar que houve um ganho muito grande ao usar apenas um core a mais. Isso se deve ao fato de que a aplicação em questão possui uma grande parte de seu código que é paralelizável, cerca de 65.90%, portanto ao dividir os cálculos em dois cores, o tempo da parte paralelizável cai pela metade.

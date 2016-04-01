#**Projeto 1 - Parte 3**

####Andr� Tsuyoshi Sakiyama RA: 150547

Os benchmarks analisados pelo grupo E foram: gnuplot, ordena��o e imagemagick. Cada benchmark foi testado em uma s�rie de computadores com especifica��es diferentes.
A lista de computadores utilizados e suas especifica��es est� dispon�vel [aqui](https://goo.gl/zBabUx).

----------

##[**Gnuplot**](https://github.com/andrenbrandao/mc723_proj1_p1)

O primeiro benchmark (gnuplot) analisa o tempo de execu��o do processamento gr�fico de uma m�quina espec�fica, al�m do uso de mem�ria e acesso ao disco.

Foram testadas 12 m�quinas neste benchmark. A capacidade de processamento gr�fico de um m�quina n�o depende apenas necessariamente das especifica��es do processador, da mem�ria principal ou do disco, tendo em vista que houve uma grande varia��o dos tempos de execu��o do benchmark em m�quinas com o modelo com processador, ou mem�ria ou disco parecidos. Como por exemplo as m�quinas Pedro Grij� e Matheus Figueiredo.
Esta varia��o pode ter sido causada, por um outro elemento que n�o foi citado nas especifica��es dos computadores, como o modelo da GPU, que possui grande influ�ncia em processamentos gr�ficos ou por concorr�ncia de processos.

Por�m ainda � poss�vel visualizar uma certa rela��o entre o conjunto processador, mem�ria, disco e o tempo de execu��o do programa. Como visto na m�quina de Pedro Vasconcellos, que � uma m�quina com clock de processador muito mais baixo e menos mem�ria RAM, teve um tempo relativamente maior que as outras m�quinas.

A ordem de desempenho decrescente neste benchmark foi:

 1. Pedro Grij�
 2. Gabriel Magalh�es
 3. Rodrigo Silva
 4. Mateus Ruivo
 5. Matheus Figueiredo
 6. IC301-Titan
 7. Bruno Hori - Mamonas
 8. floyd
 9. Pedro Meireles
 10. Netbook - Felipe Emos
 11. Matheus Pinheiro
 12. Pedro Vasconcellos


----------


##[**Ordena��o**](https://github.com/Takeshi-/Projeto_1)

O benchmark ordena��o, analisa o tempo de acesso a mem�ria do computador trabalhando com ordena��o de vetores muito longos.

Foram testadas 8 m�quinas com especifica��es diferentes.
Cada m�quina foi submetida a ordenar um vetor de tamanho 70000 com v�rios algor�timos de ordena��o diferentes. O tempo de execu��o do programa � diretamente proporcional ao tempo de acesso � mem�ria e ao clock do processador, por�m podem existir alguns imprevistos como processos concorrentes que podem afetar o tempo de execu��o do benchmark.

Como o programa � single thread, o benchmark n�o leva em conta a exist�ncia de m�ltiplos cores no processador. Al�m disso, como o programa trabalha com vetor de inteiros, esse fato pode alterar o resultado final dependendo do modelo da arquitetura e do sistema operacional(32 bits ou 64 bits).

A ordem de desempenho decrescente neste benchmark foi:

 1. Pedro Meireles
 2. Pedro Grij�
 3. Gabriel Magalh�es
 4. Rodrigo Silva
 5. Bruno Hori - Mamonas
 6. IC301-Titan
 7. Netbook - Felipe Emos
 8. Pedro Vasconcellos


----------


##[**Imagemagick**](https://github.com/FelipeEmos/mc723/tree/master/projeto1/benchmark1)

O ultimo benchmark utilizado foi Imagemagick, que tamb�m trabalha com processamento de imagens. Ele analisa a capacidade de processamento gr�fico, multithread e manipula��o de arquivos.

Foram testadas 9 m�quinas com especifica��es diferentes. Em cada uma, foi gerada duas imagens, uma com ru�do aleat�rio e outra com um padr�o embutido no software, e em cada uma foi aplicada um filtro blur.
Neste teste o n�mero de cores � um par�metro primordial para seu desempenho, pois o benchmark atua em multithread. Al�m disso o tempo de execu��o � proporcional a capacidade de processamento de imagens da m�quina. Por�m o benchmark n�o diz nada a respeito de GPU, o que � um fator importante a se considerar em processamento gr�fico.

A ordem de desempenho decrescente neste benchmark foi:

 1. Titouan Thibaud
 2. Cygnus X-1
 3. Gabriel Magalh�es
 4. yk0 - Yugo Kuno
 5. Wendrey
 6. IC301-Titan
 7. IC-legiao
 8. IC-sepultura
 9. Netbook - Felipe Emos


----------
#**Projeto 1 - Parte 3**

####André Tsuyoshi Sakiyama RA: 150547

Os benchmarks analisados pelo grupo E foram: gnuplot, ordenação e imagemagick. Cada benchmark foi testado em uma série de computadores com especificações diferentes.
A lista de computadores utilizados e suas especificações está disponível [aqui](https://goo.gl/zBabUx).

----------

##[**Gnuplot**](https://github.com/andrenbrandao/mc723_proj1_p1)

O primeiro benchmark (gnuplot) analisa o tempo de execução do processamento gráfico de uma máquina específica, além do uso de memória e acesso ao disco.

Foram testadas 12 máquinas neste benchmark. A capacidade de processamento gráfico de um máquina não depende apenas necessariamente das especificações do processador, da memória principal ou do disco, tendo em vista que houve uma grande variação dos tempos de execução do benchmark em máquinas com o modelo com processador, ou memória ou disco parecidos. Como por exemplo as máquinas Pedro Grijó e Matheus Figueiredo.
Esta variação pode ter sido causada, por um outro elemento que não foi citado nas especificações dos computadores, como o modelo da GPU, que possui grande influência em processamentos gráficos ou por concorrência de processos.

Porém ainda é possível visualizar uma certa relação entre o conjunto processador, memória, disco e o tempo de execução do programa. Como visto na máquina de Pedro Vasconcellos, que é uma máquina com clock de processador muito mais baixo e menos memória RAM, teve um tempo relativamente maior que as outras máquinas.

A ordem de desempenho decrescente neste benchmark foi:

 1. Pedro Grijó
 2. Gabriel Magalhães
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


##[**Ordenação**](https://github.com/Takeshi-/Projeto_1)

O benchmark ordenação, analisa o tempo de acesso a memória do computador trabalhando com ordenação de vetores muito longos.

Foram testadas 8 máquinas com especificações diferentes.
Cada máquina foi submetida a ordenar um vetor de tamanho 70000 com vários algorítimos de ordenação diferentes. O tempo de execução do programa é diretamente proporcional ao tempo de acesso à memória e ao clock do processador, porém podem existir alguns imprevistos como processos concorrentes que podem afetar o tempo de execução do benchmark.

Como o programa é single thread, o benchmark não leva em conta a existência de múltiplos cores no processador. Além disso, como o programa trabalha com vetor de inteiros, esse fato pode alterar o resultado final dependendo do modelo da arquitetura e do sistema operacional(32 bits ou 64 bits).

A ordem de desempenho decrescente neste benchmark foi:

 1. Pedro Meireles
 2. Pedro Grijó
 3. Gabriel Magalhães
 4. Rodrigo Silva
 5. Bruno Hori - Mamonas
 6. IC301-Titan
 7. Netbook - Felipe Emos
 8. Pedro Vasconcellos


----------


##[**Imagemagick**](https://github.com/FelipeEmos/mc723/tree/master/projeto1/benchmark1)

O ultimo benchmark utilizado foi Imagemagick, que também trabalha com processamento de imagens. Ele analisa a capacidade de processamento gráfico, multithread e manipulação de arquivos.

Foram testadas 9 máquinas com especificações diferentes. Em cada uma, foi gerada duas imagens, uma com ruído aleatório e outra com um padrão embutido no software, e em cada uma foi aplicada um filtro blur.
Neste teste o número de cores é um parâmetro primordial para seu desempenho, pois o benchmark atua em multithread. Além disso o tempo de execução é proporcional a capacidade de processamento de imagens da máquina. Porém o benchmark não diz nada a respeito de GPU, o que é um fator importante a se considerar em processamento gráfico.

A ordem de desempenho decrescente neste benchmark foi:

 1. Titouan Thibaud
 2. Cygnus X-1
 3. Gabriel Magalhães
 4. yk0 - Yugo Kuno
 5. Wendrey
 6. IC301-Titan
 7. IC-legiao
 8. IC-sepultura
 9. Netbook - Felipe Emos


----------
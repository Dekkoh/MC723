
#**MC723 - Exercicio 2**


###**Andre Tsuyoshi Sakiyama RA: 150547**



Os testes foram realizados em quatro programas com apenas um nível de cache. 
Os programas testados foram apsi_f2b, art_f2b, gzip_f2b, sixtrack_f2b.
Em cada programa, foram variados os tamanhos das caches L1 de instrução e dados até um valor onde a taxa de miss diminui pouco em relação ao crescimento da cache. Em seguida, com este tamanho ideal de cache, foram variados os tamanhos dos blocos da caches de instrução e dados, até achar um valor ótimo.



##**apsi_f2b**


![Variação do tamanho da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/apsi_f2b_L1_inst_size.png)



![Variação do tamanho do bloco da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/apsi_f2b_L1_inst_block_size.png)



![Variação do tamanho da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/apsi_f2b_L1_data_size.png)



![Variação do tamanho do bloco da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/apsi_f2b_L1_data_block_size.png)



Para o programa apsi_f2b, a melhor configuração de cache é:

Tamanho da L1 de instrução: 128K

Tamanho da L1 de dados: 128K

Tamanho do bloco da L1 de instrução: 256

Tamanho do bloco da L1 de dados: 256




----------




##**art_f2b**


![Variação do tamanho da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/art_f2b_L1_inst._size.png)


![Variação do tamanho do bloco da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/art_f2b_L1_inst._block_size.png)


![Variação do tamanho da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/art_f2b_L1_data_size.png)


![Variação do tamanho do bloco da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/art_f2b_L1_data_block_size.png)



Para o programa art_f2b, a melhor configuração de cache é:

Tamanho da L1 de instrução: 16K

Tamanho da L1 de dados: 32K

Tamanho do bloco da L1 de instrução: 128

Tamanho do bloco da L1 de dados: 1024



----------



##**gzip_f2b**


![Variação do tamanho da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/gzip_L1_inst._size.png)


![Variação do tamanho do bloco da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/gzip_L1_inst._block_size.png)


![Variação do tamanho da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/gzip_L1_data_size.png)


![Variação do tamanho do bloco da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/gzip_L1_data_block_size.png)



Para o programa art_f2b, a melhor configuração de cache é:

Tamanho da L1 de instrução: 64K

Tamanho da L1 de dados: 256K

Tamanho do bloco da L1 de instrução: 4096

Tamanho do bloco da L1 de dados: 256




----------



##**sixtrack_f2b**


![Variação do tamanho da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/sixtrack_L1_inst._size.png)


![Variação do tamanho do bloco da cache L1 de instruções](https://github.com/Dekkoh/MC723/blob/master/exercicio2/sixtrack_L1_inst._block_size.png)


![Variação do tamanho da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/sixtrack_L1_data_size.png)


![Variação do tamanho do bloco da cache L1 de dados](https://github.com/Dekkoh/MC723/blob/master/exercicio2/siztrack_L1_data_block_size.png)



Para o programa art_f2b, a melhor configuração de cache é:

Tamanho da L1 de instrução: 64K

Tamanho da L1 de dados: 32K

Tamanho do bloco da L1 de instrução: 512

Tamanho do bloco da L1 de dados: 256




----------
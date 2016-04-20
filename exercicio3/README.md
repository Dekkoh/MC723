#**MC723 - Exercicio 3**

###**Andre Tsuyoshi Sakiyama RA: 150547**

----------

Depois de configurar e compilar todos os programas necessários, foi criado um Hello World! básico em C.

    #include <stdio.h>
	int main() {
		printf("Hello World!\n");
		return 0;
	}


A partir do simulador de mips, foi contabilizado quantas instruções add este programa faria. O resulto foi zero instruções add, porém ocorreram diversas instruções addu. Este comportamento acontece devido ao fato de que em C, quando ocorre um overflow em um inteiro, o bit de overflow é descartado e o valor do inteiro é reiniciado, assim mesmo tentando forçar um overflow, este não ocorreria. Por este motivo, a ocorrência da intrução de add sempre é zero.

Em seguida o simulador mips foi recompilado para que gerasse estatisticas de todas as intruções. 
A partir desse ponto foram executados 3 programas diferente, sendo eles jpeg coder small, adpcm encoder small e adcpm encoder large, e contabilizado quantas instruções e quantos ciclos cada um gerava. Para nos auxiliar na contabilização, foi criado um [programa em C](https://github.com/Dekkoh/MC723/blob/master/exercicio3/arqRead.c).
Os resultados para cada programa foram:


----------
####JPEG CODER SMALL
Total de instruções: 29857500
Total de ciclos: 125750804
CPI médio: 4.212

----------
####ADPCM ENCODER SMALL
Total de instruções: 35758516
Total de ciclos: 75621190
CPI médio: 2.115


----------
####ADPCM ENCONDER LARGE
Total de intruções: 35739019
Total de ciclos: 75603202
CPI médio: 2.115
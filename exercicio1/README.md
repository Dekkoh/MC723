#**MC723 - Exercício 1**

####Nome: André Tsuyohi Sakiyama
####RA: 15047

>#####Todos os testes foram feitos na máquina metalica(143.106.16.4) da sala 301 do IC 3. Em cada teste foram realizados cinco medições e calculado a média aritimética entre o valores obitidos.


###**Passo 1: Compilação do primo.c**

- Sem opção extra
		Compilação: **0.100s**
		Execução: **0.400s**

- Opção -O0
		Compilação: **0.081s**
		Execução: **0.400s**
	
- Opção -O1
		Compilação: **0.085s**
		Execução: **0.398s**

- Opção -O2
		Compilação: **0.090s**
		Execução: **0.398s**

- Opção -O3
		Compilação: **0.083s**
		Execução: **0.392s**

>O melhor tempo de compilação foi com a opção -O0 e execução foi -O3.

----------
&nbsp;&nbsp;&nbsp;&nbsp;A opção -mtune diz ao compilador qual o tipo do processador que o usuário quer que ele se sintonize, criando assim um código mais otimizado para tal tipo de processador. Existem vaŕios parâmetros para esta opção, podendo ser generic, que sintoniza aos processadores mais comuns exitentes, ou native, que sintoniza ao processador nativo da máquina atual, ou escolher especificamente um processador em particular.

>No caso utilizei a -mtune=native, o tempo de compilação foi **0.077s** e de execução foi **0.400s**.

----------
###**Passo 2: Makefile**

&nbsp;&nbsp;&nbsp;&nbsp;Para compilar um programa com vários arquivos, além de fazer as alterações necessárias, basta colocar os nomes dos arquivos no comando de compilação. Um exemplo seria: 

```
executavel: arquivo1.c arquivo2.c
	gcc -o executavel arquivo1.c arquivo2.c
```

&nbsp;&nbsp;&nbsp;&nbsp;A compilação do programa com o Makefile foi ligeiramente mais devagar, com o tempo de **0.104s** e o tempo de execução foi de **0.399s**, isso se deve ao fato de que o compilador precisa procurar e achar todos o arquivos pertencentes ao programa em questão.

----------
###**Passo 3: Todos os primos entre 1 e n (não otimizado)**

&nbsp;&nbsp;&nbsp;&nbsp;Os arquivos foram devidamente modificados e testados. Os testes de execução foram feitos com o número 99999 como entrada. Os tempos de compilação e execução do programa com um arquivo fonte foram respectivamente **0.073s** e **1.735s**. Com dois arquivos fonte foram respectivamente **0.107s** e **1.734s**.
É um valor dentro do esperado, pois o tempo de compilação do programa com dois arquivos fonte foi mais lento do que o programa com um arquivo fonte.

----------
###**Passo 4: Todos os primos entre 1 e n (semi otimizado)**

&nbsp;&nbsp;&nbsp;&nbsp;Após modificar os arquivos para que o programa verifique apenas os números impares maiores que 2, os tempos foram medidos e registrados. Para o programa com um único arquivo fonte os tempos de compilação e execução foram respectivamente **0.076s** e **1.733s**. Para o programa com dois arquivos fonte os tempos foram respectivamente **0.109s** e **1.734s**.

----------
###**Passo 5: GPROF**

&nbsp;&nbsp;&nbsp;&nbsp;Utilizando a ferramenta gprof, é possível obter diversas informações sobre a execução do programa. Tais informações são úteis para a otimização do código. As principais informações fornecidas pela ferramenta são os tempos que cada uma das funções gastam e a suas porcentagem no tempo total do programa. No exercício dado, tanto no caso de um arquivo fonte, quanto no caso de dois arquivos fonte, a função que gastou mais tempo foi “primo”, pois ela é a única função além da “main”.

###**Passo 6: Paralelização**

&nbsp;&nbsp;&nbsp;&nbsp;O trecho do código que eu paralelizaria seria o for da busca se o número é primo ou não. O tempo de compilação com a paralelização foi de **0.088s** e de execução foi de **0.594s**. Podemos observar que o tempo de execução com a paralelização é bem menor do que sem ela, mas o tempo de compilação é um pouco maior, e isso está dentro do esperado.
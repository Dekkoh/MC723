#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	FILE *arq;
	char c, s[100000], *s1;
	int  i, j;
	long int count, cpi = 0;

	arq = fopen(argv[1], "r");
	if (arq == NULL) {
		exit(0);
	} else {
		j = 0;
		while(fgets(s, 100000, arq) != NULL) {
			if((strstr(s, "COUNT")) != NULL) {
				s1 = strtok(s, " ");
				i = 0;
				while(s1 != NULL){
					count = atoi(s1);
					if (i == 2) {
						if (j < 12 ) {
							count = count * 10;;
						} else if ( j >= 45) {
							count = count * 3;
						}
						cpi += count;
					}
					s1 = strtok(NULL, " ");
					i++;
				}
				j++;
			}
		}

		printf("CPI total = %d\n", cpi);
	}

	fclose(arq);
}

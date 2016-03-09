#include <stdio.h>
#include <stdlib.h>

int primo(int n)
{
  int i;

  for(i = 2; i < n; i ++)
    if (n % i == 0)
      return 0;
  
  return 1;
}

main(int argc, char *argv[ ]){

  int n = atoi (argv[1]);
  int i;
  int nPrimos = 1;
  
  if (n == 2) {
	printf("0");
	return 0;
  }

  for (i = 3; i < n; i = i + 2) {

    if (primo (i)) {
      nPrimos++;
    }

  }

  printf("%d\n", nPrimos);

  /*int n = 104395301;

  if (primo(n))
    printf("%d é primo.\n", n);
  else
    printf("%d não é primo.\n", n);*/
}	

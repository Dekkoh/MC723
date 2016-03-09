#include <stdio.h>
#include <stdlib.h>
#include "calc_primo.h"

main(int argc, char *argv[ ])
{

  int n = atoi (argv[1]);
  int i;
  int nPrimos = 0;

  for (i = 2; i < n; i++) {

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

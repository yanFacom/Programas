#include <stdio.h>

int main() 
{
  int n, i, mdc, no, divisor;

  i = 1;
  printf("calcula o mdc de n numeros, com numero > 0.\n");

  /* armazena n quantidade de numeros */
  printf("determine a quantidade de numeros: ");
  scanf ("%d", &n);

  /* confere o primeiro numero da sequencia */
  printf("digite o 1o. numero da sequencia: ");
  scanf ("%d", &mdc);
  
    do 
    {

    printf("digite o %do. numero da sequencia: ", i+1);
      scanf ("%d", &no);

      /* calcula omdc do numero */ 
      if (mdc < no) 
          divisor = mdc;
      else
          divisor = no;

      while (mdc % divisor != 0 || no % divisor != 0)
  divisor--; 
      
      /* armazena o mdc dos numeros do usuario */
      mdc = divisor;
      i++;
    } while (i < n);

  printf("MDC = %d\n", mdc);
  return 0;
} 
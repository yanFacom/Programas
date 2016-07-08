#include <stdio.h>

int main()
{
  int n, fat, multFat; 
  /* numero dado, possivel numero a ser fatorado, multiplicidade do fator. Respectivamente */


  printf("Digite um numero >1 a ser decomposto: ");
  scanf("%d", &n);
  printf("Decomposicao de %d em fatores primos:\n", n);  

  Fat = 2;
  do
    {
      multFat = 0;
      while (n % fat == 0) 
        {
          multFat ++;
          n = n / fat; 
        } 
      if (multFat != 0) 
        {
          printf("  fator %d multiplicidade %d\n", fat, multFat); 
        }
      Fat++;
    } while ( n > 1);

  return 0;
}
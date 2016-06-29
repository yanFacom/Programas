#include <stdio.h>
int main ()
{
    int dias, dsem, i, j;
    printf ("qts dias, dia da semana: ");
    scanf ("%d", &dias);
    scanf ("%d", &dsem);

    /* determinar onde comeca o mes*/
    for (i = 1; i < dsem; i++){
    printf ("\t");
    }

    j=i;
    /* quebra de linhas a cada fim de semana e contagem ate o dia final*/
    for (i = 1; i <= dias; i++, j++){
    printf ("\t%d", i);
        if (j % 7 ==0)             printf("\n");
        }
}

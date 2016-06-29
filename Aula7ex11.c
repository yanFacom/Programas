#include <stdio.h>
int main ()
{
    int n, i, soma, c;
    printf ("digite a qtd de sequencias:  ");
    scanf ("%d", &n);
    printf ("digite as sequencias, cada uma terminando em 0:");
    soma=0;
        do{

        do {
        scanf ("%d", &i);
        if (i % 2 == 0) soma = soma + i;

            }while (i != 0);
            printf ("%d", soma);
            soma = 0;
        c++;
        }



        while (c<n);

}

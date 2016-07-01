#include <stdio.h>
int main ()
{
    int n, ns, i, j, soma, l, normal = 0;
    printf ("digite a quantidade de numeros: ");
    scanf ("%d", &n);
    soma = 0;
    printf ("digite os numeros: ");
    do {
        scanf ("%d", &ns);
        i++;
            for (j = 2; j < ns; j++){
                    if (ns % j == 0){
                        normal = 1;
                        //printf ("%d\n", ns);
                    }

}
        if(normal == 0) soma = soma + ns;

        }

        while (i < n);
        printf ("%d", soma);


}

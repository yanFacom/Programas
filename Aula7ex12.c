#include <stdio.h>
int main ()
{
	int qt, num, i, fat, j, c;
	printf ("Digite a quantidade de numeros a serem fatorados: ");
	scanf ("%d", &qt);
	j = 0;
	c = 0;
	do {

        printf ("Digite o numero a ser fatorado: ");
        scanf ("%d", &num);
            for (fat = 1, i = 1; c < num; i++, c++){
                fat = fat * i;

        }
        printf ("%d \n", fat);
        fat = 1;
        i = 1;
        c = 0;
        j++;
	}while (j < qt);
	return 0;
}

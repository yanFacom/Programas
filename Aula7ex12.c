#include <stdio.h>
int main ()
{	
	int qt, num, i, fat, j, n;
	scanf ("%d", &qt);
	i = 0;
	j = 0;
	n = num;
	do {


		do{


		scanf ("%d", &num);
		num = num * (num - 1);
		printf ("%d \n", num);
		i++;
		} while (i < n);
				j++;
	}while (j < qt);
	return 0;
}
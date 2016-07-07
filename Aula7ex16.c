#include <stdio.h>

int main() 
{	
	int comeco, c, m, i;

	scanf ("%d", &m);

	
	comeco = 1;
	for (i = 1, c = 1; c <= m; c++){
		printf ("%d*%d*%d = %d", c, c, c, comeco);

		for ( i = 1; i < c; i++)
			printf (" + %d ", comeco + 2*i);
			comeco = comeco + 2*c;
			printf ("\n");
			
		

	}		
	printf ("\n");
}
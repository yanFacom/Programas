#include <stdio.h>

int main()
{
    int h, a, b, x = 0;
    int n;
    printf ("Digite um numero: ");
    scanf ("%d", &n);
        //h*h = a*a + b*b
        for (h = 1; h <= n; h++){

            for (a = 1; a <= n; a++){

                for (b = 1; b <=n; b++){

                    if (h*h == a*a + b*b && h*h != x){
                        x = h*h;
                        printf (" %d", h);
                    }
                }
            }
        }
}


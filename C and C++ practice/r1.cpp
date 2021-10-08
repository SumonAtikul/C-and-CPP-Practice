#include <stdio.h>
int main()
{
    int a, b, i,j,fact=1;

    printf("Enter lower limit: ");
    scanf("%d", &a);

    printf("Enter upper limit: ");
    scanf("%d", &b);

    for(i=0;a<=b;a++){
        for(j=1; j<=a; j++){
            fact = fact*j;
        }
        printf("Factorial of %d = %d\n", a, fact);
        fact=1;
    }

	return 0;
}

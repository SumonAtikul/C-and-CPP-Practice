#include <stdio.h>
int main()
{

    float n1, n2, n3, n4, n5, max;
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
    max = (n1 > n2 && n1 > n3 && n1 > n4 && n1>n5) ?
              n1 : ((n2 > n3 && n2 > n4 && n2>n5) ?
              n2 : (n3 > n4 && n3 > n5) ?
              n3 : (n4 > n5 ? n4 : n5));

    printf("%0.2f\n",max);
    return 0;
}

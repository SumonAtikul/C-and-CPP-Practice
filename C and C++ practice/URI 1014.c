#include<stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double s=a/b;
    printf("%0.3lf km/l\n", s);
    return 0;
}

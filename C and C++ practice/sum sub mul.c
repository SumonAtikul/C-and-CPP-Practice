#include<stdio.h>
int main()
{
    int Number1, Number2, sum, sub, mul;
    scanf("%d %d", &Number1, &Number2);
    if(Number1<Number2){
        sum=Number1+Number2;
        printf("Sum= %d\n", sum);
    }
    else if(Number1>Number2){
        sub=Number1-Number2;
        printf("Sub= %d\n", sub);
    }
    else if(Number1==Number2){
        mul=Number1*Number2;
        printf("Mul= %d\n", mul);
    }
    else{
        printf("Invalid number\n");
    }
    return 0;
}

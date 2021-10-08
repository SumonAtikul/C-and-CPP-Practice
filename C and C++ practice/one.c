#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c=='R' || c=='r'){
        printf("Red\n");
    }
    else if(c=='G' || c=='g'){
        printf("Green\n");
    }
    else if(c=='B' || c=='b'){
        printf("Blue\n");
    }
    else if(c=='Y' || c=='y'){
        printf("Yellow\n");
    }
    else if(c=='W' || c=='w'){
        printf("White\n");
    }
    else{
        printf("Other\n");
    }
    return 0;
}

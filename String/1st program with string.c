///string is a collection of character(character ar array)
#include<stdio.h>
int main()
{
    char ch[11]={'S','U','M','O','N',' ','I','S','L','A','M'};
    for(int i=0; i<11; i++){
        printf("%c", &ch[i]);
    }
    return 0;

}

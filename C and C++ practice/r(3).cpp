#include<stdio.h>
#include <string.h>
int main()
{
    char x[35], y[35], z[35];
    ///char y[35];
    ///char z[35];

    scanf("%s",&x);
    scanf("%s",&y);

    for(int i=0;i<=8;i++){
        if (x[i]=='0' && y[i]=='0')
            z[i]='0';

        if (x[i]=='1' && y[i]=='0')
            z[i]='1';


        if (x[i]=='0' && y[i]=='1')
            z[i]='1';


        if (x[i]=='1' && y[i]=='1')
            z[i]='0';
    }
    strrev(z);

    for(int i=8;i>=0;i--){
        printf("%c",z[i]);
    }
    return 0;
}
///10110011     10100101

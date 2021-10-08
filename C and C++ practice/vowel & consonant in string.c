#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int vowel = 0, consonant = 0;
    gets(ch);
    int len = strlen(ch);
    for(int i=0; i<len; i++){
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' ||
           ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            vowel++;
        }
        else if(ch[i] != ' '){
            consonant++;
        }
    }
    printf("vowel = %d\n", vowel);
    printf("consonant = %d\n", consonant);
    getch();
}



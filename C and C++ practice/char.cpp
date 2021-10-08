#include <stdio.h>

int main()
{
  	char str[100];
  	int i, alphabets, digits, special;
  	alphabets = digits = special = 0;

  	gets(str);

  	for(i = 0; str[i] != '\0'; i++)
  	{
  		if (str[i] >= 48 && str[i] <= 57)
  		{
  			digits++;
 		}
  		else if( (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) )
  		{
  			alphabets++;
  			continue;
  		}
  		else
    		special++;
	}
	printf("Digits= %d\n", digits);
	printf("specialcharacters = %d\n", special);

  	return 0;
}

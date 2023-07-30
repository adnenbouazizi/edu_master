#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, count = 1;
	int countlower = 0;

	printf("Entrer une chaîne de caractère :  ");
	gets(str);

	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			count++;
		}
		if ('a'<= str[i] && str[i] <= 'z')
        {
            countlower ++;
        }
	}
	printf("Le nombre total de mots dans cette chaîne est = %d \n", count);
	printf("Le nombre  est = %d", countlower);

	return 0;
}

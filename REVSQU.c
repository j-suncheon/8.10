#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 80

char* rev(char *p_s, char c)
{
	int len, i = 0, j = 0;
	char* temp;
	len = strlen(p_s);
	p_s = p_s + len;
	temp = (char*)malloc((len+1));

	while (i++ < len)
	{
		if (*(p_s-i)!=c)
		{
			*(temp+j) = *(p_s-i);
			j++;
		}
	}
	*(temp+j) = '\0';
	return temp;
}

int main()
{
	char c, s[SIZE];
	int i = 0;
	char *result;

	while ((s[i++] = getchar()) != '\n');

	s[--i] = '\0';

	c = getchar();

	result = rev(s, c);

	printf("%s\n", result);
	return 0;
}
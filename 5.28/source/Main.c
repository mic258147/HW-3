#include <stdlib.h>
#include <stdio.h>
char a, c;
int change(int x);


int main()
{
	
	scanf_s("%c", &a);
	change(a);
	system("pause");
	return 0;
}
int change(int x)
{
	if (x >= 97 || x <= 122)
	{
		c = x - 32;
		printf("%c", c);
	}
	if (x >= 65 || x <= 90)
	{
		c = x + 32;
		printf("%c", c);
	}
}
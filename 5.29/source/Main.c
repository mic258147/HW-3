#include <stdlib.h>
#include <stdio.h>

int function(int a,int b);
int x, y, c, d, e, i, j, total = 1;
int main()
{
	
	printf("input two integer:");
	scanf_s("%d%d", &x, &y);
	c = x;
	if (y > x)
	{
		c = y;
	}
	function(x, y);
	printf("%d", total);
	system("pause");
	return 0;
}
int function(int a,int b)
{
	for (i = 2; i <= c; i++)
	{
		d = 0;
		e = 0;
		while (a%i == 0)
		{
			a = a / i;
			d = d + 1;
		}
		while (b%i == 0)
		{
			b = b / i;
			e = e + 1;
		}
		if (e > d)
		{
			for (j = 0; j < e; j++)
				total = total * i;
		}
		else
		{
			for (j = 0; j < d; j++)
				total = total * i;
		}
	}
}
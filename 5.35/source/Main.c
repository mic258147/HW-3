#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, i;
	long long  j = 0, k = 1, s;
	printf("Enter a integer : ");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		s = k + j;
		printf("%d  ", j);
		k = j;
		j = s;
	}
	system("pause");
	return 0;
}
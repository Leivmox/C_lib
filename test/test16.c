#include <stdio.h>
int main()
{
	char c;
	int a;
	scanf("%c %d", &c, &a);
	if (c == 'A')
	{
		printf("����");
	}
	else if (c == 'B')
	{
		printf("����");
	}
	else if (c == 'C')
	{
		printf("÷��");
	}
	else(c == 'D')
	{
		printf("����");
	}

	// else if(a>=2 && a<=10)
	if (a >= 2 && a <= 10)
	{
		printf("%d", a);
	}
	else if (a == 1)
	{
		printf("A", a);
	}
	else if (a == 11)
	{
		printf("J");
	}
	else if (a == 12)
	{
		printf("Q");
	}
	else(a == 13)
	{
		printf("K");
	}
	return 0;
}
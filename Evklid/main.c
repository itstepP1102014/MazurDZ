#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, b, r;
	printf("Type 'a':\n");
	scanf("%d", &a);
	printf("Type 'b':\n");
	scanf("%d", &b);
	while ((a != 0) && (b != 0))
	{
		if (a > b)
		{
			a=a%b;
			r = a;
		}
		else
		{
			b=b%a;
			r = b;
		}
	}

	printf("GCD of 'a' and 'b' is %d", r);
	scanf("%d", &a);
	getc(stdin);

	return 0;
}

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, a1, b, b1, r, r1;
	printf("Type 'a':\n");
	scanf("%d", &a);
	printf("Type 'b':\n");
	scanf("%d", &b);
	a1=a;
	b1=b;
	while ((a != 0) && (b != 0))
	{
		if (a > b)
		{
			a=a%b;
			r = b;
			r1=a1*(b1/r);
		}
		else
		{
			b=b%a;
			r = a;
			r1=b1*(a1/r);
		}
	}

	printf("GCD of '%d' and '%d' is %d\n""LCD of '%d' and '%d' is %d", a1, b1, r, a1, b1, r1);

	return 0;
}

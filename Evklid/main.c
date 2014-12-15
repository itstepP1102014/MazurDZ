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
			r = b;
		}
		else
		{
			b=b%a;
			r = a;
		}
	}

	printf("GCD of 'a' and 'b' is %d", r);

	return 0;
}
        else
        {
            break;
        }
    }
    while(r!=0);

    return 0;
}

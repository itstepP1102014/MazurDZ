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
<<<<<<< HEAD

	return 0;
}
        else
        {
            break;
        }
    }
    while(r!=0);
=======
>>>>>>> 55a5606b3250e6eff3ead20e448f2a8d20a62c05

	return 0;
}

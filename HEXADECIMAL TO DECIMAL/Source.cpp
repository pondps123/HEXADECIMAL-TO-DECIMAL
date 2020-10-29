#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void decimal(char a[])
{
	int b[128], i = 0, *p, c = 0;
	while (a[i] != '\0')
	{
		if ( a[i] == 'A' || a[i] == 'a')
		{
			b[i] = 10;
		}
		else if (a[i] == 'B' || a[i] == 'b')
		{
			b[i] = 11;
		}
		else if (a[i] == 'C' || a[i] == 'c')
		{
			b[i] = 12;
		}
		else if (a[i] == 'D' || a[i] == 'd')
		{
			b[i] = 13;
		}
		else if (a[i] == 'E' || a[i] == 'e')
		{
			b[i] = 14;
		}
		else if (a[i] == 'F' || a[i] == 'f')
		{
			b[i] = 15;
		}
		else
		{
			b[i] = a[i] - 48;
		}
		i++;
	}
	i--;
	p = b;
	for (i; i >= 0; i--)
	{
		c += (*p * pow(16, i));
		p++;
	}
	printf("Decimal Number : %d", c);
}
int main()
{
	char a[128], i = 0;
	printf("Enter Hexadecimal Number : ");
	scanf("%s", a);
	while (a[i] != '\0')
	{
		if ((a[i] > 70 && a[i] < 97) || a[i] > 102)
		{
			printf("you enter wrong hexadecimal number ");
			return 0;
		}
		i++;
	}
	decimal(a);
	return 0;
}
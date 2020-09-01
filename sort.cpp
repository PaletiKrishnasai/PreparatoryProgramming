#include<bits/stdc++.h>
using namespace std;
#include "template.h"
float negate(float a);
float retain(float a);

int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("usage: ./sort size order num num num...\n");
		exit(1);
	}
	int n = atoi(argv[1]);
	int order = atoi(argv[2]);
	printf("size of list : %d\n", n);
	printf("order : %d\n", order);
	if (order > 2 || order < 1)
	{
		printf("usage :\n 1 -> Ascending\n2 -> Descending\n");
		exit(1);
	}

	int a[n];
	double b[n];
	char c[n];
	int check, j = 0, k = 0;
	float (*pointer)(float) = (order == 1) ? (::retain) : (::negate);
	
	if (isdigit(argv[3][0]))
	{
		check = 0;
		for (int i = 0; i < strlen(argv[3]); ++i)
		{
			if (argv[3][i] == '.')
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			for (int i = 3; i <= n + 2; ++i)
			{
				a[j] = atoi(argv[i]);
				j++;
			}
			// sort
			sort1(a, n, pointer);
			for (int i = 0; i < n; ++i)
			{
				printf("%d ",a[i] );
				/* code */
			}
		}
		if (check == 1)
		{
			for (int i = 3; i <= n + 2; ++i)
			{
				b[j] = atof(argv[i]);
				j++;
			}
			//sort
			sort1(b, n, pointer);
			for (int i = 0; i < n; ++i)
			{
				printf("%lf ",b[i] );
				/* code */
			}
		}
	}
	if (isalpha(argv[3][0]))
	{
		check = 2;
		for (int i = 3; i <= n + 2; ++i)
		{
			c[j] = argv[i][0];
			j++;
		}
		//sort
		sort1(c, n, pointer);
		for (int i = 0; i < n; ++i)
			{
				printf("%c ",c[i] );
				/* code */
			}

	}
	return 0;
}

float negate(float a)
{
	return (-1 * a);
}

float retain(float a)
{
	return (a);
}
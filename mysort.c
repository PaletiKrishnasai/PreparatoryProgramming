#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	if(argc < 4)
	{
		printf("usage: ./mysort size order num num num...\n");
		exit(1);
	}
	int n = atoi(argv[1]);
	int order = atoi(argv[2]);
	printf("size of list : %d\n",n );
	printf("order : %d\n",order);
	if(order>2)
	{
		printf("usage :\n 1 -> Ascending\n2 -> Descending\n");
		exit(1);
	}
	int a[20],j=0,b[20],k=0,x,y,z;
	for (int i = 3; i <= n+2; i++)
	{
		a[j] = atoi(argv[i]);
		j++;
		/* code */
	}
	for (k= 0; k < n; k++)
	{
		b[k]=a[k];
		/* code */
	}
	if(order == 1)
	{
		for (x=0;x<n-1;x++)
		{
			for(y=0;y<n-x-1;y++)
			{
				if(a[y]>a[y+1])
				{
					z = a[y];
					a[y] = a[y+1];
					a[y+1] = z;
				}
			}
		}
		printf("Sorted list in Ascending order :\n");
		for(x=0;x<n;x++)
		{
			printf("%d ",a[x]);
		}
	}
	if(order == 2)
	{
		for (x=0;x<n-1;x++)
		{
			for(y=0;y<n-x-1;y++)
			{
				if(b[y]<b[y+1])
				{
					z = a[y];
					a[y] = a[y+1];
					a[y+1] = z;
				}
			}
		}
		printf("Sorted list in Descending order :\n");
		for(x=0;x<n;x++)
		{
			printf("%d ",a[x]);
		}
	}


	/* code */
	return 0;
}
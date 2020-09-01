#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
void bubblesort(int a[],int n ,int (*pointer)(int));
int negate (int a);
int retain (int a);
int main(int argc, char *argv[])
{
	if(argc < 4)
	{
		printf("usage: ./sort size order num num num...\n");
		exit(1);
	}
	int n = atoi(argv[1]);
	int order = atoi(argv[2]);
	printf("size of list : %d\n",n );
	printf("order : %d\n",order);
	if(order>2 || order<1)
	{
		printf("usage :\n 1 -> Ascending\n2 -> Descending\n");
		exit(1);
	}
	int a[20],j=0,b[20],k=0;
	for (int i = 3; i <= n+2; i++)
	{
		a[j] = atoi(argv[i]);
		j++;
		/* code */
	}
	for (k= 0; k < n; k++)
	{
		b[k]=a[k];
	}

	int (*pointer)(int) = (order ==1)?(retain):(negate);
	bubblesort(a,n,pointer);

	for (int i = 0; i < n; i++)
	{
		printf("%d ",a[i] );
		/* code */
	}





	
	return 0;
}

void bubblesort(int a[],int n ,int (*pointer)(int))
{ 
	int x,y,z;
	for (x=0;x<n-1;x++)
		{
			for(y=0;y<n-x-1;y++)
			{
				if(pointer(a[y])>pointer(a[y+1]))
				{
					z = a[y];
					a[y] = a[y+1];
					a[y+1] = z;
				}
			}
		}
}

int negate (int a)
{
	return (-1*a);
}

int retain (int a)
{
	return (a);
}
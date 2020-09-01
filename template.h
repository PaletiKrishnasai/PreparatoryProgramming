template <class T>
T sort1(T a[],int n,float (*pointer)(float))
{
	int x,y;
	T z;
	for ( x = 0; x < n-1; ++x)
	{
		for (y = 0; y < n-x-1; ++y)
		{
			if (pointer(a[y])>pointer(a[y+1]))
			{
				z = a[y];
				a[y] = a[y+1];
				a[y+1] = z;
			}
		}
	}
}
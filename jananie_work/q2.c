#include<stdio.h>
void main()
{
	int a[40]={1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10};
	int i,j,n;

	for(i=0;i<11;i++)
	
	{
		n=0;
	for(j=0;j<40;j++)
	{
		if(i==a[j])
		{
			n=n+1;

		}
	}

	printf("frequncy of %d=%d",i,n);
	}
	}
	



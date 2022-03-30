#include<stdio.h>
void main()
{
   int n,i;
   printf("Enter the number");
   scanf("%d",&n);
   for(i=0;i<100;i++)
   printf("%d * %d=%d\n",n,i,n*i);
   
}

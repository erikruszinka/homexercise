/*
Author:Erik Ruszinka
Date:21.10.17
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 19

int main()
{
	int x[N];
	int i,z;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	int g=0;
	int h=0;
	int j=0;
	int k=0;
	int l=0;
	int m=0;
	int n=0;
	int o=0;
	int p=0;
	int max=0;
	int min=10000;
	srand(time(NULL));
	printf("Random Numbers: ");
	for(i=0;i<=N;i++)
	{
	x[i]=rand()%9990+10;
	printf("%d ",x[i]);
    }
    for(i=0;i<=N;i++)
    {
    z=x[i];
    if(z%2==0)
    {
    	a+=1;
	}
    else
	{
    	b+=1;
	}
    }
    printf("\nQuantity of binate numbers: %d\n",a);
    printf("Quantity of odd numbers: %d\n",b);
	for(i=0;i<=N;i++)
    {
    z=x[i];
    	if(z>9 && z<100)
    	{
    	c+=1;
		}
		
	}
	printf("Quantity of two-digit numbers: %d\n",c);
	for(i=0;i<=N;i++)
    {
    z=x[i];
    	if(z>99 && z<1000)
    	{
    	d+=1;
		}
		
	}
	printf("Quantity of three-digit numbers: %d\n",d);
	for(i=0;i<=N;i++)
    {
    z=x[i];
    	if(z>999 && z<10000)
    	{
    	e+=1;
		}
		
	}
	printf("Quantity of four-digit numbers: %d\n",e);
	for(i=0;i<=N;i++)
    {
    	z=x[i];
    	if(z>max)
    	{
    	max=z;
		}
	}
	printf("The highest number is: %d\n",max);
	for(i=0;i<=N;i++)
    {
    	z=x[i];
    	if(z<min)
    	{
    	min=z;
		}
	}
	printf("The lowest number is: %d\n",min);
	printf("vice-versa of random numbers: ");

	for (i=N;i>=0;i--)
	{
    	printf("%d ",x[i]);
	}
	printf("\nAll 2-digit Palindroms: ");
	for(i=0;i<=N;i++)
	{
		z=x[i];
		if(z<100)
		{
			g=(z%10);
			h=(z/10);
			if(g==h)
			{
				printf("%d ",z);
			}
		}
	}
	printf("\nAll 3-digit Palindroms: ");
	for(i=0;i<=N;i++)
	{
		z=x[i];
		if(z>99 and z<1000)
		{
			j=(z%10);
			k=(z/100);
			if(j==k)
			{
				printf("%d ",z);
			}
		}
	}
	printf("\nAll 4-digit Palindroms: ");
	for(i=0;i<N;i++)
	{
		z=x[i];
		if(z>999 and z<10000)
		{
		l=z;
		m=(z%10);
		z=(z/10);
		n=(z%10);
		z=(z/10);
		o=(z%10);
		z=(z/10);
		p=(z%10);
		}
		if((m==p) and (n==o))
		{
			printf("%d ",l);
		}
	}
	for (i=0;i<=N;i++)
	{
		z=x[i];
		if(z%7==0)
		{
			f+=1;
		}
	}
	printf("\nQuantity of numbers divided by 7: %d",f);
}

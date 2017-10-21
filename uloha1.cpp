/*
Author: Erik Ruszinka
Date: 10.10.17
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Enter the A side: ");
	scanf("%d",&a);
	printf("Enter the B side: ");
	scanf("%d",&b);
	printf("Enter the C side: ");
	scanf("%d",&a);
	if ((a+b)>c && (b+c)>a && (c+a)>b){
	 printf("The triangle can be constructed");	
	}
	else{
		printf("The triangle cannot be constructed");
	}

	
	
}

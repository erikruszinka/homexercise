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
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a ){
		printf("Ano, je to pravouhly trojuholnik!");
	}
	else{
		printf("Nie, nie je to pravouhly trojuholnik!");
	}

	
	
}

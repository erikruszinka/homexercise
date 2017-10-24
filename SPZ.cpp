/*
Author:Erik Ruszinka
Date:21.10.17
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int main()
{
	int i;
	char number[N];
	char pismena[N];
	
	srand(time(NULL));
	printf("Car Number: KE ");
	for(i=0;i<=N;i++)
	{
	    number[i]=rand()%10+48;
	}
    number[3]='\0';
    printf("%s",number);
    for(i=0;i<=N;i++)
    {
    	pismena[i]=rand()%26+65;
	}
	pismena[2]='\0';
    printf(" %s",pismena);

}

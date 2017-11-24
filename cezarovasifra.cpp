/*
*  Author: Erik Ruszinka
*  Date: 07-11-2017
*  Description: 
*  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#define N 20



    
 int main()
{
	FILE *cs;
	cs=fopen("encodedText.txt","r");
	if(cs==NULL)
	{
		printf("ERROR");
		return 1;
	}
	
	
	
	char z;
	while((z=fgetc(cs))!=EOF)
	if(z=='%')
	{
		printf(" ");
	}
	else if(z=='z' or z=='Z')
	{
		z=z-17;
		putchar(z);
	}
	else if(z=='j' or z=='J')
	{
		z=z+15;
		putchar(z);
	}
	else if((z>='a' and z<='i') or (z>='k' and z<='y') or (z>='A' and z<='I') or (z>='K' and z<='Y')){
		z=z-1;
		putchar(z);
	}
	else
	{
		putchar(z);
	}
}


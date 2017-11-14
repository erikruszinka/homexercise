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
int main()
{
	char number[15];
	char bankcode[10];
	int errors=0;
	int i;
	printf("Enter your account number: \n");
	scanf("%s", &number);
	
	int len=strlen(number);
	
	if(len!=10){
		errors++;
	}
	
	for(i=0;i<len;i++)
	{
		if(number[i]<0 && number[i]>9)
		{
			errors++;
		}
	}
	printf("Enter your bankcode: \n");
	scanf("%s", &bankcode);
	int lenn=strlen(bankcode);
	
	if(lenn!=4){
		errors++;
	}
	
	for(i=0;i<len;i++)
	{
		if(bankcode[i]<0 && bankcode[i]>9)
		{
			errors++;
		}
	}
	
	if(errors!=0) {
		printf("Error");
	}
	else {
	char iban[20];
	
	for(i=0;i<10;i++)
	{
		if(i>3)
		{
			iban[i]='0';
		}
		else{
			iban[i]=bankcode[i];
		}
	}
	
	for(i=10;i<20;i++)
	{
		iban[i]=number[i-10];
	}
	
	iban[20] = '2';
	iban[21] = '8';
	iban[22] = '2';
	iban[23] = '0';
	iban[24] = '0';
	iban[25] = '0';
	iban[26] = '\0';
	
	int x=0;
	int y=0;
	for(i=0;i<26;i++)
	{
		y=0;
		y=(iban[i]-48);
		x=((x*10)+y)%97;
	}
	
	int z=98-x;
	
	char dd=z/10;
	char dz=z%10;
	
	char iban2[30];
	iban2[0]='S';
	iban2[1]='K';
	iban2[2]=dd+48;
	iban2[3]=dz+48;
	for(i=4;i<8;i++){
		iban2[i] = bankcode[i-4];
	}
	
	for(i=8;i<14;i++)
	{
		iban2[i]='0';
	}
	
	for(i=14;i<26;i++)
	{
		iban2[i]=number[i-14];
	}
	
	  printf("\nYour IBAN: %s", iban2);
	}
	
}

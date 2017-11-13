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
#define N 15


    typedef struct
	{
       char name[20];
	   int age;
	   float salary;	
	} person;
 int main()
{
 person emp1,emp2;
 strcpy(emp1.name,"Viktor");
 emp1.age=32;
 emp1.salary=1007,13;   
 strcpy(emp2.name,"Erik");
 emp2.age=18;
 emp2.salary=900,50;
  printf("Is %s, %d, %1.2f",emp1.name, emp1.age, emp1.salary);
  
 person employees[20];
  printf("\nEnter name: ");
  scanf("%s", &employees[0].name);
  printf("\nEnter age: ");
  scanf("%d", &employees[0].age);
  printf("\nEnter salary: ");
  scanf("%d", &employees[0].salary);
  
  
  int i,j;
  for(i=1;i<20;i++)
  {
  	for(j=0;j<6;j++)
	{
  	employees[i].name[j]=rand()%26+'A';
    }
  	employees[i].name[6]='\0';
  	employees[i].age=rand()%33+18;
  	employees[i].salary=rand()%1000+500;
   }
  	
  	for(i=0;i<20;i++)
  	{
  		printf("\nName: %s, age: %d, salary: %1.2f", employees[i].name, employees[i].age, employees[i].salary);
	  }
	  float result=0;
	  float finalresult=0;
	  int age=0;
	  int ageres=0;
	  int count=1;
	  int count1=1;
    for(i=0;i<20;i+=2)
    {
    	result=(employees[i].salary)+(employees[i+1].salary);
    	finalresult=(finalresult+result);
    	
	}
	finalresult=(finalresult/20);
	for(i=0;i<20;i+=2)
    {
    	age=(employees[i].age)+(employees[i+1].age);
    	ageres=(ageres+age);
    	
	}
	ageres=(ageres/20);
	printf("\nBetween 20 and 30 years: ");
	for(i=0;i<20;i++)
	{
		if(employees[i].age>=20 && employees[i].age<=30)
		printf("%s ",employees[i].name);
		count++;
	}
	printf("\nSalary above 1300: ");
	for(i=0;i<20;i++)
	{
		if(employees[i].salary>=1300)
		printf("%s ",employees[i].name);
		count1++;
	}
		printf("\nAge average: %d",ageres);
    	printf("\nSalary average: %1.2f",finalresult);
    	printf("\nEmployees between 20 and 30 year: %d", count);
    	printf("\nSalary above 1300: %d",count1);
    	
    	
}


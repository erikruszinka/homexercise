#include <stdio.h>
#include <math.h>

int main()
{
	int day,month;
	printf("Insert a month:");
	scanf("%d",&month);
	printf("Insert a day:");
	scanf("%d",&day);
	switch(month){
		case 12:
			if (day>=1 && day<=21)
			{
				printf("Sagittarius");
			 } 
			else if (day>=22 && day<=31) {
				printf("Capricorn");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 1:
			if (day>=20 && day<=31)
			{
				printf("Aquarius");
			 } 
			else if (day>=1 && day<=19) {
				printf("Capricorn");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 2:
			if (day>=1 && day<=18)
			{
				printf("Aquarius");
			 } 
			else if (day>=19 && day<=30) {
				printf("Pisces");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 3:
			if (day>=1 && day<=20)
			{
				printf("Pisces");
			 } 
			else if (day>=21 && day<=31) {
				printf("Aries");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 4:
			if (day>=1 && day<=19)
			{
				printf("Aries");
			 } 
			else if (day>=20 && day<=30) {
				printf("Taurus");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 5:
			if (day>=1 && day<=20)
			{
				printf("Taurus");
			 } 
			else if (day>=21 && day<=31) {
				printf("Gemini");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 6:
			if (day>=1 && day<=20)
			{
				printf("Gemini");
			 } 
			else if (day>=21 && day<=30) {
				printf("Cancer");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 7:
			if (day>=1 && day<=22)
			{
				printf("Cancer");
			 } 
			else if (day>=23 && day<=31) {
				printf("Leo");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 8:
			if (day>=1 && day<=22)
			{
				printf("Leo");
			 } 
			else if (day>=23 && day<=30) {
				printf("Virgo");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 9:
			if (day>=1 && day<=22)
			{
				printf("Virgo");
			 } 
			else if (day>=23 && day<=31) {
				printf("Libra");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 10:
			if (day>=1 && day<=22)
			{
				printf("Libra");
			 } 
			else if (day>=23 && day<=30) {
				printf("Scorpio");
			} 
			else{
				printf("ERROR!");
			}
			break;
		case 11:
			if (day>=1 && day<=21)
			{
				printf("Scorpio");
			 } 
			else if (day>=22 && day<=31) {
				printf("Sagittarius");
			} 
			else{
				printf("ERROR!");
			}
			break;
		default:printf("Invalid month");break;
	}
}

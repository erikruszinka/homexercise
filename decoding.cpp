/*
Autor: Erik Ruszinka
Dátum: 28-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define A 36
#define B 2
int main(int argc, char const *argv[])
{
	FILE *f=fopen("codeTable.txt","r");
	FILE *output, *text;
	int i=0,j=0;
	
	char z;
	
	if(f==NULL)
	{
	printf("Can't find file");
	return 1;
	}
	
	char key[70], change;
		while((change=fgetc(f))!=EOF)
		{
			if (isalpha(change) || isdigit(change)) {
      key[i] = change;
      i++;
          }
		}
		fclose(f);
   
  text = fopen("secretCode.txt" , "r");
  output = fopen("DecodedText.txt" , "w");
  if (text == NULL)
	{
		printf("File error");
    fclose(output);
		return 1;
  }
  else if (output == NULL) {
    printf("File error");
    fclose(text);
		return 1;
  }
	else
	{
    while ((change = fgetc(text)) != EOF) {
      if (isalnum(change)) {
        if (islower(change)) {
          for (j = 1; j < i; j+=2) {
            if (change == tolower(key[j])) {
              change = tolower(key[j-1]);
              break;
            }
          }
        }
        else
        {
          for (j = 1; j < i; j+=2) {
            if (change == key[j]) {
              change = key[j-1];
              break;
            }
          }
        }
      }
      fputc(change, output);
    }
  }
  fclose(output);
  fclose(text);
  return 0;
}

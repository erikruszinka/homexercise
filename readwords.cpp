#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define N 16

struct person
{
    int id;
    char fname[20];
    char lname[20];
};
 
int main ()
{
    FILE *outfile;
    FILE *content;
    
    content = fopen ("data.txt", "r");
     
     if (content == NULL)
    {
        fprintf(stderr, "\nError opend file\n");
        exit (1);
    }
    // open file for writing
    outfile = fopen ("person.txt", "w");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opend file\n");
        exit (1);
    }
 
    struct person input1 = {1, "rohan", "sharma"};
    struct person input2 = {2, "mahendra", "dhoni"};
     
    // write struct to file
    fwrite (&input1, sizeof(struct person), 1, outfile);
    fwrite (&input2, sizeof(struct person), 1, outfile);
     
    if(fwrite != 0) 
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");
    return 0;
}


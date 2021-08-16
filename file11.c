#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

FILE*fp;
char file[100];
int i,n;
printf("enter the file name to open \n");
scanf("%s",file);
fp=fopen(file,"r");
if(fp==NULL)
   {
   printf("error");
   exit (0);
   }
   else
   {

   printf("file opened successfully\n");
   char line;

	while((line=getc(fp)) !=EOF)   
	{
 


     	printf("%c\n",line);

	}
	return 0;     
      }
   
 }
   


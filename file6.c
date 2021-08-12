#include<stdio.h>
#include<stdlib.h>
int main ()
  {
	FILE*fp;
	char embedded[10];
	fp=fopen("DB.c","w");
	if(fp==NULL)
	{
	  printf("not opened");
	}
	else
	{
	 printf("file opened successfuly");
	 
	 while(fgets(embedded,10,fp)!= NULL)
	 {
	     printf("%s",embedded);
	  }

	printf("data successfully read from the file DB.c\n");

	  fclose(fp);
	 }
	 return 0;
    }

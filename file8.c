#include<stdio.h>
#include<stdlib.h>
int main ()
  {
  	FILE* fp;
	char str1[10]="embedded";
	char str2[20]="systems";
	fp=fopen("gfr.c","w");
	if(fp==NULL)
	{
	printf("error\n");
	}
	else
	{
	printf("file opened successfully");
	
	fscanf(fp,"%s,%s",str1,str2);
	
	printf("str1=%s, str2=%s\n",str1,str2);

	fprintf(fp,"%s,%s",str1,str2);
 
	 fclose(fp);
	 }
    }

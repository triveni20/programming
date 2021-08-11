#include<stdio.h>   
#include<stdlib.h>  
int main()
  {
	FILE* fp;
	int i,a[10];
	int high,low;
	fp=fopen("triveni/doccuments/lowhighnum.c","r");

	fp=fopen("triveni/doccuments/lowhighnum.c","w");
	if(fp==NULL)
	{
		printf("null");
	exit(1);
	}

	

	printf("enter the number:",i);
	fprintf(fp,"%d\n",i);
   	fprintf(stdout,"%d %d\n",high,low);


	scanf("%d",&a[i]);
	fscanf(fp,"%d",&a[i]);
	fscanf(stdin,"%d",&a[i]);
	
	fclose(fp);  
        
}


	

	


   
   
	  

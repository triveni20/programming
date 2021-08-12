#include<stdio.h>   
#include<stdlib.h>  
int main()
  {
	FILE* fp;
	int i,a[10];
	int high,low;


	fp=fopen("triveni/doccuments/lowhighnum.c","w");
	if(fp==NULL)
	{
		printf("null");
	exit(1);
	}
else{     	
	printf("enter the number:\n",i);
	fprintf(fp,"%d %d\n",high,low);
	fscanf(fp,"%d %d",&high,&low);  
	}

	fclose(fp);
return 0;
}




	
	 
	











	    	

        



	

	


   
   
	  

#include<stdio.h>
int main (int argc, char**argv)
{
    FILE *fp=NULL;
    char ch;
    if(argc!=3)
    {
       printf("invalid arguments\n");
       printf("USAGE:<a>  <file path>  <mode>\n");
       return 0;
     }
     fp=fopen(argv[1],argv[2]);
     if(fp!=NULL)
     {
         printf("file opend successfully\n");
      }
      else
      {
          perror("fopen");
      }



	fprintf(fp,"%s,%d,%f","purna",98,98.7);
	fclose(fp);     
  }
  

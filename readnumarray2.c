#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char*argv[])
{
  char const* const filename ="number.txt"; 

  FILE *file =fopen(filename,"r");

  if(!file)
   {
    printf("\n unable to open :%s",filename);
    return -1;
   }
   char line[20];
   int a[20];
   int i;
  while(fscanf(file,"%d",&a[i])!=EOF)  
   {
      i++;    
   }
   for(i=0;i<20;i++)
    {
      printf("a[%d]=%d",i,a[i]);  
      printf("\n");   
    }
   fclose(file); 
    return 0;

}
  

    

 













   

    
    








  









 

     
    




       



 

















 





 













     














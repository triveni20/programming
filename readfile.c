include <stdio.h>

int main(int argc,char*argv[])
{
  char const* const filename = "file1.c";
  FILE *file =fopen(filename,"r");

  if(!file)
   {
    printf("\n unable to open :%s",filename);
    return -1;
   }
   char line[100];
   while(fgets(line,sizeof(line),file))
   {
    printf("%s",line);
   }
fclose(file);
return 0;
}



out put:-
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   FILE *file=NULL;
   printf("enter the file name\n");
   scanf("%s",file);
   file=fopen("file","r");
   if(file != NULL)
    {
       printf("file opened succesfully\n");
   }
   else 
    {
     perror("open file");
    }
   char line[36];
    while(fgets(line , sizeof(line),file) != EOF)
    {
        printf("%s",line);
    }
    
    fclose (file);

}

triveni@triveni-virtual-machine:~/documents$ 

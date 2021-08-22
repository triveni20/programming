#include <stdio.h>

int main(int argc,char*argv[])
{
  char const* const filename = "numbers.txt";
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

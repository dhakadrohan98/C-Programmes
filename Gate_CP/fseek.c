#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("geek.txt","w+");
   fputs("This is tutorialspoint.com", fp);

   fseek( fp,4, SEEK_SET );
   fputs(" C Programming Language", fp);
   fclose(fp);

   return(0);
}

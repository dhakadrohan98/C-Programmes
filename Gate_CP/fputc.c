#include <stdio.h>

int main () {
   FILE *fp;
   int ch;

   fp = fopen("file.txt", "w+");
   for( ch = 65 ; ch <= 90; ch++ ) {
      fputc(ch, fp);
   }
   fclose(fp);

   return(0);
}

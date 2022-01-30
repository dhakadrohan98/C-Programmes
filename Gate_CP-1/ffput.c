#include <stdio.h>

int main () {
   FILE *fp;
   int ch;

   fp = fopen("small.txt", "w+");
   for( ch = 97 ; ch <= 122; ch++ ) {
      fputc(ch, fp);
   }
   fclose(fp);

   return(0);
}

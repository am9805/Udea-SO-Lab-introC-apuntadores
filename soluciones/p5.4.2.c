#include <stdio.h>


 int main(void)
 {
   char str[1000];
   int ch, n = 0;
   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;
   }   
   for (int i = 0; i < n; ++i){
       if(str[i]>=97 && str[i]<=122){
        putchar(str[i]-32);
    }else{
        putchar(str[i]);
    }
   }
   
      

   putchar('\n');
   return 0;
 }
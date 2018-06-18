#include<stdio.h>
#include<string.h>
 
int main(void) {

   char str[50];
   char temp;
   int i = 0;
   int j = 0;
 
   printf("Enter a message: ");
   fgets(str,50, stdin);

	j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
    
   printf("Reversal is: %s\n", str);
   return 0;
   
}


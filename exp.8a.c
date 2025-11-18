/* Name : Nidhi Nandepalli
UIN:251P092
CLASS: COMP/D */

#include<stdio.h>

int main(){
 char str[100];
 int i = 0;

 printf("Enter a string: ");
 scanf("%s",str);

  while(str[i]!= '\0'){
    i++;
  }
  printf("Length = %d", i);

   return 0;
   }

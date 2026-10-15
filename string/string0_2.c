#include<stdio.h>

int main(){
   char s[] = "hello";
   char *p = s;
   
   printf("%s \n",p);
   
   *(p+1) = 'E';
 
   
   printf("%s \n",p);
   printf("%s \n",s);
   printf("%c \n",p[1]);
   printf("%c \n",*(p+1));
   
   return 0;
}
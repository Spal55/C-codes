#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
   int c=0,alpha[26]={0},temp;
   printf("Enter a string\n");
   gets(str);

   while (str[c]!='\0') 
   {
      if (str[c]>='a'&&str[c]<='z')
      {
         temp=str[c]-'a';
         alpha[temp]++;
      }
      c++;
   }
   for (c=0;c<26;c++)
         printf("%c is present %d times.\n",c+'a',alpha[c]);

   return 0;
}
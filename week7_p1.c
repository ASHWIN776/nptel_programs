#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */

//gets(); can also be used
int len=0;
int i;

while(ch[len]!='\0')
  len++;

for(i=0;i<len;i++)
{
if(ch[i]>=65 && ch[i]<=90)
  upper++;

  if(ch[i]>=97 && ch[i]<=122)
    lower++;

}
 printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
   printf("Lowercase Letters : %d\n", lower); /*prints number of lowercase letters */

   return (0);
}


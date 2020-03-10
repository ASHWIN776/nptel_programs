#include <stdio.h>
 int main()
{
    int N;
    scanf("%d",&N); /*The number is accepted from the test case data*/


int i,count=0,num;
num=N;

while(num!=0)
{

num=num/10;
  count++;
}
printf("The number %d contains %d digits.",N,count);
return 0;
}

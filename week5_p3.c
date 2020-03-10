#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */



int num=N;
while(num%2==0)
{
num=num/2;
  if(num==1)
    break;
  }

if(num!=1)
  printf("%d cannot be expressed as power of 2.",N);
else
  printf("%d is a number that can be expressed as power of 2.",N);

return 0;
}

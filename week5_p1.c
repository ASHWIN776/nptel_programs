#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* An integer number taken as input from test cases */



int i,sum=0;
for(i=1;i<=N/2;i++)
{
if(N%i==0)
  sum=sum+i;

}
if(sum==N)
  printf("\n%d is a perfect number.",N);
else
  printf("\n%d is not a perfect number.",N);

return 0;
}

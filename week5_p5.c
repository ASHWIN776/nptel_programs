#include<stdio.h>
int main()
{
int N;
scanf("%d", &N); /*The value of N is taken as input from the test case */

int i,j;
for(j=0;j<N;j++)
{for(i=1;i<=N-j;i++)
  printf("*");
 printf("\n");}


return 0;
}

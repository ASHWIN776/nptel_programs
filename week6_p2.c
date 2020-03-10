#include<stdio.h>

int main() {
   int arr[20], i, n;

   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++)
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
int rev[20];
int j=0;

for(i=n-1;i>=0;i--)
{

rev[i]=arr[j];
  j++;

}

for(i=0;i<n;i++)
  arr[i]=rev[i];

  for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements
   }

   return (0);
}



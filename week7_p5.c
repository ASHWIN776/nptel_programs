#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0};
//str[100] is for storing the sentence and substr[50][50] is for storing each word.

gets(str); //Accepts the sentence from the test case data.

int i,j,count=1,mat[50], count1=0,k=0;

int len=strlen(str);


for(i=0;i<len;i++)
{ if(str[i]==' ')
  count++;
}


for(i=0;i<count;i++)
{

for(j=0; ;j++)
{
 while(str[k]!=' ')
 {if(str[k]=='.')
  break;
substr[i][j]=str[k];

 k++;
 j++;
 }

  if(str[k]==' ')
  {k++;
    break;
  }
  if(str[k]=='.')
    break;


}




}
//kinda bubble sort
char temp[40];
for(i=0;i<count;i++)
{  for(j=0;j<count-i-1;j++)
  {  if(strlen(substr[j])>strlen(substr[j+1]))
       { strcpy(temp,substr[j]);
         strcpy(substr[j],substr[j+1]);
         strcpy(substr[j+1],temp);
       }

  }

}
printf("the longest word= %s\n the shortest word=%s",substr[count-1],substr[0]);



return 0;

}

#include <stdio.h>

int main()
{
  int n,d,n1,sum=0;
  printf("Enter the number\n");
  scanf("%d",&n);
  n1=n;
  while(n>0)
    {
       d=n%10;
       sum=sum+d;
       n=n/10;
    }
   if(n1%sum==0)
      printf("Harshad number");
   else
     printf("Not a Harshad number");
  return 0;
}
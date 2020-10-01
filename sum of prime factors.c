#include <stdio.h>
int isPrime(int n)
{
    int i;
    for (i=2;i<=n/2 ;i++)
        if(n%i==0)
          return 0;
  return 1;
}
int main()
{
  int n,i,sum=0;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
   {
      if(n%i==0) 
       {
          if(isPrime(i))
            sum+=i;
       }
   }
  printf("%d",sum);
  return 0;
}
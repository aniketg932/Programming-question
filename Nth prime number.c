#include<stdio.h>
int isprime(int n)
 {
    int i;
    for(i=2;i<=n/2;i++)
      if(n%i==0)
         return 0;
      return 1;
 }
 int main()
  {
     int n,count=0;
     printf("Enter a number\n");
     scanf("%d",&n);
     int i=2;
     here:
       if(isprime(i))count++;
       if(count==n)goto there;
       i++;
     goto here;
     there:
  printf("%d",i);
  return 0;     
  }
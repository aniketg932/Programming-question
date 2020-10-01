#include <stdio.h>
int main()
{
	printf("Enter a number:\n");
	int n,i;
	scanf("%d",&n);
  int f1=0,f2=1,sum=0,count=0;
  while(count<n)
   {
      sum=(f1+f2);
      f1=f2;
      f2=sum;
       if(f2-f1 > 1)
        {
          for(i=f1+1;i<f2;i++)
           {
             printf("%d ",i);
             count++;
             if(count==n)
               break;
           }
        }
   }
  return 0;
} 
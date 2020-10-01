#include <stdio.h>
int fibonacci(int n)
 {
     int f[n],i;
     f[0]=0;
     f[1]=1;
     
    for(i=2;i<=n;i++)
     {
          f[i]=f[i-1]+f[i-2];

     }
    return f[n-1]; 
 }

int main()
{
	int n;
  printf("Enter the number\n");
	scanf("%d",&n);
	fibonacci(n);
	printf("%d",fibonacci(n));	
    return 0;
}   
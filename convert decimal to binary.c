#include <stdio.h>

void convert(int n)
 {
   int bin[32], i=0;
   while(n>0) 
    {
       bin[i]=n%2;
       n=n/2;
       i++;
    }
  for(int j=i;j>=0;j--)
   {
     printf("%d",bin[j]);
   }
 } 
int main()
 {
    int n;
    printf("Enter the numbers\n");
    scanf("%d",&n);
    convert(n);
    return 0;
 }
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,x,f=1,sum=1;
    printf("enter the value of upto which you want to find the sum");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1;i<n;i++)
    {
        
      sum=sum+pow(x,i)/f*i;

    }
    printf("%d",sum);
    
}

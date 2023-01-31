#include<stdio.h>
void main()
{
    int N,arr[10],i=1,r;
    printf("enter the odd digit no.: ");
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%10;
        arr[i]=r;
        i++;
         N=N/10;
    }

      int sum1=0,sum2=0,mid;
      mid=i/2;
   for(i=1;i<mid;i++)
   {
    sum1=sum1+arr[i];
    sum2=sum2+arr[mid+i];
   }
   
   if(sum1==sum2)
   printf("balance number");
   else
   printf("not balance number");
}

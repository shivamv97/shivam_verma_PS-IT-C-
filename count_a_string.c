#include<stdio.h>
#include<string.h>
int reverse()
{
    char s[20];
    int i,l=0;
    printf("enter the string which is to be reversed\n");
    gets(s);
    printf("the reversed string is %s\n",strrev(s));
    for(i=0;s[i]!='\0';i++)
    {
        l=l+1;   
    }
    return l;

    

}
void main()
{
    int l;
    l=reverse();
   
   printf("the length of string is %d",l);


}
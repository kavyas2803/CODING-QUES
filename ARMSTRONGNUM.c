#include<stdio.h>
int main()
{
   int n,sum=0,r,temp;
   printf("\n enter an number");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
       r=n%10;
       sum=sum+(r*r*r);
       n/=10;
   }
   if(temp==sum)
   {
       printf("%d is an armstrong number",temp);
   }
   else
   {
       printf("%d is not an armstrong number",temp);
   }
}

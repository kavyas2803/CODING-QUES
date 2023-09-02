#include <stdio.h>

int main() {
   int n,digit,sum=0;
   printf("Enter a number");
   scanf("%d",&n);
   int sq=n*n;
   while(sq!=0)
   {
     digit=sq%10;
     sum+=digit;
     sq/=10;
   }
    if(n==sum)
      printf("\n NEON");
      else 
        printf("\n NOT NEON");
    return 0;
}

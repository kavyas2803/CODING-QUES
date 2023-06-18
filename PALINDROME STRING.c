#include<stdio.h>
int main()
{
    char string[20];
    int i,length;
    int isPalindrome=1;
    printf("\n Enter the string");
    scanf("%s",string);
    length=strlen(string);
    for(int i=0;i<length/2;i++)
    {
        if(string[i]!=string[length-i-1])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("%s is a palindrome",string);
    }
    else
    {
        printf("%s is not a palindrome",string);
    }
}

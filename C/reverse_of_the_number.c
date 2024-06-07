#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rev=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=n;i!=0;i=i/10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    printf("Reversed number is: %d",rev);
    getch();
}
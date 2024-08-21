#include<stdio.h>
#include<conio.h>
int fac(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fac(n-1);
}
void main()
{
    int n,f;
    printf("Enter an no.: ");
    scanf("%d",&n);
    f=fac(n);
    printf("Factorial %d",f);
    getch();
}
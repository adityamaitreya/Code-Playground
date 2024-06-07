#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,flag=0;
    printf("Enter an number:");scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==1)
        {
            printf("%d is not prime number",num);
        }
        else
        {
            printf("%d is a prime number",num);
        }
    
    getch();
}
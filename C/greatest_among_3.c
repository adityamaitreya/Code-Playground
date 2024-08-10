#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,grt;
    printf("Enter 3 numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    grt=g(a,b,c);
    printf("Result:%d",grt);
}
int g(a,b,c)
{
//int grt;
///using conditional operator and logical operator
 
 //grt=(a>b&&b>c?a:(b>c?b:c));
 //return grt;

///using conditional operator and without logical operator 
//  grt=(a>b?(a>c?a:c):(b>c?b:c));
//  return grt;

///using conditional statement

 if (a>b && b>c)
    return a;
 else
 {
    if(b>c)
    return b;
    else
    return c;
 }
}
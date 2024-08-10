// // #include <stdio.h>

// // int main() {

// //   // int a, b;
// //   // printf("enter num: ");
// //   // scanf("%d", &a);
// //   // scanf("%d", &b);
  
// //   // int sum=a+b;
// //   // int diff=a-b;
// //   // printf("Sum is: %d\n", sum);
// //   // printf("Difference is: %d", diff);
  
// //     int var1, var2, temp;
// //     printf("Enter two integers\n");
// //     scanf("%d%d", &var1, &var2);
// //     printf("Before Swapping\nFirst variable = %d\nSecond variable = %d\n", var1, var2);
// //     var1 = var1 + var2;
// //     var2 = var1 - var2;
// //     var1 = var1 - var2;
// //     printf("After Swapping\nFirst variable = %d\nSecond variable = %d\n", var1, var2);
// //     return 0;

// //   }
// #include<stdio.h>
// int main()
// {
// int a=12;
// void *ptr=(int*)&a;
// printf("%d", *ptr);
// getchar();
// return 0;
// }
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,grt;
    printf("Enter 3 numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
     if (a>b && b>c)
     printf("rr%d",a);
 else
 {
    if(b>c)
    printf("rr%d",b);
    else
    printf("rr%d",c);
    //printf("Result:%d",);
}}
// int g(a,b,c)
// {int grt;
// ///using conditional operator and logical operator
 
//  //grt=(a>b&&b>c?a:(b>c?b:c));
//  //return grt;

// ///using conditional operator and without logical operator 
// //  grt=(a>b?(a>c?a:c):(b>c?b:c));
// //  return grt;

// ///using conditional statement

//  if (a>b && b>c)
//     return a;
//  else
//  {
//     if(b>c)
//     return b;
//     else
//     return c;
//  }
// }
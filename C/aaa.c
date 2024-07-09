// #include <stdio.h>

// int main() {

//   // int a, b;
//   // printf("enter num: ");
//   // scanf("%d", &a);
//   // scanf("%d", &b);
  
//   // int sum=a+b;
//   // int diff=a-b;
//   // printf("Sum is: %d\n", sum);
//   // printf("Difference is: %d", diff);
  
//     int var1, var2, temp;
//     printf("Enter two integers\n");
//     scanf("%d%d", &var1, &var2);
//     printf("Before Swapping\nFirst variable = %d\nSecond variable = %d\n", var1, var2);
//     var1 = var1 + var2;
//     var2 = var1 - var2;
//     var1 = var1 - var2;
//     printf("After Swapping\nFirst variable = %d\nSecond variable = %d\n", var1, var2);
//     return 0;

//   }
#include<stdio.h>
int main()
{
int a=12;
void *ptr=(int*)&a;
printf("%d", *ptr);
getchar();
return 0;
}
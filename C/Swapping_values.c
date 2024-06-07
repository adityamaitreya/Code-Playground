// Swap 2 term using 3rd term
// Call By values
#include<stdio.h>
#include<conio.h>
void swap(int A,int B)
{
    int temp;
    temp=A;
    A=B;
    B=temp;
    printf("\nAfter swapping N1:%d , N2:%d",A,B);
}
void main()
{
    int N1,N2;
    printf("Enter 2 numbers:");
    scanf("%d%d",&N1,&N2);
    printf("Before swapping N1:%d , N2:%d",N1,N2);
    swap(N1,N2);
    getch();
}

// Call By values

// #include<stdio.h>
// #include<conio.h>
// void swap(int *A,int *B)
// {
//     int temp;
//     temp=*A;
//     *A=*B;
//     *B=temp;
//     printf("\nAfter swapping N1:%d , N2:%d",*A,*B);
// }
// void main()
// {
//     int N1,N2;
//     printf("Enter 2 numbers:");
//     scanf("%d%d",&N1,&N2);
//     printf("Before swapping N1:%d , N2:%d",N1,N2);
//     swap(&N1,&N2);
//     getch();
// }
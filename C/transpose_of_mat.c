#include<stdio.h>
int main()
{
    int a[3][3],t[3][3];
    printf("Enter your matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    printf("Transpose of matrix is\n");
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",t[i][j]);
        }
    printf("\n");
    }

//getch();
return 0;
}
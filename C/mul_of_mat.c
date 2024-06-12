#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],b[3][3],r[3][3],i,j,sum;
  printf("enter 1st mat\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }}
    printf("enter 2nd mat\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //mul
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(int k=0;k<3;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            r[i][j]=sum;
            sum=0;

        }
    }
    //res print
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",r[i][j]);
        }
        printf("\n");
        }
  getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10][10],b[10][10],r[10][10],i,j,sum=0,m,n,p,q;
  printf("enter dimension for mat 1\n");
  scanf("%d",&m);
  
  scanf("%d",&n);
  
  
  printf("enter 1st mat\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }}
    printf("enter dimension for mat 2\n");
  scanf("%d",&p);
  
  scanf("%d",&q);
    printf("enter 2nd mat\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p){
    printf("can't mul");
    }
    else{
    //mul
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            //sum=0;
            for(int k=0;k<n;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            r[i][j]=sum;
        }
    }
    //res print
        for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d\t",r[i][j]);
        }
        printf("\n");
        }}
  getch();
}
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,r,sum=0,count=0;
    printf("enter number\n");scanf("%d",&n);
    
    for(int i=n;i!=0;i=i/10){
       count++;
       }
    for(int i=n;i!=0;i=i/10){
        
        
        sum=sum+pow(r,count);
    }
    
        if(sum==n){
            printf("it is armstrong num");
        }
        else{
            printf("not a armstrong num");
        }
        
    
    getch();
}
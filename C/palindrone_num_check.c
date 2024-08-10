#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,rev=0;
    printf("enter number\n");scanf("%d",&n);
    //armstrong
    //for(int i=n;i!=0;i=i/10){
    //    count++;
    //    }
    for(int i=n;i!=0;i=i/10){
        r=i%10;
        rev=rev*10+r;
        //armstrong
        //sum=sum+pow(r,count)
    }
    //printf("%d",rev);
        if(rev==n){
            printf("it is palindrone num");
        }
        else{
            printf("not a palindrone num");
        }
        
    
    getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,rev=0;
    printf("enter number\n");scanf("%d",&n);
    for(int i=n;i!=0;i=i/10){
        r=i%10;
        rev=rev*10+r;
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

#include <stdio.h>
#include <conio.h>

void main() {
    int n, r, rev = 0;
    printf("Enter number\n");
    scanf("%d", &n);
        for(int i = n; i != 0; i = i / 10) {
        r = i % 10;
        rev = rev * 10 + r;
    }
    
    if(rev == n) {
        printf("It is a palindrome number");
    } else {
        printf("Not a palindrome number");
    }
    
    getch();
}

#include <stdio.h>
#include <conio.h>

void main() {
        for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    // int n;
    // printf("enter num: ");scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     for(int sp=1;sp<=n-1;sp++){printf(" ");}
    //     for(int j=1;j<=(2*i-1);j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    getch();
}

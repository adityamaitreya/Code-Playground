#include <stdio.h>

void main() {
    char i, j;
    int n = 4; // Number of rows for the first part of the pattern
    char count='A';
    // Print the upper part of the pattern
    for (i = A; i <= E; i++) {
        for (j = A; j <= i; j++) {
            printf("%c",count);
            count++;
        }   
        printf("\n");
    }

}

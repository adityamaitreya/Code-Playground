#include<stdio.h>
#include<math.h>

void main()
{
    int n, r, sum = 0, count = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    
    // Counting the number of digits
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }
    
    
    temp = n;
    
    // Calculating the sum of the powers of its digits
    while (temp != 0) {
        r = temp % 10;
        sum += pow(r, count);
        temp = temp / 10;
    }
    
    // Checking if the sum is equal to the original number
    if (sum == n) {
        printf("It is an Armstrong number.\n");
    } else {
        printf("Not an Armstrong number.\n");
    }
}


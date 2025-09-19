#include<stdio.h>
int main() 
    in num1, num2, diff;


    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    diff = num1 - num2;
    if (diff % 2 == 0) {
        printf("The difference (%d - %d) = %d is even.\n", num1, num2, diff);
    } else {
        printf("The difference (%d - %d) = %d is odd.\n", num1, num2, diff);
    }

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int power(int base, int exp)
{
    if (exp == 0) 
        return 1;
    
    else if (exp % 2) // if exp is even, then exp % 2 = 0 --> False, go to next else. If exp is odd, exp % 2 != 0 --> True
        return base * power(base, exp - 1);
    else {
        int temp = power(base, exp/2);
        return temp * temp;
    }
}

int user_io()
{
    int base, exp, result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &exp);
    result = power(base, exp);
    printf("\nThe result of %d^%d is %d \n\n", base, exp, result);
    return 0;
}

int main()
{
    bool a = true;
    char input[2];
    while (a == true){
        printf("Welcome to the exponentation program! Continue [y/n]: ");
        scanf("%1s", input);
        while (getchar() != '\n');
        
        if (input[0] == 'y') {
            user_io();
        }
        else if (input[0] == 'n') {
            a = false;
        }
        else {
            // input[0] = 0;
            printf("\nInvalid input! Enter [y/n]...\n\n");
            continue;
        }
    }
    printf("\nExiting program \n\n");
    return 0;
}

# beginner_exponentiation_c
A beginner-level I/O terminal program in C to calculate the result of a chosen base and power using an algorithm with O(logn) time complexity.


The algorithm used to calculate the exponentiation:

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else if (exp % 2)
        return base * power(base, exp - 1);
    else {
        int temp = power(base, exp / 2);
        return temp * temp;
    }
}

Time and space complexity: O(logn)

Taken from user "ephemient" on StackOverflow https://stackoverflow.com/questions/213042/how-do-you-do-exponentiation-in-c

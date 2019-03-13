/* main.c simple program to test assembler program */

#include <stdio.h>

extern long long int test(long long int input);

int main(void)
{
	long long int input;
	input = 8;
    long long int result = test(input);
    printf("Fibonaccci number is %lld\n", result);
    return 0;
}

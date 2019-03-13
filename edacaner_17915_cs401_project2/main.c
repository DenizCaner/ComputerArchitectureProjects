/* main.c simple program to test assembler program */

#include <stdio.h>
#include <string.h>

extern long long int mul(long long int input1, long long int input2);
extern long long int add(long long int input1, long long int input2);
extern long long int sub(long long int input1, long long int input2);
extern long long int and(long long int input1, long long int input2);
extern long long int eor(long long int input1, long long int input2);
extern long long int orr(long long int input1, long long int input2);
extern long long int muladd(long long int input1, long long int input2);

 int main(void)
{
	long long int input1 = 6789;
	long long int input2 = 5678;
	char op[] = "ORR", ch;

	//printf("Please enter the first 4-digit number:");
	//scanf("%lld\n", &input1 );
	//printf("Please enter the operation you want to perform(MUL, ADD, SUB, XOR, AND, OR):");
	//scanf("%s\n", op);
	//gets(op);
	//printf("Please enter the second 4-digit number:");
	//scanf("%lld\n",&input2 );
	if(strcmp(op,"MUL") == 0)
	{
		long long int result = mul(input1, input2);
		printf("The result is %lld\n", result);
		return 0;
	}
	if(strcmp(op,"ADD") == 0)
	{
		long long int result = add(input1, input2);
		printf("The result is %lld\n", result);
		return 0;
	}
	if(strcmp(op,"SUB") == 0)
	{
		long long int result = sub(input1, input2);
		printf("The result is %lld\n", result);
		return 0;
	}
	if(strcmp(op,"AND") == 0)
	{
		long long int result = and(input1, input2);
		printf("The result is %lld\n", result);
		return 0;
	}

	if(strcmp(op,"EOR") == 0)
	{
		long long int result = eor(input1, input2);
		printf("The result is %lld\n", result);
		return 0;
	}

	if(strcmp(op,"ORR") == 0)
	{
		long long int result = orr(input1, input2);
		printf("The result is %lld\n", result);
		return 0;
	}

	if(strcmp(op,"MULADD") == 0)
	{
		long long int result = muladd(input1, input2);
		printf("The result is %lld\n", result);
		return 0;
	}

	return 0;
}
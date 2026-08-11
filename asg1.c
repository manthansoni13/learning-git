
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	printf("argc : %d\n", argc); 
	int num1 = atoi(argv[1]); 
	int num2 = atoi(argv[3]);

	switch(argv[2][0])	{
		case '+':
			printf("%d + %d = %d\n", num1, num2, num1 + num2);
			break;

		case '-':
			printf("%d - %d = %d\n", num1, num2, num1 - num2);
			break;

		case '*':
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
			break;

		case '/':
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
			break;
	}

	return 0;
}
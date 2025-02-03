#include <stdio.h>

int main() {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==0)
	{
		printf("The number is zero\n");
	}
	else if (num>0)
	{
		printf("The number is positive\n");
		if(num%2==0)
		{
			printf("And it is even number\n");
		}
		else{
			printf("And it is odd number\n");
		}
	}
	else if (num<0)
	{
		printf("The number is negative\n");
		if(num%5==0)
		{
			printf("And it is divisible by 5\n");
		}
		else{
			printf("And it is not divisible by 5\n");
		}
	}
	return 0;
}

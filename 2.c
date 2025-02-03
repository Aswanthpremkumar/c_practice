#include <stdio.h>

int main() {
		int age;
	printf("Enter your age:");
	scanf("%d", &age);
	if(age<12)
	{
		printf("You are a child and you have 50%% discount");	
	}
	else if (age>=12 && age<=18)
	{
		if(age==18)
		{
		printf("You are a teenager and you have 20%% discount");
		}
		else
		{
			printf("You are a teenager and you have 10%% discount");
		}
	}
	else if (age>18)
	{
		if(age>=60)
		{
			printf("You are a senior citizen and you have 30%% discount");
		}
		else
		{
			printf("You are an adult and you have no discount");
		}
	}
	else{
		printf("Invalid data");
	}
	return 0;
}

#include <stdio.h>

int main() {
	int side1,side2,side3;
	printf("Enter length of side 1:");
	scanf("%d",&side1);
	printf("Enter length of side 2:");
	scanf("%d",&side2);
	printf("Enter length of side 3:");
	scanf("%d",&side3);
	if(side1==side2 && side2==side3)
	{
		printf("Equivalent triangle");
	}
	else if((side1==side2) || (side1==side3) || (side2==side3))
	{
		printf("Isosceles triangle");
	}
	else if(((side1+side2)>side3) || ((side1+side3)>side2) || ((side2+side3)>side1))
	{
		printf("Scalene triangle");
	}
	else
	{
		printf("Not a valid triangle");
	}
	return 0;
}

#include <stdio.h>

int main() {
		int mark1,mark2,mark3,mark4,mark5,sum,avg;
	printf("Enter the mark scored in 1st subject out of 100: ");
	scanf("%d",&mark1);
	printf("Enter the mark scored in 2nd subject out of 100: ");
	scanf("%d",&mark2);
	printf("Enter the mark scored in 3rd subject out of 100: ");
	scanf("%d",&mark3);
	printf("Enter the mark scored in 4th subject out of 100: ");
	scanf("%d",&mark4);
	printf("Enter the mark scored in 5th subject out of 100: ");
	scanf("%d",&mark5);
	avg= (mark1+mark2+mark3+mark4+mark5)/5;
	if(mark1<101 && mark2<101 && mark3<101 && mark4<101 && mark5<101){
		printf("The average mark scored by the student is %d\n",avg);
		if(avg>=90){
			printf("Grade A");
		}
		else if (avg>=80 && avg<=89){
			printf("Grade B");
		}
		else if (avg>=70 && avg<=79){
			printf("Grade C");
		}
		else if (avg>=60 && avg<=69){
			printf("Grade D");
		}
		else if (avg>=50 && avg<=59){
			printf("Grade E");
		}
		else if (avg<50){
			printf("Grade F");
		}
	}
	else{
		printf("Invalid Input");
	}
		return 0;
}

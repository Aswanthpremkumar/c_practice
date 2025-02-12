#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int main (){
    int option,num1,num2;
    printf("Options \n1.Addition \n2.Subtraction \n3.Multiplication");
    scanf("%d",&option);
    printf("Enter number1 :");
    scanf("%d",&num1);
    printf("Enter number2 :");
    scanf("%d",&num2);

    switch(option){
        case 1:
            add(num1,num2);
            printf("After adding : %d",add );

            break;
        
        case 2:
            sub(num1,num2);
            break;
    }

int add(int x, int y){
    add=x+y;
    return add;
}
int sub(int x, int y){
    return x-y;
}
}
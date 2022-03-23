#include<stdio.h>
int main(){
    int num1,num2;
    float result;
    char op;
    //Starting Calculator Simulation
    printf("Enter two integers : ");
    scanf("%d%d", &num1,&num2);
    printf("Available operators : \n");
    printf("'+' for addition\n");
    printf("'-' for subtraction\n");
    printf("'*' for multiplication\n");
    printf("'/' for division\n");
    printf("Enter the Operator : ");
    scanf(" %c",&op); 
    //Conditions for Each Operator is fiven and calculated
    if (op=='+') {
        result=num1+num2;
    }
    else if (op=='-') {
        result=num1-num2;
    }
    else if (op=='*') {
        result=num1*num2;
    }
    else if (op=='/') {
        if (num2 == 0) {
            printf("Retry and enter a non-zero number... \n");
            return (-1);
        }
        result=num1/num2;
    }
    else {
        printf("Invalid operator...\n");
        return 1;
    }
    printf("Result = %.2f\n",result);
return 0;
}

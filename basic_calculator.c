#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("BASIC MATHEMATICAL CALCULATOR \n");

    double num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1 );

    printf("Enter the operator ");
    scanf(" %c", &operator);

    printf("Enter the second number: " );
    scanf("%lf", &num2);

    if (operator == '+')
    {
        printf("Addition: %f\n", num1-num2);
    } else if(operator == '-'){
        printf("Subtraction: %f \n", num1-num2);
        printf("Alternately: %f \n", num2-num1);
    }else if(operator == '*'){
        printf("Multiplication: %f \n", num1*num2);
    }else if(operator=='/'){
        printf("Division: %f \n", num1/num2);
        printf("Alternate Division: %f \n", num2/num1);
    }
    //else if(operator=='%'){
    //     printf("Modulus: %f", num1%num2);
    //     printf("Alternate Modulus: %f", num2%num1);
    // }
    else{
        printf("Enter a valid operator \n");
    }

    




    return 0;


}
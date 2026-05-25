#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double num1,num2,result;

    printf("---------------------------------------\n");
    printf("   Welcome to the simple calculator!\n");
    printf("---------------------------------------\n");

    printf("Enter an operator (+,-,*,/):\n");
    scanf(" %c", &operator);
    printf("---------------------------------------\n");

    printf("Enter Two Numbers (a b):\n");
    scanf("%lf %lf", &num1, &num2);
    printf("---------------------------------------\n");

    switch (operator) {
        case '+':
             result=num1+num2;
             printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
             printf("---------------------------------------\n");
             break;
        case '-':
             result=num1-num2;
             printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
             printf("---------------------------------------\n");
             break;
        case '*':
             result=num1*num2;
             printf("%.2lf*%.2lf = %.2lf", num1, num2, result);
             printf("---------------------------------------\n");
             break;
        case '/':
         if (num2 != 0.0) {
             result=num1/num2;
             printf("%.2lf/%.2lf = %.2lf\n", num1, num2, result);
             printf("---------------------------------------\n");
         } else {
             printf("Error! Division by zero is not allowed.\n");
             printf("---------------------------------------\n");
         }
             break;




    }

    return 0;
}

#include <stdio.h>

void main(){

    char oper;
    float number_one, number_two, result;

    printf("\t\t\t B A S I C  C A L C U L A T O R \n\n");
    printf("\n\tPlease Enter (First Number) Operator(+,-,*,/) (Second Number) \n");
    printf("\tNote: Enter in correct order \n\n\n");

    scanf("%f %c %f", &number_one, &oper, &number_two);

    switch(oper)
    {
    case '+':
        result = number_one + number_two;
        break;
    case '-':
        result = number_one - number_two;
        break;
    case '*':
        result = number_one * number_two;
        break;
    case '/':
        result = number_one / number_two;
        break;

    default:
        printf("Please Enter Valid Operator");
    }


 printf("\n\n\t %.2f %c %.2f = %.2f \n\n", number_one, oper, number_two, result);

}

#include <stdio.h>
#include <stdlib.h>

/*

This is a simple program to calculate a just two numbers with four operators to test my firts repository in GitHub.

*/

int main(){

    float n1, n2, result;
    char op;

    printf("Please enter with two numbers, and select one operator: +, -, /, *\n");
    scanf("%f%f", &n1, &n2);
    scanf("%s", &op);

    switch (op){
    case '+':
        result = n1 + n2;
        printf("%.2f plus %.2f equals %.2f", n1, n2, result);
        break;

    case '-':
        result = n1 - n2;
        printf("%.2f minus %.2f equals %.2f", n1, n2, result);
        break;
    
    case '/':
        result = n1 / n2;
        printf("%.2f divided by %.2f equals %.2f", n1, n2, result);
        break;
    
    case '*':
        result = n1 * n2;
        printf("%.2f times %.2f equals %.2f", n1, n2, result);
        break;
    
    default: printf("Please insert valible numbers or valible operator");
        break;
    }
    return 0;
}
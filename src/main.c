#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*

This is a simple program to calculate a just two numbers with four operators to test my firts repository in GitHub.

*/

float plus(float n1, float n2);
float minus(float n1, float n2);
float division(float n1, float n2);
float multiplication(float n1, float n2);

int main(){

    float n1, n2, result;
    char op;
    bool exit = false;

    do{

        printf("Please enter with two numbers, and select one operator: +, -, /, *\n");
        scanf("%f %s %f", &n1, &op, &n2);

        switch (op){
            case '+':
                result = plus(n1, n2);
                printf("%.2f plus %.2f equals %.2f", n1, n2, result);
                break;

                case '-':
                    result = minus(n1 ,n2);
                    printf("%.2f minus %.2f equals %.2f", n1, n2, result);
                    break;

                    case '/':
                        result = division(n1, n2);
                        printf("%.2f divided by %.2f equals %.2f", n1, n2, result);
                        break;
    
                        case '*':
                            result = multiplication(n1, n2);
                            printf("%.2f times %.2f equals %.2f", n1, n2, result);
                            break;
    
                            default: printf("Please insert valible numbers or valible operator");
                            break;
        }

        printf("\n\nDo you want to leave (0) or carry out another cooperation (1): ");
        int i;
        scanf("%d", &i);

        printf("\n\n");

        if(i != 1){
            exit = true;
        }

    }while(!exit);
    return 0;
}

float plus(float n1, float n2){
    return n1 + n2;
}

float minus(float n1, float n2){
    return n1 - n2;
}

float division(float n1, float n2){
    return n1 / n2;
}

float multiplication(float n1, float n2){
    return n1 * n2;
}


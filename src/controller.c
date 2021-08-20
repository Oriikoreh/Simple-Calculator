#include "include/controller.h"
#include "include/operations.h"
#include "include/view.h"
#include <stdbool.h>
#include <stdio.h>


void calculatorMenu(){
    float n1, n2, result;
    char op;
    bool exit = false;

    do{

        startMessage();
        scanf("%f %s %f", &n1, &op, &n2);

        switch (op){
            case '+':
                result = plus(n1, n2);
                printAdd(n1, n2, result);
                break;

                case '-':
                    result = minus(n1 ,n2);
                    printMinus(n1, n2, result);
                    break;

                    case '/':
                        result = division(n1, n2);
                        printDivision(n1, n2, result);
                        break;

                        case '*':
                            result = multiplication(n1, n2);
                            printMultiplication(n1, n2, result);
                            break;

                            default: invalidOperation();
                            break;
        }

        wannaTryAgain();
        int i;
        scanf("%d", &i);

        printf("\n\n");

        if(i != 1){
            exit = true;
        }
    }while(!exit);
}

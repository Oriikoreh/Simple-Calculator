#include "include/view.h"
#include <stdio.h>

void startMessage(){
    printf("Please enter with two numbers, and select one operator: +, -, /, *\n");
}

void printAdd(float n1, float n2, float result){
    printf("%.2f plus %.2f equals %.2f", n1, n2, result);
}

void printMinus(float n1, float n2, float result){
    printf("%.2f minus %.2f equals %.2f", n1, n2, result);
}

void printDivision(float n1, float n2, float result){
    printf("%.2f divided by %.2f equals %.2f", n1, n2, result);
}

void printMultiplication(float n1, float n2, float result){
    printf("%.2f times %.2f equals %.2f", n1, n2, result);
}

void invalidOperation(){
    printf("Please insert valid numbers or valid operator");
}

void wannaTryAgain(){
    printf("\n\nDo you want to leave (0) or carry out another operation (1): ");
}

float scanValues(float n1, float n2, char op){
    scanf("%f %s %f", &n1, &op, &n2);
    return n1, n2, op;
}

void scanLoop(int aux){
    scanf("%d", &aux);
}
#include <stdio.h>
int multiply(int num1, int num2);

void main(void){
    int a, b, c;
    printf("Enter the first number (a) :");
    scanf("%d",&a);
    printf("\n multiplication table for %d \n", a);
    for (b = 1; b<=12; b++) {
    c = multiply(a,b);
    printf("%d * %d = %d \n", a, b, c);
    }
    for (b = 1; b<=12; b++) {
    c = multiply(a,b);
    printf("%d * %d = %d \n", a, b, c);
    }
}
int multiply(int num1, int num2){
    int result = num1*num2;
    return result;
}
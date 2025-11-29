#include <stdio.h>
void circle(int r);

void main(void){
    int r;
     printf("Enter radius:");
     scanf("%d",&r);
     circle(r);
     //circle(8);
}

void circle(int r){
    float ans = 3.14*r*r;
    printf("Answer = %.2f \n" , ans);
}
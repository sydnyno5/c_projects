#include <stdio.h>
void triangle(int b, int h);

void main(void){
     int b,h;
     printf("Enter Base:");
     scanf("%d",&b);
     printf("Enter high:");
     scanf("%d",&h);
     triangle(b,h);
     //triangle(3,5)
}

void triangle(int b, int h){
    float ans;
    ans = 0.5*b*h;
    printf("Anwer = %f " , ans);
}
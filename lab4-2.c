#include <stdio.h>
void triangle(int b, int h);

void main(void){
     triangle(3,5); 
     triangle(4,7);  
}

void triangle(int b, int h){
    float ans;
    ans = 0.5*b*h;
    printf("Anwer = %f " , ans);
}
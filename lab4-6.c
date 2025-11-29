#include <stdio.h>
float volt(int i, int r);

void main(void){
  int i,r;
  printf("Enter I:");
  scanf("%d", &i);
  printf("Enter R:");
  scanf("%d", &r);
  printf("volt = %.2f", volt(i,r));
}

float volt(int i, int r){
    float v = i*r;
    return v;
}
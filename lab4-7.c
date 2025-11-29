#include <stdio.h>
float mass(float w,float h);

void main(void){
    float w,h;
    printf("Enter Weight (kg):");
    scanf("%f",&w);
    printf("Enter Height (CM):");
    scanf("%f",&h);
    printf("mass=%.2f", mass(w,h));
}

float mass(float w, float h){
    float h_m = h / 100.0;
    float m = w/(h_m*h);
    return m;
}
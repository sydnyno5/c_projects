#include <stdio.h>

int main(void){
    // float area;
    // int base;
    // int heigh;
    float bmi;
    int weight = 47;
    float height = 163;
    height = height/100;
    bmi = weight/(height*height);
    printf ("weight =%d \n height =%.0f \n bmi = %.0f", weight, height*100, bmi);
    

   printf("Input bmi: ");
   scanf("%d", &bmi);
   if (bmi <= 18){
         printf("under weight");
   }else if(bmi >= 18 && bmi <= 25){
         printf("normal weight");
   }else if(bmi >= 25 && bmi <= 30){
         printf("over weight");
   }else if(bmi >= 30){
         printf("obese");





   }
}
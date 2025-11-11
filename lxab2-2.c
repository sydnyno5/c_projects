#include <stdio.h>

int main(void){ 
   int score;
   //st:
   printf("Input Score:");
   scanf("%d", &score);
   if (score >= 80 && score <= 100){
         printf("A");
   }else if(score >= 70 && score <= 79){
         printf("B");
   }else if(score >= 60 && score <= 69){
         printf("C");
   }else if(score >= 50 && score <= 59){
         printf("D");
   }else if(score >= 0 && score <= 49){
         printf("F");
   }else{
        printf("Error");
   }
   //goto st;

}
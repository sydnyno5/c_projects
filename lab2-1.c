#include <stdio.h>

int main(void){ 
   int score;
   printf("Input Score:");
   scanf("%d", &score);
   if(score >= 60 && score <= 100){
     printf("PASS");
   }else{
      printf("FAIL");
   }
   
   return 0;
}
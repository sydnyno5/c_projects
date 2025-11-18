#include <stdio.h>


void main(void){
    int a, b=1, c;

    printf("enter :");  // ตัวแปร enter ค่าที่ต้องการ
    scanf("%d",&a);

    while(b <=12 ){
        c=a*b;
        printf("%d * %d = %d \n", a,b,c);
        b++;
    }



}
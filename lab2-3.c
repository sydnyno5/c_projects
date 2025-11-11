#include <stdio.h>

int main(void){ 
    int gender;
    printf("Enter Gender");
    scanf("%c", &gender);

    switch(gender){
        case 'm' : printf("Male");
                   break;
        case 'f' : printf("Female");
                   break;
        case 'M' : printf("Male");
                   break;
        case 'F' : printf("Female");
                   break;
        default: printf("Invalid Value");

    }

}
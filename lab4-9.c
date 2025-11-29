#include <stdio.h>
#include <stdio.h>


float calculate_vat_amount(float price, float vat_rate) {
    
    float vat_amount = price * (vat_rate / 100);
    return vat_amount;
}


float calculate_total_price(float price, float vat_amount) {
    
    float total_price = price + vat_amount;
    return total_price;
}

void main(void) {
    float original_price; 
    float vat_rate;       
    float vat_amount;     
    float total_price;    

   
    printf(" VAT and Total Price Calculator \n");
    printf("Enter the original price (before VAT): ");
    scanf("%f", &original_price);
    
    printf("Enter the VAT rate (e.t.c., 7 for 7%%): ");
    scanf("%f", &vat_rate);

    
    vat_amount = calculate_vat_amount(original_price, vat_rate);

   
    total_price = calculate_total_price(original_price, vat_amount);

    
    printf("\n--- Calculation Results ---\n");
    printf("Original Price : %.2f\n", original_price);
    printf("VAT Rate       : %.2f%%\n", vat_rate);
    printf("VAT Amount     : %.2f\n", vat_amount);
    printf("Total Price    : %.2f\n", total_price);
}

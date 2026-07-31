// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float price,discount_price,total_price,discount;
   
   printf("enter the price=");
   scanf("%f",&price);
   if(price>=10000)
       discount=30;
   else if(price>=5000) 
       discount=20;
   else if(price>=1000)
       discount=10;
   else
       discount=0;
       
    discount_price=price*(discount/100);
    total_price=price-discount_price;
    
    
    printf("discount_price=%.2f\n",discount_price);
    printf("total_price=%.2f",total_price);
   
    
   
  
    return 0;
}

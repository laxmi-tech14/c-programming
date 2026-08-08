// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
   double base,exponent;
   
   printf("enetr a base :");
   scanf("%lf",&base);
   
   printf("enter a exponent:");
   scanf("%lf",&exponent);
   
   printf("result=%.21f\n",pow(base,exponent));
    return 0;
}

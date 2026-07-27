// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here);
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if((year%400==0)||(year%4==0 && year%100!=0))
    printf("%d is a leap year",year);
    else
    printf("%d is not a leap year",year);
    

    return 0;
}

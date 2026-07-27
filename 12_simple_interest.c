// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here);
    float p,t,r,si;
    printf("enter principle,time and rate :");
    scanf("%f %f %f",&p,&t,&r);
    si=p*t*r/100;
    printf("simple interst=%.2f",si);

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double square_root;
    printf("enter a number:");
    scanf("%d",&n);
    square_root=sqrt(n);
    printf("square_root of %d is %.21f ",n,square_root);
    
    return 0;
}

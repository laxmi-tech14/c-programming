// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,temp;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping: a=%d,b=%d",a,b);

    return 0;
}

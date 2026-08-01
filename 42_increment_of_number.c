// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter 2 numbers a and b:\n");
    
    scanf("%d %d",&a,&b);
    c=++a + b++;
    printf("c=%d",c);
    
    printf("a=%d b=%d",a,b);

    return 0;
}

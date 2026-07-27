// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here);
    int a,b;
    char op;
    printf("enter operator(+,-,*,/):");
    scanf("%c",&op);
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
        printf("result=%d",a+b);
        break;
        case '-':
        printf("result=%d",a-b);
        break;
        case '*':
        printf("result=%d",a*b);
        break;
        case '/':
        printf("result=%d",a/b);
        break;
        default:
        printf("invalid operator");
    }

    
    

    return 0;
}

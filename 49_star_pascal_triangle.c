// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,rows,cols;
    printf("enter a number :");
    scanf("%d",&n);
    
    for(rows=0;rows<n;rows++)
    {
        for(cols=0;cols<=rows;cols++)
        {
        printf("* ");
        }
        printf("\n");
    }
 
    return 0;
}

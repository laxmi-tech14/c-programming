// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n;
    printf("enter a number(1-10):");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        if(i==n){
            break;
        }
        printf("%d\n",i);
    
    }
   
    
    return 0;
}

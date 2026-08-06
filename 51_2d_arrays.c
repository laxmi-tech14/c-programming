// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int marks [3][4]={{45,78,90,34},
   {34,90,23,56}};
   
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
       printf(" the value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
       }
   }
 
    return 0;
}

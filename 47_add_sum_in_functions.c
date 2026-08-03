// Online C compiler to run C program online
#include <stdio.h>
int add(int,int);
int sub(int,int);
int main() {
  int x,y,z;
  printf("print two numbers x and y:");
  scanf("%d %d",&x,&y);
  z=add(x,y);
  printf("%d\n",z);
  z=sub(x,y);
  printf("%d",z);
  

    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}


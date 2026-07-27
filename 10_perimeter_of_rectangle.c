 #include <stdio.h>

int main()
{
float length,breadth,perimeter;
printf("enter the value of length and breadth: ");
scanf("%f %f",&length,&breadth);
perimeter=length*breadth;
printf("perimeter of rectangle=%.2f",perimeter);

return 0;
}

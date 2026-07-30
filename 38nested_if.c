// Online C compiler to run C program online
#include <stdio.h>

int main ( )
{
   int category,item;
   printf("press 1 for meals\n");
   printf("press 2 for fast food\n");
   
   printf("enter category number:");
   scanf("%d",&category);
   if(category=='1')
   {
   printf("press 1 for chicken biryani");
   printf("press 2 for veg pulav");
   printf("press 3 for paneer fried rice");
   
   
   printf(" enter item no:");
   scanf("%d",&item);
   
   if (item==1)
   {
   printf("you odered chicken biryani!");
   }
   else if (item==2)
   {
   printf("you odered veg pulav!");
   }
   else if(item==3)
   {
   printf("you odered paneer fried rice!");
   }
   else
   {
       printf("invalid oder");
   }
   }
   else if (category==2)   
   {
   printf("press 1 for manchurya");
   printf("press 2 for noodles");
   printf("press 3 for shavarma");
   
   
   printf(" enter item no:");
   scanf("%d",&item);
   
   if (item==1)
   {
   printf("you odered manchurya!");
   }
   else if (item==2)
   {
   printf("you odered noodles!");
   }
   else if(item==3)
   {
   printf("you odered shavarma!");
   }
   else
   {
       printf("invalid oder");
   }
}

   
return 0;
}

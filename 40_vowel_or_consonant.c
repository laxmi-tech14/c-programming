// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    
    printf("enter a character:");
    scanf("%c",&ch);
    if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
    { if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='I'||ch=='E'|| ch=='O'|| ch=='U') 
    printf("vowel");
    else
    printf("consonant");
    }
    else
    printf("not an alphabet");
  
    
   
  
    return 0;
}

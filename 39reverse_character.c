// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch,reversed_ch;
    
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
    reversed_ch= ch+32;
    printf("reversed_ch=%c",reversed_ch);
    }
    else if(ch>='a'&& ch<='z')
    {
    reversed_ch= ch-32;
    printf("reversed_ch=%c",reversed_ch);
    }
    else
    {
        printf("invalid character");
    }
    

    return 0;
}

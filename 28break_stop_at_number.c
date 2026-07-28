// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break;   // Exit the loop when i becomes 6
        }
        printf("%d\n", i);
    }

    printf("Loop ended.\n");

    return 0;
}

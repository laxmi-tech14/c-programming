 #include <stdio.h>

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = a % b;

    printf("Modulus of %d and %d = %d", a, b, result);

    return 0;
}

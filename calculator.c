#include <stdio.h>

int add(int num1, int num2);

int main(void)
{
    int num1;
    printf("What is the first number: ");
    scanf("%i", &num1);

    int num2;
    printf("What is the second number: ");
    scanf("%i", &num2);

    printf("%i", add(num1, num2));
};

int add(int num1, int num2)
{
    return num1 + num2;
};
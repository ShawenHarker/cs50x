#include <stdio.h>

// This is how you let the complier know the function does not exist yet but it will when the file is ran. (prototype)
void meow(int n);

int main(void)
{
    meow(4);
};

void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("meow\n");
    };
};
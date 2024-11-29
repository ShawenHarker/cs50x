#include <stdio.h>

int printBricks(int num);

int main(void)
{
    int Height;
    do 
    {
        printf("Height: ");
        scanf("%i", &Height);   
    } while (Height < 1 || Height > 8);

    printBricks(Height);      
};

int printBricks(int num)
{
    for (int i = 0; i < num; i++)
    {
        int bricks = i + 1;
        int space = num - i;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < bricks; j++)
        {
            printf("#");
        }
        printf(" ");
        for (int j = 0; j < bricks; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
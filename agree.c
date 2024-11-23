#include <stdio.h>

int main(void)
{
    char agreed;

    printf("Do you agree to these terms? [y/n]: ");
    scanf("%c", &agreed);
    
    if (agreed == 'y' ||  agreed == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (agreed == 'n' ||  agreed == 'N')
    {
        printf("Did not agree.\n");
    };

    return 0;
};
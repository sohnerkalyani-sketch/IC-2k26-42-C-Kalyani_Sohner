#include <stdio.h>

int main()
{
    int i, j, space, num;

    for(i = 0; i < 6; i++)
    {
        num = 1;

        for(space = 1; space <= 5-i; space++)
            printf(" ");

        for(j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num = num * (i-j) / (j+1);
        }

        printf("\n");
    }

    return 0;
}

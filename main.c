#include <stdio.h>

// function for print Star pattern
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

// function for print Reverse Star pattern
void reverseStarPatters(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int type;
    int rows;
    printf("Enter 0 for Star Pattern and 1 for Reversed Star Patters\n");
    scanf("%d", &type);

    // Ask user to How many rows want
    printf("How rows you want?\n");
    scanf("%d", &rows);

    // make switc for check our condition
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;
    case 1:
        reverseStarPatters(rows);
        break;

    default:
        printf("invalid choice\n");
        break;
    }

    return 0;
}
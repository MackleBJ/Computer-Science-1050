#include <stdio.h>

int main(void)
{
    int limit, cubedNumber, counter;

    printf("Please enter an integer: ");
    scanf("%d", &limit);

    for (counter = 0; (counter*counter*counter) <= limit; counter++)
    {
        cubedNumber = counter*counter*counter;
        if (cubedNumber % 3 == 0)
        {
            printf("%d*\n", cubedNumber);
        }
        else
        {
            printf("%d\n", cubedNumber);
        }
    }
}

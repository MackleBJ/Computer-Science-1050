/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     September 10, 2021
 * Lab:      Lab 3 
 * Author:   Brett M.
 * ***********************************************/

#include <stdio.h>

int main(void)
{
    /* Declare and initialize variable */
    int number = 50;

    /* Loop to iterate through each even number from 50 >> 2. */
    while (number >= 2)
    {   
        /* Checking conditions to determine output printed. */
        if (number % 5 == 0 && number % 3 == 0)
        {
            printf("XY\n");
        }
        else if (number % 5 == 0)
        {
            printf("X\n");
        }
        else if (number % 3 == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("%d\n", number);
        }

        /* Decrement operator to lower number by 2 each loop */
        number -= 2;
    }
}

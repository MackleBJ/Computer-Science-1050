/*********************
* Author: Brett M.
* Class: CS 1050
* Semester: Fall 2021
* *******************/

#include <stdio.h>

int main(void)
{
    int number = 1;

    while (number < 11)
    {
        if (number % 2 == 0)
        {
            printf("even - %d\n", number);
        }
        else
        {
            printf("odd - %d\n", number);
        }
        number ++;
    }
}

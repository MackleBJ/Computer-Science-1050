/*********************
* Author: Brett M.
* Class: CS 1050
* Semester: Fall 2021
* *******************/

#include <stdio.h>

int main(void)
{
    for (int number = 1; number < 11; number ++)
    {
        (number % 2 == 0 ? printf("even - %d\n", number):printf("odd - %d\n", number));
    }
}

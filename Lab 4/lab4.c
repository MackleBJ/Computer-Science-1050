/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     September 17, 2021
 * Lab:      Lab 4 
 * Author:   Brett M.
 * ***********************************************/

#include <stdio.h>

int main(void)
{
    /* Initialize variables */
    int counter, start = 0, limit = 0;

    /* Ask the user for Start and Limit Integers */
    for (;start < 1 || start > 150;)
    {
        printf("Enter Start: ");
        scanf("%d", &start);
    }
    for (;limit < 1 || limit > 150;)
    {
        printf("Enter Limit: ");
        scanf("%d", &limit);
    }

    /* Count from Start to Limit by increments of 3 */
    for (counter = start; counter <= limit; counter +=3)
    {
        printf("%d ", counter);
    }
}

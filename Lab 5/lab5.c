/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     October 1, 2021
 * Lab:      Lab 5 
 * Author:   Brett M.
 * ***********************************************/

#include <stdio.h>

// JimR's function to calculate facotrials.
long factorial(int n)
{
    long result = 1;

    for (int i=n; i>1; i--)
    {
        result *= i;
    }
    
    return result;
}

// Function to calculate the base of natural log (e).
double findE()
{
    double e = 1;

    for (int i=1; i<=20; i++)
    {
        e += ( 1 / (double)(factorial(i)));
    }

    return e;
}

int main(void)
{
    printf("e=%.10lf\n", findE());
}

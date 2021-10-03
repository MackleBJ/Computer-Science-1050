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

    for (int i=1; i<=10; i++)
    {
        e += ( 1 / (double)(factorial(i)));
    }

    return e;
}

void myPow(double e)
{
    double multipliedNumber = e;

    for(int i = 1; i<=5; i++)
    {
        if (i == 1)
        {
            printf("e to the %d power = %.3lf\n", i, multipliedNumber);
        }
        else
        {
            multipliedNumber *= e;
            printf("e to the %d power = %.3lf\n", i, multipliedNumber);
        }
    }

}

int main(void)
{
    myPow(findE());

}

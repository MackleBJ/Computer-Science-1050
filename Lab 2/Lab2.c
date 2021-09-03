/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     September 3, 2021
 * Lab:      Lab 2
 * Author:   Brett M.
 * Pawprint:
 * ***********************************************/

#include <stdio.h>

int main(void)
{
    printf("Enter 4 integers (A,B,C,D) separated by spaces: ");
    int A, B, C, D;
    scanf("%d%d%d%d", &A, &B, &C, &D);

    printf("*** Initial values ***\n");
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    printf("D=%d\n\n", D);

    printf("*** Calculated values ***\n");
    printf("The sum of A and D = %d\n", (A+D));
    printf("The product of B and C = %d\n", (B*C));
    printf("The integer quotient of C divided by A = %d\n", (C/A));
    printf("The integer remainder of D divided by C = %d\n", (D%C));
    printf("The product of A and B divided by the quantity sum of C and D = %d\n", ((A*B)/(C+D)));

    printf("*Honors:\n");
    if (A%2 != 0)
    {
        printf("A/2= %.1f\n", (float) A/2);
    }
    else
    {
        printf("A/2= %d\n", (A/2));
    }

    if (B%2 != 0)
    {
        printf("B/2= %.1f\n", (float) B/2);
    }
    else
    {
        printf("B/2= %d\n", (B/2));
    }

    if (C%2 != 0)
    {
        printf("C/2= %.1f\n", (float) C/2);
    }
    else
    {
        printf("C/2= %d\n", (C/2));
    }

    if (D%2 != 0)
    {
        printf("D/2= %.1f\n", (float) D/2);
    }
    else
    {
        printf("D/2= %d\n", (D/2));
    }
}


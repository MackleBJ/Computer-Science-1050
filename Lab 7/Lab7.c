/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     October 15, 2021
 * Lab:      Lab 7 
 * Author:   Brett M.
 * ***********************************************/

#include <stdio.h>

// Function Prototypes.
void GetIntArray(int *numArray, int *countPtr);
void PrintArray(int *numArray, int count);
int TotalArray(int *numArray, int count);
float AvgArray(int *numArray, int count);

int main(void)
{
    printf("\n*************************\n");
    printf("* Welcome to Prelab 7-8 *\n");
    printf("*************************\n\n");

    int count;
    int numArray[100];
    GetIntArray(numArray, &count);
    PrintArray(numArray, count);
    int total = TotalArray(numArray, count);
    float average = AvgArray(numArray, count);

    printf("Total of array = %d\n", total);
    printf("Average fo array = %.2lf\n\n",average);
}

// Function to get number of elements and value of each element from the user.
void GetIntArray(int *numArray, int *countPtr)
{
    printf("Enter the number of elements in the array:\n");
    scanf("%d", countPtr);

    for(int iteration = 1; iteration <= *countPtr; iteration++)
    {
        printf("Eneter element #%d:",(iteration - 1));
        scanf("%d", (numArray + (iteration - 1)));
    }
}

// Function to print the number of elements in the array and each element of the array.
void PrintArray(int *numArray, int count)
{
    printf("\nHere are the %d elements of your array:\n",count);
    for(int iteration = 0; iteration < count; iteration++)
    {
        printf("\tElement %d = %d\n",iteration, *(numArray + iteration));
    }
}

// Function to total all the elements of the array.
int TotalArray(int *numArray, int count)
{
    int total = 0;
    for(int iteration = 0; iteration < count; iteration++)
    {
        total += *(numArray + iteration);
    }

    return total;
}

// Function to average all the elements of the array.
float AvgArray(int *numArray, int count)
{
    int total = 0;
    float average;
    for(int iteration = 0; iteration < count; iteration++)
    {
        total += *(numArray + iteration);
    }

    average = (float)total / count;

    return average;
}

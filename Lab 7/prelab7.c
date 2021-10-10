#include <stdio.h>

void getCount(int *countPtr)
{
    printf("How many integers would you like to enter?\n");
    scanf("%d", &*countPtr);
}

void getNumbers(int *numberArrayPtr, int counter)
{
    int iteration = 1;
    while (iteration <= counter)
    {
        printf("\tEnter integer #%d: ", iteration);
        scanf("%d",&*(numberArrayPtr + (iteration-1)));
        iteration ++;

    }
}

void printArray(int numberArray[], int count)
{
    printf("\n*************************\n");
    printf("You entered an array with %d elements:\n", count);
    int iteration = 0;
    while (iteration < count)
    {
        printf("\tarray[%d]=%d\n",iteration, numberArray[iteration]);
        iteration ++;
    }
}

int main(void)
{
    printf("*************************\n");
    printf("* Welcome to Prelab 7-8 *\n");
    printf("*************************\n");

    int count;
    int numberArray[100];
    getCount(&count);
    getNumbers(numberArray, count);
    printArray(numberArray, count);
}

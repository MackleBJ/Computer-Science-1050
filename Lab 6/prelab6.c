# include <stdio.h>

void printArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("Element %d = %d\n", i, array[i]);
    }
}

int initializeArray(int array[], int begin, int end, int increment)
{
    int counter = 0;
    int i = begin;

    while (i<=end)
    {
        if (counter == 0)
        {
            array[counter] = (i);
            i += increment;
            counter ++;
        }
        else
        {
            array[counter] = (i);
            i += increment;
            counter ++;
        }
    }
    return counter;
}

int main(void)
{
    int arrayOfNumbers[256];
    int begin = 2;
    int end = 20;
    int increment = 2;

    int counter = initializeArray(arrayOfNumbers, begin, end, increment);
    printf("First Array: \n");
    printArray(arrayOfNumbers, counter);

    begin = 1;
    end = 98;
    increment = 3;

    counter = initializeArray(arrayOfNumbers, begin, end, increment);
    printf("\nSecond Array: \n");
    printArray(arrayOfNumbers, counter);
}

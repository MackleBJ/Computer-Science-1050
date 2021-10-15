/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     October 8, 2021
 * Lab:      Lab 6 
 * Author:   Brett M.
 * ***********************************************/

#include <stdio.h>

// Function Prototypes.
int initializeArray(int array[], int begin, int end, int increment);
void printArray(int array1[], int array2[], int array3[], int sizeOfArray);
void multiplyArrays(int array1[], int array2[], int array3[], int sizeOfArray);

int main(void)
{
    int array1[100];
    int array2[100];
    int array3[100];
    
    // Call functions to initialize, multiply, and print arrays.
    int counter = initializeArray(array1,1,31,3);  
    counter = initializeArray(array2,2,52,5);
    multiplyArrays(array1, array2,array3,counter);
    printf("First Arrays:\n");
    printArray(array1,array2,array3,counter);
    
    // Call functions to initialize, multiply, and print arrays.
    int counter2 = initializeArray(array1,22,0,-2);  
    counter2 = initializeArray(array2,84,7,-7);
    multiplyArrays(array1, array2,array3,counter2);
    printf("\nSecond Arrays:\n");
    printArray(array1,array2,array3,counter2);
}

// Function to initialize Array1 and Array2.
int initializeArray(int array[], int begin, int end, int increment)
{

    int counter= 0;
    if(begin < end)
    {
        for(int i = begin; i <=end; i += increment)
        {
            array[counter] = i;
            counter++;
        }
    }
    else
    {
        for(int i  =begin; i >=end; i+= increment)
        {
            array[counter] = i;
            counter++;
        }
    }

    return counter;
}

// Function to print all arrays with proper formatting.
void printArray(int array1[], int array2[], int array3[], int sizeOfArray)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        printf("\tArray 1 Element %2d = %2d ", i, array1[i]);
        printf(" Array 2 Element %2d = %2d ", i, array2[i]);
        printf(" Array 3 Element %2d = %4d\n",i, array3[i]);
    }
}

// Function to multiply array1 and array2 to get array3.
void multiplyArrays(int array1[], int array2[], int array3[], int sizeOfArray)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        array3[i] = (array1[i]*array2[i]);
    }
}

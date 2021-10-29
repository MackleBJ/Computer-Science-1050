/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     October 29, 2021
 * Lab:      Lab 9
 * Author:   Brett M.
 * ***********************************************/

#include <stdio.h>

// Function prototypes.
void userMessage(char * messagePtr);
void messageLength(char * messagePtr, int * counterPrt, int * segmentPtr);
void reverseMessage(char * messagePtr, int * counterPtr, int * segmentPtr);

// Main Function.
int main (void)
{
    char message[256];
    int counter = 0;
    int segment = 0;

    printf("*** Welcome to Lab 9 ***\n");

    userMessage(message);
    messageLength(message, &counter, &segment);

    printf("You entered: ");
    for(int i = 0;; i++)
    {
        if ('\0' == *(message + i))
        {
            break;
        }
        putchar(*(message + i));
    }

    printf("There are %d segments in the string.",(segment));
    
    printf("\nThe modified string is: ");
    reverseMessage(message, &counter, &segment);
    for(int i = 0;; i++)
    {
        if ('\0' == *(message + i))
        {
            break;
        }
        putchar(*(message + i));
    }

    printf("*** Thanks for doing Lab9 ***\n");
}

// Function to get string from user. 
void userMessage(char * messagePtr)
{
    printf("Please enter a string: ");
    fgets(messagePtr, 256, stdin);
}

// Function to get number of segments in string. 
void messageLength(char * messagePtr, int * counterPtr, int * segmentPtr)
{
    for(int i = 0;; i++)
    {
        if ('\0' == *(messagePtr + i))
        {
            if ((i-1) % 5 == 0)
            {
                *segmentPtr = (i-1) / 5;
            }
            else
            {
                *segmentPtr = (((i-1) / 5) + 1);
            }
            *counterPtr = i - 1;
            break;
        }
    }
}

// Function to reverse the segments in the string. 
void reverseMessage(char * messagePtr, int * counterPtr, int * segmentPtr)
{
    char tempString[256];
    int position = 0;
    if (*counterPtr == 5)
    {
        for(int i = 0; i < *counterPtr; i++)
        {
            *(tempString + i) = *(messagePtr + i);
            position += 1;
        }
    }

    else if((*counterPtr % 5) ==0)
    {
        for(int i = 1; i <= *segmentPtr; i++)
        {
            for(int x = (5*(*segmentPtr-(i)));x <= ((5*(*segmentPtr-(i))) + 4); x++)
            {
                *(tempString + position) = *(messagePtr + x);
                position +=1;
            }   
        }

    }

    else
    {
        for(int i = 0; i < (*counterPtr % 5); i++)
        {
            *(tempString + i) = *(messagePtr + ((*counterPtr - (*counterPtr % 5)) + i));
            position += 1;
        }

        for(int i = 1; i < *segmentPtr; i++)
        {
            for(int x = (5*(*segmentPtr-(1+i)));x <= ((5*(*segmentPtr-(1+i))) + 4); x++)
            {
                *(tempString + position) = *(messagePtr + x);
                position +=1;
            }   
        }
    }

    for(int i = 0; i < position; i++)
    {
        *(messagePtr + i) = *(tempString + i);
    }
}

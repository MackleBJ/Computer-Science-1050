#include <stdio.h>


void userMessage(char * messagePtr);
void messageLength(char * messagePtr, int * counter);
void reverseMessage(char * messagePtr);

int main (void)
{
    char message[256];
    int counter = 0;
    printf("*** Welcome to Prelab 9 ***\n");
    userMessage(message);
    messageLength(message, &counter);

    printf("You entered: ");
    for(int i = 0;; i++)
    {
        if ('\0' == message[i])
        {
            break;
        }
        putchar(message[i]);
    }
    printf("That string is %d in length.",(counter - 1));

    printf("\nThe reverse sting is: ");
    reverseMessage(message);

    messageLength(message, &counter);
    printf("\nThat string is %d in length.",(counter - 1));
    printf("\n*** Thanks for doing Prelab9 ***\n");
}

void userMessage(char * messagePtr)
{
    printf("Please enter a string: ");
    fgets(messagePtr, 256, stdin);
}

void messageLength(char * messagePtr, int * counterPtr)
{
    for(int i = 0;; i++)
    {
        if ('\0' == messagePtr[i])
        {
            *counterPtr = i;
            break;
        }
    }
}


void reverseMessage(char * messagePtr)
{
    if('\0' == messagePtr[0])
    {
        return;
    }
    else
    {
        reverseMessage(&messagePtr[1]);
        if('\n' == messagePtr[0])
        {
            return;
        }
        putchar(messagePtr[0]);
    }
}

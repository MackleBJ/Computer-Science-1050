/**************************************************
 * Course:   CS 1050
 * Semester: Fall 2021
 * Date:     November 5, 2021
 * Lab:      Lab 10
 * Author:   Brett M.
 * Pawprint: bjm2cd
 * ***********************************************/

// includes
#include <stdio.h>
// Need any other includes?
#include <ctype.h>

// Symbolic Constants
#define CLEARTEXT \
"Haven't felt right in a week\n"\
"And I'm thinning out\n"\
"And it hurts bad\n"\
"I gotta get back\n"\
"\n"\
"Hot head and dreamless sleep\n"\
"I could just slip down\n"\
"And on the wrong track\n"\
"I gotta get back\n"\
"\n"\
"I wanna spend the entire year\n"\
"Just face down\n"\
"And on my own time\n"\
"I wanna waste mine\n"\
"\n"\
"And spend the rest of it asking myself\n"\
"\"Is this who you are?\"\n"\
"And I don't know\n"\
"It just feels gross\n"\
"\n"\
"I don't think there's anything wrong\n"\
"I don't think there's anything wrong\n"\
"And I don't think there's anything wrong\n"\
"I don't think there's anything wrong\n"\
"\n"\
"Sunlight on the back of my arms\n"\
"Just thins me out\n"\
"To a different time\n"\
"I wanna waste mine\n"\
"\"\\\?\n\n\t\t- Snail Mail"



// Prototypes
void Encrypt(const char * in, char * out, int displacement);
void Decrypt(const char * in, char * out, int displacement);


// Main
int main(void)
{   
    // Variable to hold encrypted and decrypted text declared in main(). 
    char outStr[700];
    
    printf("***********************************\n");
    printf("*  Cleartext:                     *\n");
    printf(CLEARTEXT);

    printf("\n***********************************\n\n");
    
    // Pass in CLEARTEXT directly to encrypt() from main().
    Encrypt(CLEARTEXT,outStr,5);
    
    printf("\n***********************************\n");
    printf("*  CipherText using 5:            *\n");
    for(int i = 0;; i++)
    {
        if ('\0' == *(outStr + i))
        {
            break;
        }
        putchar(*(outStr + i));
    }
    printf("\n***********************************\n\n");

    Decrypt(outStr, outStr,5);
    
    printf("\n***********************************\n");
    printf("*  Decrypted CipherText:          *\n");
    for(int i = 0;; i++)
    {
        if ('\0' == *(outStr + i))
        {
            break;
        }
        putchar(*(outStr + i));
    }
    printf("\n***********************************\n\n");
}



// Function to encrypt CLEARTEXT.
void Encrypt(const char * in, char * out, int displacement)
{   
    char tempStr[1000];
    int length = 1;

    for (int i = 0; *(in+i) != '\0';i++)
    {
        length++;
    }

    for (int i = 0; i < length; i ++)
    {
        // Finds if current index is a letter.
        if (isalpha(*(in + i)))
        {
            int ascii = (*(in + i));
            
            // Uppercase letters. 
            if (ascii <= 90)
            {
                ascii = (ascii + 5);
                if (ascii > 90)
                {
                    ascii = ((ascii - 90) + 64);
                    *(tempStr + i) = ascii;
                }
                
                *(tempStr + i) = ascii;
            }

            // Lowercase letters.
            else
            {
                ascii = (ascii +5);
                if (ascii > 122)
                {
                    ascii = ((ascii - 122) + 96);
                    *(tempStr + i) = ascii;
                }
                
                *(tempStr + i) = ascii;
            }
        }

        // None letter characters.
        else
        {
            *(tempStr + i) = *(in + i);
        }
    }

    // Transfer characters from tempStr to outStr from main().
    for(int i = 0; i < length; i++)
    {
        *(out + i) = *(tempStr + i);
    }

}

// Function to decrpyt the encrypted CLEARTEXT.
void Decrypt(const char * in, char * out, int displacement)
{   
    char tempStr[1000];
    int length = 1;

    for (int i = 0; *(in+i) != '\0';i++)
    {
        length++;
    }

    for (int i = 0; i < length; i ++)
    {
        if (isalpha(*(in + i)))
        {
            int ascii = (*(in + i));

            if (ascii <=  90)
            {
                ascii = (ascii - 5);
                if (ascii < 65)
                {
                    ascii = ((ascii - 65) + 91);
                    *(tempStr + i) = ascii;
                }

                *(tempStr + i) = ascii;
            }
            else
            {
                ascii = (ascii - 5);
                if (ascii < 97)
                {
                    ascii = ((ascii - 97) + 123);
                    *(tempStr + i) = ascii;
                }
               
                *(tempStr + i) = ascii;
            }
        }
        
        else
        {
            *(tempStr + i) = *(in + i);
        }
    }

    for(int i = 0; i < length; i++)
    {
        *(out + i) = *(tempStr + i);
    }

}

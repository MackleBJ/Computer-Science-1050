/*****************************************************************************
 * CS1050
 * Fall 2021
 * Lab 11
 * By Brett M. and Jim Ries
 * November 12, 2021
 *****************************************************************************/
#include <stdio.h>
#include <string.h>
#include "fight.h"

// Symbolic Constants
#define FILENAME "monster.csv"

int main(int argc, char * argv[])
{
    // Uncomment the following line if you want to try a sample fight
    // Fight("JimR",21,900,10,"5d6+5","5d12+5","Lar",5,100,5,"1d6","N/A");
   
    char * fileName;
    fileName = argv[1];
    FILE * fp = fopen(fileName, "r");
    char name[256];
    int ac,hp,hit,ac1,hp1,hit1,ac2,hp2,hit2;
    int counter = 1;
    char atk1[256];
    char atk2[256];
    char atk3[256];
    char atk4[256];
    char atk5[256];
    char atk6[256];
    char player1[256];
    char player2[256];

    fp = fopen(FILENAME, "r");
    // Only keep going if we are able to open the file
    if (NULL != fp)
    {
        fgets(name,255,fp);
        name[255] = '\0';
    }
    // Reads each line of the file.
    while(!feof(fp))
    {

        fscanf(fp,"%d,%d,%d,%[^,],%[^,],%s",&ac,&hp,&hit,atk1,atk2,name);
        // Get Ahote info.
        if (counter == 1)
        {
            strcpy(player1, name);
            ac1 = ac;
            hp1 = hp;
            hit1 = hit;
            strcpy(atk3, atk1);
            strcpy(atk4, atk2);
        }
        // Get FrostGiant info.
        if (counter == 17)
        {
            strcpy(player2, name);
            ac2 = ac;
            hp2 = hp;
            hit2 = hit;
            strcpy(atk5, atk1);
            strcpy(atk6, atk2);
        }
        counter ++;
    }
    //FIGHT!
    Fight(player1,ac1,hp1,hit1,atk3,atk4,player2,ac2,hp2,hit2,atk5,atk6);
    // Close file.
    fclose(fp);
}

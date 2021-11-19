/*******************************
* Course: CS 1050
* Semester: Fall 2021
* Date: November 19, 2021
* Lab: Lab 12
* Author: Brett M.
********************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Symbolic Constants.
#define MAXLENGTH 75

// Movie structue definition.
struct movie
{
    char title[MAXLENGTH];
    long revenue;
    int yearReleased;
};

// New type name for 'struct movie'.
typedef struct movie Movie;

// Prototypes.
void countFile(FILE * fp, int * movieCount);
void readFile(FILE * fp, Movie * const title);
void printMovies(Movie * movie, int movieCount);
void bSortByYear(Movie *  movie, int movieCount, int sortByMethod);

int main (int argc, char * argv[])
{

    char * fileName;
    fileName = argv[1];
    FILE * fp;
    if ((fp = fopen(fileName, "r")) == NULL)
    {
        printf("*** Error: Cannot open %s\n***./a.out filename [sort_field]\n", fileName);
        exit(0);
    }
    else
    {
        fp = fopen(fileName, "r");
    }
    
    // Error check optional sorting field argument is a legal value. Sort by Title (default).
    int sortByMethod = 0;
    if (argv[2] == NULL)
    {
        sortByMethod = 1;
    }
    else if (strcmp(argv[2],"Title") == 0)
    {
        sortByMethod = 1;
    }
    else if (strcmp(argv[2],"Gross") == 0)
    {
        sortByMethod = 2;
    }
    else if (strcmp(argv[2], "Year") == 0)
    {
        sortByMethod = 3;
    }
    else
    {
        printf("./a.out filename [sort_field]\n\t- sort_field must be one of 'Title', 'Gross', or 'Year' if specified.");
        exit(0);
    }

    int movieCount = 0;
    countFile(fp, &movieCount);
    rewind(fp);

    // Create correct number of Movie structures for the number of movies counted in the file.
    Movie blockbuster[movieCount];
    
    readFile(fp, blockbuster);
    bSortByYear(blockbuster, movieCount, sortByMethod);
    printf("Sorted movies:\n");
    printMovies(blockbuster, movieCount);
}

// Function to count lines in file.
void countFile(FILE * fp, int * movieCount)
{
    int iteration = 0;

    if(fp != NULL)
    {
        while(!feof(fp))
        {
            char array[256];
            long integer = 0;
            int year = 0;

            if ( 3 == fscanf(fp,"%s %ld %d", array, &integer, &year))
            {
                iteration++;
            }
        }
    }
    *movieCount = iteration;
}
// Function to read file and assign values to the movie structures.
void readFile(FILE * fp, Movie * movie)
{
    int iteration = 0;

    if(fp != NULL)
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s %ld %d",
            movie[iteration].title,
            &movie[iteration].revenue,
            &movie[iteration].yearReleased);
            
            iteration++;
        }
    }
    fclose(fp); // Close the file after we are done with it.
}

// Function to print out the list of movies neatly.
void printMovies(Movie * movie, int movieCount)
{
    printf("\t\t\t\t\t     Title\t     Gross\t Year\n");
    for(int i = 0; i < movieCount; i++)
    {
        printf("%50s %15ld %10d\n", 
        movie[i].title, 
        movie[i].revenue, 
        movie[i].yearReleased);
    }
}

// Function to sort the movies.
void bSortByYear(Movie * movie, int movieCount, int sortByMethod)
{   
    // Sort by Year.
    if (sortByMethod == 3)
    {
        Movie temp;
    
        for(int i = 0; i < (movieCount -1); i++)
        {
            for(int j = 0; j < ((movieCount-1)-i); j++)
            {
                if(movie[j].yearReleased > movie[j + 1].yearReleased)
                {   
                    temp = movie[j];
                    movie[j] = movie[j + 1];
                    movie[j + 1] = temp;
                }
            }
        }
    }
    // Sort by Gross.
    else if (sortByMethod == 2)
    {
        Movie temp;
    
        for(int i = 0; i < (movieCount -1); i++)
        {
            for(int j = 0; j < ((movieCount-1)-i); j++)
            {
                if(movie[j].revenue > movie[j + 1].revenue)
                {   
                    temp = movie[j];
                    movie[j] = movie[j + 1];
                    movie[j + 1] = temp;
                }
            }
        }
    }
    // Sort by Title. (Default)
    else if (sortByMethod == 1)
    {
        Movie temp;
    
        for(int i = 0; i < (movieCount -1); i++)
        {
            for(int j = 0; j < ((movieCount-1)-i); j++)
            {
                if(strcmp(movie[j].title, movie[j + 1].title)>0)
                {   
                    temp = movie[j];
                    movie[j] = movie[j + 1];
                    movie[j + 1] = temp;
                }
            }
        }
    }
}

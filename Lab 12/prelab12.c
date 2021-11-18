#include <stdio.h>

// Symbolic Constants.
#define MAXLENGTH 30
#define FILELENGTH 15

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
void readFile(FILE * fp, Movie * const title);
void printMovies(Movie * movie);
void bSortByYear(Movie *  movie);

int main (int argc, char * argv[])
{
    char * fileName;
    fileName = argv[1];
    FILE * fp = fopen(fileName, "r");

    Movie blockbuster[FILELENGTH];
    
    readFile(fp, blockbuster);
    printf("Original:\n");
    printMovies(blockbuster);
    bSortByYear(blockbuster);
    printf("\n\nYear:\n");
    printMovies(blockbuster);
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
}

void printMovies(Movie * movie)
{
    printf("\t\t\t Title\t\t Gross\t     Year\n");
    for(int i = 0; i < FILELENGTH; i++)
    {
        printf("%30s %15ld %10d\n", 
        movie[i].title, 
        movie[i].revenue, 
        movie[i].yearReleased);
    }
}

void bSortByYear(Movie * movie)
{
    Movie temp;
    
    for(int i = 0; i < 14; i++)
    {
        for(int j = 0; j < (14-i); j++)
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

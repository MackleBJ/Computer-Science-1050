#include <stdio.h>

int main(void)
{
    int valueX;
    int valueY;

    printf("%s","Enter 2 integers separated by spaces:");
    scanf("%d%d", &valueX, &valueY);

    printf("*** Initial values ***\n");
    printf("X = %d\n", valueX);
    printf("Y = %d\n\n", valueY);
    
    printf("*** Calculated values ***\n");
    printf("X times Y = %d\n", (valueX * valueY));
    printf("X divided by Y = %d\n", (valueX/valueY));
    printf("X plus 1, quantity times Y = %d\n\n", ((valueX+1)*valueY));

    printf("*** Final values ***\n");
    printf("X = %d\n", valueX);
    printf("Y = %d\n", valueY);

}

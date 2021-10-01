#include <stdio.h>

int mypow(int base, int power)
{
    int mulitipliedNumb = base;
    for(int i=0;i<(power-1);i++)
    {
        mulitipliedNumb *= base;
    }
    return mulitipliedNumb;
}
int main(void)
{
    mypow(5,5);
}

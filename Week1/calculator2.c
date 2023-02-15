#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    double z =  (double) x / (double) y;

    printf("%.20f\n", z);
}
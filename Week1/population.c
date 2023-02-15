#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Start size → must be bigger then 8
    int start_size;
    do
    {
        start_size = get_long("Start size: ");
    }
    while (start_size < 9);


    // Ask for: final value > initial value
    int end_size;
    do
    {
        end_size = get_long("End size: ");
    }
    while (end_size < start_size);

    if (start_size == end_size)
    {
        printf("Years: 0\n");
    }

    else
    {
        //Number of years
        int years = 0;
        do
        {
            start_size = start_size + ((start_size / 3) - (start_size / 4));
            years++;
        }
        while (start_size < end_size);

        //Print number of years
        {
            printf("Years: %i\n", years);
        }
    }

}
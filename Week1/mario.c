#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;

    // ToDo: Take the user's height if it is between the numbers 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height >= 9);

    // ToDo: Build pyramid
    for (int hashBlock = 1; hashBlock <= height; hashBlock++)
    {
        // ToDo: Get height for pyramid and the line number
        // ToDo: Get how many space will be needed on that line
        int width = height;

        while (width > hashBlock)
        {
            width--;
            printf(" ");
            // printf(".");
        }

        for (int hashBlockLeft = 0; hashBlockLeft < hashBlock; hashBlockLeft++)
        {
            printf("#");
        }

        /*
        // ToDo: add 2 spaces next to the left pyramid and then add a new pyramid to the right
        printf(" ");
        printf(" ");
        for (int hashBlockLeft = 0; hashBlockLeft < hashBlock; hashBlockLeft++)
        {
            printf("#");
        }
        */
        printf("\n");
    }

}


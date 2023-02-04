/*

LOOPS:

int counter = 3;
while (counter > 0)
{
    printf("meow\n");
    counter = counter - 1;
}


int i = 3;
while (i > 0)
{
    printf("meow\n");
    i = i - 1;
}


int i = 3;
while (i > 0)
{
    printf("meow\n");
    i -= 1;
}


int i = 3;
while (i > 0)
{
    printf("meow\n");
    i--1;
}
*/

/*
OTPION1
#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 30  )
    {
        printf("meow\n");
        i++;
    }
}

OTPION2
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
    printf("meow\n");
    }
}
*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while (true) /*while (1)*/
    {
        printf("meow\n");
    }
}
/* "ctlr+c" to stop loop */
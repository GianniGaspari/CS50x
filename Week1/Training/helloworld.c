#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string n1 = get_string("What's your first name?\n");
    string n2 = get_string("What's you last name?\n");
    printf("Hello, %s %s!\n", n1, n2);
    printf("100%%\n");
}

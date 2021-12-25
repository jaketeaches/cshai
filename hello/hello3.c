#include "stdio.h"

void say_hello(char *name)
{
    printf("Hello, %s!\n", name);
}

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        // Argument names
        for (int i = 1; i < argc; i++)
        {
            say_hello(argv[i]);
        }
        // No name was given
    }
    else
    {
        printf("What's your name?\n> ");
        char name[50];
        scanf("%s", name);
        say_hello(name);
    }

    return 0;
}

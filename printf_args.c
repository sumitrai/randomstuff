#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;

    /* Problem: Many people expect output here to be: 3 2 1.
    **          Actual output: 3 3 1.
    ** Can you explain why? */
    printf("%d %d %d\n", ++i, i, i++);

    return 0;
}
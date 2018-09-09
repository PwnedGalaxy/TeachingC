#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char name[32];

    printf("What is your name?\n");
    scanf("%s", name);

    printf("Hello, %s\n", name);

    printf("Enter a number to count to: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; ++i)
    {
        printf("%d\n", i);
    }

    printf("Done!\n");
}

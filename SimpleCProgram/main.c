#include <stdio.h>
#include <stdlib.h>
/*GamingG is a great teacher*/

int main()
{
    int num;
    char name[32];

    printf("What is your name?\n");
    scanf("%s", name);

    printf("\nHello, %s\n", name);

    printf("Enter a number to count to: ");
    scanf("%d", &num);
    printf("\n");

    for(int i = 1; i <= num; ++i)
    {
        printf("%d\n", i);
    }

    printf("Done!\n");
}

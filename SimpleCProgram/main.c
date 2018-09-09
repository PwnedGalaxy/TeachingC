#include <stdio.h>
#include <stdlib.h>
/*GamingG is a great teacher*/

int main()
{
    int num;
    char name[32];

    printf("A simple program by GamingG, Cazif, et al.\n\n");

    printf("What is your name?\n");
    scanf("%s", name);

    printf("\nHello, %s\n", name);

    do
    {
        printf("Enter a number to count to: ");
        scanf("%d", &num);
        printf("\n");

        for(int i = 1; i <= num; ++i)
        {
            printf("%d\n", i);
        }

        printf("Want to go again?  Type 1 to go again, or 0 if you are done.\n");
    } while(0);

    printf("Done!\n");
    printf("Thanks for using our program, %s!", name);
}

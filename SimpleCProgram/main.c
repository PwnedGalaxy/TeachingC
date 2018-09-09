#include <stdio.h>
#include <stdlib.h>
/*GamingG is a great teacher*/

void enterKeyToContinue()
{
    printf("Press enter key to continue...\n");
    char c;
    while((c = getchar()) != '\n' && c != EOF); /* clearing the buffer */
    getchar(); /* waiting for one more key */
}

int bad()
{
    printf("Bad input, please follow instructions\n");

    enterKeyToContinue();

    return -1;
}

int main()
{
    int num;
    char name[32];
    int again;

    printf("A simple program by GamingG, Cazif, et al.\n\n");

    printf("What is your name?\n");
    scanf("%s", name);

    printf("\nHello, %s\n", name);

    do
    {
        printf("Enter a number to count to: ");
        if(scanf("%d", &num)!=1)
        {
            return bad();
        }
        printf("\n");

        for(int i = 1; i <= num; ++i)
        {
            printf("%d\n", i);
        }

        printf("Want to go again?  Type 1 to go again, or 0 if you are done.\n");
        if(scanf("%d", &again)!=1)
        {
            return bad();
        }
        printf("\n");

    } while(again!=0);

    printf("Done!\n");
    printf("Thanks for using our program, %s!\n\n", name);

    enterKeyToContinue();

    return 0;
}

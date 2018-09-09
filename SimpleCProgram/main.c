#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a number to count to: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; ++i)
    {
        printf("%d\n", i);
    }

    printf("Done!\n");
}

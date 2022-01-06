#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, g, ng=1;
    srand(time(0));
    num = rand()%100 +1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &g);
        if(g>num)
        {
            printf("Lower the number please\n");
        }
        else if(g<num)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("The number is %d\n You guessed it in %d attempts", num, ng);
        }
        ng++;
    }while(g != num);
    return 0;
}

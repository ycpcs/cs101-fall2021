#include<stdio.h>

#define MAX 21  // size of domino array: room for 20 dominoes, plus end marker (-1)

int main(void)
{
    // TODO: convert this example to assign03-ms1: dominoes initialization

    // integer array to hold domino positions
    int dominoes[MAX];
    
    // input from user (initial orientation of domino)
//    int orientation = 0;
    
    // counts the dominoes entered
    int count = 0;

    // Read domino orientations from user 
    printf("Enter the domino orientations (-1 to quit):\n");
    while (true) 
    {
        scanf("%i", &dominoes[count]);
        
        // are we done entering quizzes?
        if(dominoes[count] < 0)
        {
            break;
        }
        
        while(dominoes[count] > 3)
        {
            printf("Please enter a value from 0-3, or -1 to quit:");
            scanf("%i", &dominoes[count]);
        }

        // count quizzes
        count++;
    }
    
    // print dominoes header
    printf("\nInitial Orientation(%d): [", count);

    // print dominoes
    count = 0;
    
    while(dominoes[count] >= 0)
    {
        // if 0, empty
        if(dominoes[count] == 0)
        {
            printf(" ");
        }
        // if 1, standing
        else if(dominoes[count] == 1)
        {
            printf("|");
        }
        // if 2, tilted
        else if(dominoes[count] == 2)
        {
            printf("/");
        }
        // else 3, down
        else
        {
            printf("_");
        }
        
        count++;
    }
    printf("]\n");

    return 0;
}
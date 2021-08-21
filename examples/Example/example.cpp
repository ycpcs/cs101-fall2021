#include<stdio.h>

#define MAX 21  // size of domino array: room for 20 dominoes, plus end marker (-1)

void print_dominoes(int count);

// global integer array to hold domino positions - don't do it this way, we'll fix it
int dominoes[MAX];

int main(void)
{
    // counts the dominoes entered
    int count = 0;

    // Read domino orientations from user 
    printf("Enter the domino orientations (-1 to quit):\n");
    while (true) 
    {
        scanf("%i", &dominoes[count]);
        
        // are we done entering dominoes?
        if(dominoes[count] < 0)
        {
            break;
        }
        
        while(dominoes[count] > 3)
        {
            printf("Please enter a value from 0-3, or -1 to quit:");
            scanf("%i", &dominoes[count]);
        }

        // count dominoes
        count++;
    }
    
    // print dominoes header
    printf("\nInitial Orientation(%d): <", count);

    // print current domino orientation
    print_dominoes(count);

    return 0;
}


// function to print current domino orientation
void print_dominoes(int count)
{    
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
    printf(">\n");
}    
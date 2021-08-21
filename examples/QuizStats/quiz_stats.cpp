#include<stdio.h>

#define MAX 21  // size of quiz array: room for 20 quizzes, plus end marker (-1)

int main(void)
{
    // declare quiz array
    int quiz[MAX];
    
    // declare and initialize quiz variables
    int num_quizzes = 0;    // counts # of quizzes entered
    int sum = 0;            // sums quiz values
    int max = -1;           // save max quiz value: start at < smallest quiz grade
    int min = 201;          // sav min quiz value:  start at > largest quiz grade
    
    // Read the quiz grades and sum them 
    printf("Enter the quiz grades (-1 to quit):\n");
    while (true) 
    {
        scanf("%i", &quiz[num_quizzes]);
        
        // are we done entering quizzes?
        if(quiz[num_quizzes] < 0)
        {
            break;
        }
        
        // check for new max
        if(quiz[num_quizzes] > max)
        {
           max = quiz[num_quizzes];   
        }
        
        // check of new min
        if(quiz[num_quizzes] < min)
        {
           min = quiz[num_quizzes];  
        }
        
        // sum quizzes
        sum += quiz[num_quizzes];  

        // count quizzes
        num_quizzes++;
    }
    
    // print quiz grade header, with number of quizzes entered
    printf("\nQuiz grades: %d\nQizzes: ", num_quizzes);

    // print quiz grades    
    for(int i = 0; i < num_quizzes; i++)
    {
        printf("%d  ", quiz[i]);
    }

    // Compute the average
    printf("\nAve: %5.1lf\n", ((double) sum / num_quizzes));
    printf("Min: %3d\nMax: %3d\n", min, max);

    return 0;
}
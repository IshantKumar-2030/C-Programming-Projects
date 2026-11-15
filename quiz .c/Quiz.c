#include<stdio.h>
int main(){
    int choice,score=0;
    printf("----------Welcome to the Quiz!----------\n");
    printf("\n");
    printf("1.Start the quiz\n");
    printf("2.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:printf("\nQ1. Who developed C language?\n");
            printf("1. James Gosling\n");
            printf("2. Dennis Ritchie\n");
            printf("3. Guido van Rossum\n");
            printf("4. Bjarne Stroustrup\n");

            printf("Enter answer: ");
            scanf("%d", &choice);

            if(choice == 2)
            {
                printf("Correct!\n");
                score++;
            }
            else
            {
                printf("Wrong! Correct answer is Dennis Ritchie.\n");
            }

            printf("\nQ2. Which symbol ends a C statement?\n");
            printf("1. .\n");
            printf("2. ,\n");
            printf("3. ;\n");
            printf("4. :\n");

            printf("Enter answer: ");
            scanf("%d", &choice);

            if(choice == 3)
            {
                printf("Correct!\n");
                score++;
            }
            else
            {
                printf("Wrong! Correct answer is ;\n");
            }

            printf("\nQ3. Which function displays output?\n");
            printf("1. scanf()\n");
            printf("2. printf()\n");
            printf("3. main()\n");
            printf("4. return()\n");

            printf("Enter answer: ");
            scanf("%d", &choice);

            if(choice == 2)
            {
                printf("Correct!\n");
                score++;
            }
            else
            {
                printf("Wrong! Correct answer is printf().\n");
            }

            printf("\nQ4. Which data type stores integers?\n");
            printf("1. float\n");
            printf("2. char\n");
            printf("3. int\n");
            printf("4. double\n");

            printf("Enter answer: ");
            scanf("%d", &choice);

            if(choice == 3)
            {
                printf("Correct!\n");
                score++;
            }
            else
            {
                printf("Wrong! Correct answer is int.\n");
            }

            printf("\nQ5. Which operator checks equality?\n");
            printf("1. =\n");
            printf("2. ==\n");
            printf("3. ++\n");
            printf("4. !=\n");

            printf("Enter answer: ");
            scanf("%d", &choice);

            if(choice == 2)
            {
                printf("Correct!\n");
                score++;
            }
            else
            {
                printf("Wrong! Correct answer is ==.\n");
            }

            printf("\n================================\n");
            printf("           QUIZ RESULT\n");
            printf("================================\n");

            printf("Your Score: %d/5\n", score);

            if(score == 5)
            {
                printf("Excellent Performance!\n");
            }
            else if(score >= 3)
            {
                printf("Good Performance!\n");
            }
            else
            {
                printf("Keep Practicing!\n");
            }

            break;

        case 2:
            printf("Thank you for playing!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
    
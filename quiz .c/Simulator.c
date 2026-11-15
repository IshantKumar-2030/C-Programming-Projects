
#include <stdio.h>

int main()
{
    int pin, correctPin = 1234;
    int choice;
    float balance = 10000, amount;

    printf("================================\n");
    printf("          ATM SIMULATOR\n");
    printf("================================\n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if(pin == correctPin)
    {
        printf("\nLogin Successful!\n");

        for(int i = 1; i <= 100; i++)
        {
            printf("\n========== ATM MENU ==========\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit\n");

            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("Balance: Rs. %.2f\n", balance);
                    break;

                case 2:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);

                    if(amount > 0)
                    {
                        balance = balance + amount;
                        printf("Deposit Successful!\n");
                        printf("New Balance: Rs. %.2f\n", balance);
                    }
                    else
                    {
                        printf("Invalid Amount!\n");
                    }
                    break;

                case 3:
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);

                    if(amount > 0 && amount <= balance)
                    {
                        balance = balance - amount;
                        printf("Withdrawal Successful!\n");
                        printf("Remaining Balance: Rs. %.2f\n", balance);
                    }
                    else if(amount <= 0)
                    {
                        printf("Invalid Amount!\n");
                    }
                    else
                    {
                        printf("Insufficient Balance!\n");
                    }
                    break;

                case 4:
                    printf("Thank you for using ATM!\n");
                    return 0;

                default:
                    printf("Invalid Choice!\n");
            }
        }

        printf("Session limit reached.\n");
    }
    else
    {
        printf("Incorrect PIN! Access Denied.\n");
    }

    return 0;
}

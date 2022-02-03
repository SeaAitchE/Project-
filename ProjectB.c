#include <stdio.h>
void yes(char *p)
{
    printf("Would you like to have another ATM transaction?(y/n)\n");
    scanf(" %c", p);
}
void hello()
{
    printf("Hello!Welcome to our bank services\n1. Balance Checking\n2. Cash Withdrawal\n3. Cash Deposition\n4. Exit\n******************\n\nPlease proceed with your choice: ");
}

int main()
{
    int pin, choice;
    long long int amt,  balance = 20000, *b ;
    char yn, *p;
    p = &yn;
    b = &balance;
    while (1)
    {
        printf("Enter your pin\n");
        scanf("%d", &pin);
        if (pin == 1000)
        {
            while (1)
            {
                hello();
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("The account balance in rupee is : %lld\n", *b);
                    yes(p);
                    if (*p == 'y' || *p == 'Y')
                        break;
                    else
                        goto exit;
                    break;

                case 2:
                    while (1)
                    {
                        printf("Enter the amount to be withdrawl : ");
                        scanf("%lld", &amt);
                        if ( amt > *b)
                            printf("Baap ka raj h?\n");
                        else if (amt % 100 == 0)
                        {
                            *b = *b - amt;
                            printf("You can now collect the cash\nThe current balance is %lld\n", *b);
                            yes(p);
                            if (*p == 'y' || *p == 'Y')
                                break;
                            else
                                goto exit;
                        }
                        else
                            printf("You are requested to enter the amount in multiples in 100\n");
                    }
                    break;
                case 3:
                    printf("Enter the amount to be deposited : ");
                    scanf("%lld", &amt);
                    *b = *b + amt;
                    printf("The balance is %lld\n", *b);
                    yes(p);
                    if (*p == 'y' || *p == 'Y')
                        break;
                    else
                        goto exit;
                    break;
                case 4:
                    goto exit;
                    break;
                default:
                    printf("bhakk bc\n");
                    break;
                }
            }
        }
        else if (pin != 1000)
            printf("Wrong password\n");
    }
exit:
    printf("Thank you for using our ATM services!");

    return 0;
}
#include<stdio.h>

struct users{
    int pin;
    int balance;
}user[5];

int main(){

    printf("enter 1 for banking\n2 for creating account: ");
    int what;
    scanf("%d",&what);
    if (what==1)
    {    
        printf("enter the PIN: ");
        int pin;
        scanf("%d", &pin);

        struct users;
        user[0].pin = 1123;
        user[0].balance = 100;

        user[1].pin = 2234;
        user[1].balance = 100;

        user[2].pin = 3345;
        user[2].balance = 100;

        user[3].pin = 4456;
        user[3].balance = 100;

        user[4].pin = 5567;
        user[4].balance = 100;

        int try=2;
        

            if (pin==user[0].pin || pin==user[1].pin || pin==user[2].pin || pin==user[3].pin || pin==user[4].pin)
            {
                printf("enter the ID: ");
                int id;
                scanf("%d", &id);

                int op;
                do{
                    printf("enter the 1-view balance\n2-withdrawl\n3-deposit\n4-exit ");
                    scanf("%d",&op);

                    if (op==1)
                    {
                        printf("your current balance is: %d\n",user[id-1].balance);
                    } else if (op==2)
                    {
                        printf("how much you want to withdraw? ");
                        int withdraw;
                        scanf("%d", &withdraw);
                        printf("after withdrawing your current amount is: %d\n", user[id-1].balance-withdraw);
                    } else if (op==3)
                    {
                        printf("how much you want to deposit? ");
                        int deposit;
                        scanf("%d", &deposit);
                        printf("after deposit your current amount is: %d\n", user[id-1].balance+deposit);
                    }  

                } while (op!=4);
            } else
            {
                 while (try>0)
                {
                    try--;
                    printf("you have %d try\n", try+1);
                    printf("enter the PIN: ");
                    int pin;
                    scanf("%d", &pin);
                }
            
                
            }
        
    } else
    {
        int new_id, new_amount, new_pin;
        printf("enter the bank id you want: ");
        scanf("%d",&new_id);
        printf("enter the PIN you want: ");
        scanf("%d",&new_pin);
        printf("\nenter the amount you want to keep: ");
        scanf("%d",&new_amount);
        user[new_id].balance = new_amount;
        user[new_id].pin = new_pin;


        printf("enter the PIN: ");
        int pin;
        scanf("%d", &pin);

        int try = 2;

        if (pin==user[0].pin || pin==user[1].pin || pin==user[2].pin || pin==user[3].pin || pin==user[4].pin || pin==user[new_id].pin)
            {
                printf("enter the ID: ");
                int id;
                scanf("%d", &id);

                int op;
                do{
                    printf("enter the 1-view balance\n2-withdrawl\n3-deposit\n4-exit ");
                    scanf("%d",&op);

                    if (op==1)
                    {
                        printf("your current balance is: %d\n",user[id].balance);
                    } else if (op==2)
                    {
                        printf("how much you want to withdraw? ");
                        int withdraw;
                        scanf("%d", &withdraw);
                        printf("after withdrawing your current amount is: %d\n", user[id].balance-withdraw);
                    } else if (op==3)
                    {
                        printf("how much you want to deposit? ");
                        int deposit;
                        scanf("%d", &deposit);
                        printf("after deposit your current amount is: %d\n", user[id].balance+deposit);
                    }  

                } while (op!=4);
            } else
            {
                printf("you have %d try\n", try+1);
                printf("enter the PIN: ");
                int pin;
                scanf("%d", &pin);   
            }

    }    
    return 0;
}
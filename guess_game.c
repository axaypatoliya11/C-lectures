#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int generated_num = 1+rand()%100;  
    printf("%d", generated_num);
    int user_inp, can;
    printf("enter the number: ");
    scanf("%d", &user_inp);

    startAgain:
    do
    {
        scanf("%d", &user_inp);
        if (user_inp<generated_num)
        {
            printf("\nenter higher value");
        } else if (user_inp>generated_num)
        {
            printf("\nenter lower value");
        } else
        {
            printf("you won!\nenter 1 to continue & 0 to break ");
            scanf("%d", &can);
            if (can==1)
            {
                goto startAgain;
            } else
            {
                break;
            }
        }        
    } while (user_inp!=generated_num);
        
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
char *arr[] = {"Rock", "Paper", "scissor"};
int bot()
{
    srand(time(0));
    int randindex = rand() % 3;
    return randindex;
}
int main()
{
    // player 1 is user
    //  player 2 is bot
    //  3 turns
    //  display user name when wo is playing
    //  last log the scores and print in last who won
    char name[30], choice[30];
    char init_choice = choice[30];
    int round, points=0;
    printf("-------------------welcome to rock paper scissor-----------------\n");
    printf("enter the player name here \n");
    scanf("%s", &name);

    printf("welcome to this game %s\n", name);
    sleep(1);
    printf("your second player is bot so be carefull\n");
    sleep(1);
    printf("now the game begins in\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d\n", i);
        sleep(1);
    }
    char final = arr[bot()];
    while (round <= 3)
    {
        printf("enter your choice either rock paper or scissor\n");
        scanf("%s", &choice);
        sleep(1);
        printf("the bot choose is is %s\n", final);
        if (strcmp(choice,final)==0)
        {
            printf("no points alloted");
        }else if (strcmp(choice,final)<0)
        {
            printf("points alloted\n");
            points++;
        }else if ()
        {
            /* code */
        }
        
        
        
    }

    return 0;
}
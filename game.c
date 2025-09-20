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
    int round = 1, points = 0, botpoint = 0;
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
    while (round <= 10)
    {
        printf("Round %d :\n", round);
        printf("enter your choice either rock paper or scissor\n");
        scanf("%s", &choice);
        sleep(1);
        int botindex = bot();
        char *final = arr[botindex];
        printf("the bot choose is %s\n", final);
        sleep(1);
        if (strcasecmp(choice, final) == 0)
        {
            printf("the match is draw\n");
        }
        else if ((strcasecmp(choice, "Rock") == 0) && (strcasecmp(final, "Scissor") == 0) ||
                 (strcasecmp(choice, "paper") == 0) && (strcasecmp(final, "Rock") == 0) ||
                 (strcasecmp(choice, "scissor") == 0) && (strcasecmp(final, "paper") == 0))
        {
            printf("%s wins this round\n", name);
            points++;
        }
        else
        {
            printf("bot wins this round\n");
            botpoint++;
        }
        round++;
    }

    printf("\t\t----------final score--------\n");
    printf("\t\t\t%s:\t%d\n", name, points);
    printf("\t\t\tbot:\t %d\n", botpoint);
    if (points > botpoint)
    {
        printf("congraulation %s you have won\n", name);
    }
    else if (botpoint > points)
    {
        printf("bot wins the game u are weak dude\n");
    }
    else
    {
        printf("the match was an tie/draw\n");
    }

    return 0;
}
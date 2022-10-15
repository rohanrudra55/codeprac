#include<stdio.h>
int main(){
    struct cricket{
        char player_name[20];
        char team_name[20];
        double batting_avg;
    };
    char temp;
    struct cricket player[11];
    puts("Enter the team information:");
    for(int i=0;i<2;i++){
        printf("\nPlayer name: ");
        gets(player[i].player_name);
        printf("Team name: ");
        gets(player[i].team_name);
        printf("Batting average: ");
        scanf("%lf",&player[i].batting_avg);
        gets(&temp);
    }
    printf("\n%-20s%-20s%-20s\n","Name","Team","Average Batting");
    for(int i=0;i<2;i++){
        printf("%-20s%-20s%-20.2f\n",player[i].player_name,player[i].team_name,player[i].batting_avg);
    }
    return 0;
}
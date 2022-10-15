/* Write a program to calculate the parking charges. Read the hours and type of vehicles.
For example enter a character for type of vehicle as “c” for car, “t” for truck, “b” for bus
and son on.*/

//MISUK SARKAR, 13000120051, CSE A 
#include <stdio.h>
int main()
{
    char veichale;
    int time;
    printf("Enter the veichale name and hours:\n");
    scanf("%c",&veichale);
    scanf("%d",&time);
    double rate;
    switch(veichale){
        case 't':
            if(time<=3)
                rate=time*20.0;
            else
                rate=3*20.0+(time-3)*30.0;
            break;
        case 'c':
            if(time<=3)
                rate=10.0*time;
            else
                rate=3*10.0+(time-3)*20.0;
            break;
        case 'm':
            if(time<=3)
                rate=5.0*time;
            else
                rate=3*5.0+10.0*(time-3);
            break;
        default:
            printf("Invalid input");
    }
    printf("The rate for the veichale %c is %0.2f",veichale,rate);
  return 0;
}
#include<stdio.h>

int main(){
    int hotel[3][4][7] = {
        {
         {1,0,1,0,1,1,1},
         {0,1,0,1,1,0,0},
         {1,0,1,1,0,1,0},
         {1,1,0,0,0,1,0}
        },
        {
         {1,0,1,0,1,1,1},
         {0,1,0,1,1,0,0},
         {1,0,1,1,0,1,0},
         {1,1,0,0,0,1,0}
        },
        {
         {1,0,1,0,1,1,1},
         {0,1,0,1,1,0,0},
         {1,0,1,1,0,1,0},
         {1,1,0,0,0,1,0}
        }
    };
    int floor, room, day;
    printf("Which floor do you want to stay in: ");
    scanf("%d",&floor);
    printf("Which room do you want to stay in: ");
    scanf("%d",&room);
    printf("Which day do you want to stay at: ");
    scanf("%d",&day);
    if (hotel[floor][room][day] == 1)   printf("Room available");
    else     printf("Room not available");
} 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j;
struct Player_info{
    char name[50];
    int avgrun;
}player[4],temp;
int main()
{
 for ( i = 0; i < 4; i++)
 {
     printf("Enter the name of player %d\n",i+1);fflush(stdin);
     gets(player[i].name);
     printf("Enter the avg runs of player %d\n",i+1);fflush(stdin);
     scanf("%d",&player[i].avgrun);
 }
 printf("\t\tPlayers info before sorting\n\n\n");
 for ( i = 0; i < 4; i++)
 {
    printf("The name of player %d is %s\n",i+1,player[i].name);
    printf("The avg runs of player %d are %d\n",i+1,player[i].avgrun);
 }
 
 for ( i = 0; i < 4; i++)
 {
    for ( j = i+1; j < 4; j++)
    {
        if (player[i].avgrun>player[j].avgrun)
        {
            temp=player[i];
            player[i]=player[j];
            player[j]=temp;
        }
        
    }
    
 }
 printf("\t\tPlayers info after sorting\n\n\n");
 for ( i = 0; i < 4; i++)
 {
    printf("The name of player %d is %s\n",i+1,player[i].name);
    printf("The avg runs of player %d are %d\n",i+1,player[i].avgrun);
 }
 
    
}
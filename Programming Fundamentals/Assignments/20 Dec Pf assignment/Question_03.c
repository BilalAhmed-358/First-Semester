#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct Player_Data{
    char Player_Name[50];
    int age;
}Player[2];

char current_player[50],box_no[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},line[50];
int func_winner_check()
{
    if (box_no[1] == box_no[2] && box_no[2] == box_no[3]  && box_no[1]  == box_no[3])return 1;
    else if (box_no[4] == box_no[5] && box_no[5] == box_no[6] &&  box_no[4]  == box_no[6]  )return 1;
    else if (box_no[7] == box_no[8] && box_no[8] == box_no[9] &&  box_no[7]  == box_no[9]  )return 1;
    else if (box_no[1] == box_no[4] && box_no[4] == box_no[7] &&  box_no[1]  == box_no[7]  )return 1;
    else if (box_no[2] == box_no[5] && box_no[5] == box_no[8] &&  box_no[2]  == box_no[8]  )return 1;
    else if (box_no[3] == box_no[6] && box_no[6] == box_no[9] &&  box_no[3]  == box_no[9]  )return 1;
    else if (box_no[1] == box_no[5] && box_no[5] == box_no[9] &&  box_no[1]  == box_no[9]  )return 1;
    else if (box_no[3] == box_no[5] && box_no[5] == box_no[7] &&  box_no[3]  == box_no[7]  )return 1;
    else if (box_no[1] != '1' && box_no[2] != '2' && box_no[3] != '3' &&
             box_no[4] != '4' && box_no[5] != '5' && box_no[6] != '6' && 
             box_no[7] != '7' && box_no[8] != '8' && box_no[9] != '9')return 0;
    else return -1;
}
void func_board_printer(){
    system("cls");
    printf("\n\n\t\tWelcome!!!!!!\n");
    printf("\t\tTic Tac Toe Developed By Bilal Ahmed Khan\n\n");
    printf("\n\nMatch between %s and %s \n\n",Player[0].Player_Name,Player[1].Player_Name);

    printf("%s(+)  -  %s(-)\n\n\n",Player[0].Player_Name,Player[1].Player_Name);

    printf("      |      |     \n");
    printf("  %c   |  %c   |  %c \n", box_no[1], box_no[2], box_no[3]);
    printf("______|______|_____\n");
    printf("      |      |     \n");
    printf("  %c   |  %c   |  %c \n", box_no[4], box_no[5], box_no[6]);
    printf("______|______|_____\n");
    printf("      |      |     \n");
    printf("  %c   |  %c   |  %c \n", box_no[7], box_no[8], box_no[9]);
    printf("      |      |     \n\n");
}
int main()
{
    int count = 1, match_position, choice;
    char position, Match_winner[50];
    strcpy(line,"Match Winner: ");
    printf("Enter the name of the first player\n");
    fflush(stdin);
    gets(Player[0].Player_Name);
    printf("Enter the age of %s\n",Player[0].Player_Name);
    scanf("%d",&Player[0].age);
    printf("Enter the name of the second player\n");
    fflush(stdin);
    gets(Player[1].Player_Name);
    printf("Enter the age of %s\n",Player[1].Player_Name);
    fflush(stdin);
    scanf("%d",&Player[1].age);
    do
    {
        func_board_printer();
        count = (count % 2) ? 1 : 2;
        if (count%2==0){
            strcpy(current_player,Player[1].Player_Name);
        }
        else{
            strcpy(current_player,Player[0].Player_Name);
        }
        printf("%s's turn, which box would you like to mark %s?:  ", current_player,current_player);
        scanf("%d", &choice);
        position = (count == 1) ? '+' : '-';
        if (choice == 1 && box_no[1] == '1')box_no[1] = position;
        else if (choice == 2 && box_no[2] == '2')box_no[2] = position;
        else if (choice == 3 && box_no[3] == '3')box_no[3] = position;
        else if (choice == 4 && box_no[4] == '4')box_no[4] = position;
        else if (choice == 5 && box_no[5] == '5')box_no[5] = position;
        else if (choice == 6 && box_no[6] == '6')box_no[6] = position;
        else if (choice == 7 && box_no[7] == '7')box_no[7] = position;
        else if (choice == 8 && box_no[8] == '8')box_no[8] = position;
        else if (choice == 9 && box_no[9] == '9')box_no[9] = position;
        else{   
            printf("Position is already marked chooose another position!\n");
            count--;
            getch();
        }
        match_position = func_winner_check();
        count++;
    } while (match_position == -1);
    func_board_printer();
    if (match_position == 1){
        printf("Congratulations! %s you won!!!\nYou will get a prize\n", current_player);
        strcat(line,current_player);
        if (count == 2){
            strcpy(Match_winner,line);
        }
        else if (count == 3){
            strcpy(Match_winner,line);
        }
    }
    else{
        printf("==>\aGame draw");
        strcpy(Match_winner, "The Game was Drawn");
    }
    FILE *ptr;
    ptr = fopen("Record of wins.txt", "a");
    fputs(Match_winner, ptr);
    fputs("\n", ptr);
    fclose(ptr);
    getchar();
    return 0;
}


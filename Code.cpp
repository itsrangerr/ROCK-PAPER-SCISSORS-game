#include <iostream>
#include <ctime>
using namespace std;

char npcChoice();
char plrChoice();
void showChoices(char npc, char plr);
void winner(char npc, char plr);

int main(){
    // Seed for random number generator
    srand(time(NULL));
    //Set rounds
    int rounds = 1;
    do
    {
    cout <<"Welcome to round : " << rounds++ << endl;
    char plr, npc;
    // Get choices
    plr = plrChoice();
    npc = npcChoice();

    showChoices(npc, plr);
    winner(npc, plr);
    cout << "------------------------" << endl;
    } while (true);

    system("pause");
    return 0;
}
//Function 1
char plrChoice(){
    char choice;
    //Make sure input is valid
    do
    {
        cout <<"Enter your choice (R, P, S): ";
        cin >> choice;
    } while (choice != 'R' && choice != 'P' && choice != 'S' && choice != 'r' && choice != 'p' && choice != 's');
    //Convert to uppercase
    if (choice >= 'a' && choice <= 'z'){
        choice = choice - 32;
    }

    return choice;
}
//Function 2
char npcChoice(){
    //Random number
    int num = rand() % 3;
    char choice;
    //Set number to choice
    switch (num)
    {
    case 0:
        choice = 'R';
        break;
    case 1:
        choice = 'P';
        break;
    case 2:
        choice = 'S';
        break;
    default:
        break;
    }

    return choice;
}
//Function 3
void showChoices(char npc, char plr){
    //Show choices
    if(npc == 'R'){
        cout << "NPC chose Rock" << endl;
    } else if (npc == 'P'){
        cout << "NPC chose Paper" << endl;
    } else {
        cout << "NPC chose Scissors" << endl;
    }

    if(plr == 'R'){
        cout << "Player chose Rock" << endl;
    } else if (plr == 'P'){
        cout << "Player chose Paper" << endl;
    } else {
        cout << "Player chose Scissors" << endl;
    }
    
}
//Function 4
void winner(char npc, char plr){
    //set winner
    if (npc == plr){
        cout << "It's a tie!" << endl;
    } else if ((npc == 'R' && plr == 'S') || (npc == 'P' && plr == 'R') || (npc == 'S' && plr == 'P')){
        cout << "NPC wins!" << endl;
    } else {
        cout << "Player wins!" << endl;
    }
}
#include<iostream>

using namespace std;

void Board();
int Checkwin();
char BoardNum[] = {'1','2','3','4','5','6','7','8','9'};

int main()

{
    char ans = 'y';
    while(ans = 'y')
    {

    system("clear");
    cout<<"\t\t\t|Tic Tac Toe|"<<endl;

    int choice;//Takes the number entered by players
    
    char mark;//sets the mark on board i.e. 'X' or 'O'
    int playernum = 0;//used to change the name of the players



    string player1;
    string player2;

    cout<<"Player 1 enter your name: "<<endl;
    cin >> player1;
    cout<<"Player 2 enter your name: "<<endl;
    cin>>player2;
    system("clear");



   do{
       cout<<"\t\t\t|Tic Tac Toe|"<<endl;
       cout<<player1<<" [X]"<<endl;
       cout<<player2<<" [O]"<<endl;

       Board();

       if(playernum%2==0)
       {
           cout<<player1<<" enter a number: "<<endl;
           cin>>choice;
           mark = 'X';

       }
       else if(playernum%2 != 0)
       {
           cout<<player2<<" enter a number: "<<endl;
           cin>>choice;
           mark = 'O';

       }

       switch(choice)
       {
           case 1: BoardNum[0]=mark;
           break;
           case 2: BoardNum[1]=mark;
           break;
           case 3: BoardNum[2]=mark;
           break;
           case 4: BoardNum[3]=mark;
           break;
           case 5: BoardNum[4]=mark;
           break;
           case 6: BoardNum[5]=mark;
           break;
           case 7: BoardNum[6]=mark;
           break;
           case 8: BoardNum[7]=mark;
           break;
           case 9: BoardNum[8]=mark;
       }

       system("clear");//Clears the screen
       playernum++;

   }while(Checkwin() != 1);

    if(playernum%2==0)
       {
           cout<<player2<<" Win! "<<endl;

       }
       else if(playernum%2 != 0)
       {
           cout<<player1<<" Win! "<<endl;

       }
       cout <<"Do you want to play again ('y' or 'n'): "<<endl;
       cin >> ans;
    }

    return 0;
}

void Board()
{
    cout<<"\t\t\t"<<"     |     |     "<<endl;
    cout<<"\t\t\t"<<"  "<<BoardNum[0]<<"  |  "<<BoardNum[1]<<"  |  "<<BoardNum[2]<<"  "<<endl;
    cout<<"\t\t\t"<<"_____|_____|_____"<<endl;
    cout<<"\t\t\t"<<"     |     |     "<<endl;
    cout<<"\t\t\t"<<"  "<<BoardNum[3]<<"  |  "<<BoardNum[4]<<"  |  "<<BoardNum[5]<<"  "<<endl;
    cout<<"\t\t\t"<<"_____|_____|_____"<<endl;
    cout<<"\t\t\t"<<"     |     |     "<<endl;
    cout<<"\t\t\t"<<"  "<<BoardNum[6]<<"  |  "<<BoardNum[7]<<"  |  "<<BoardNum[8]<<"  "<<endl;
    cout<<"\t\t\t"<<"     |     |     "<<endl;

}

int Checkwin()
{
    if(BoardNum[0]==BoardNum[1]&&BoardNum[1]==BoardNum[2])
    {
        return 1;
    }else if(BoardNum[3]==BoardNum[4]&&BoardNum[4]==BoardNum[5])
    {
        return 1;
    }else if(BoardNum[6]==BoardNum[7]&&BoardNum[7]==BoardNum[8])
    {
        return 1;
    }else if(BoardNum[0]==BoardNum[4]&&BoardNum[4]==BoardNum[8])
    {
        return 1;
    }else if(BoardNum[0]==BoardNum[3]&&BoardNum[3]==BoardNum[6])
    {
        return 1;
    }else if(BoardNum[1]==BoardNum[4]&&BoardNum[4]==BoardNum[7])
    {
        return 1;
    }else if(BoardNum[2]==BoardNum[5]&&BoardNum[5]==BoardNum[8])
    {
        return 1;
    }else if(BoardNum[2]==BoardNum[4]&&BoardNum[4]==BoardNum[6])
    {
        return 1;

    }else
        return 0;
}

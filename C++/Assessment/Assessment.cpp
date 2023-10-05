#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int roundsToPlay;
    string playerName;
    cout<<"Enter Your Name: ";
    getline(cin, playerName);
    cout<<"Enter The Number Of Rounds To Play: ";
    cin>>roundsToPlay;

    int playerScore = 0;
    int computerScore = 0;

    srand(time(0));

    for (int round = 1; round <= roundsToPlay; round++) 
	{
        int playerChoice, computerChoice;

        cout <<endl<< "Round " << round << ": " << endl;
        cout << "Enter Your Choice (1: Rock, 2: Paper, 3: Scissors): ";
        cin >> playerChoice;

        computerChoice = rand() % 3 + 1;

        cout << "Computer Chose: ";
        switch (computerChoice) {
            case 1:
                cout << "Rock" << endl;
                break;
            case 2:
                cout << "Paper" << endl;
                break;
            case 3:
                cout << "Scissors" << endl;
                break;
        }
        if ((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)) 
			{
            cout << playerName << " Wins This Round!" << endl;
            playerScore++;
        } 
		else if ((computerChoice == 1 && playerChoice == 3) ||
                   (computerChoice == 2 && playerChoice == 1) ||
                   (computerChoice == 3 && playerChoice == 2)) 
				   {
            cout << "Computer Wins This Round!" << endl;
            computerScore++;
        }
		 else 
		{
            cout << "It's A Tie!" << endl;
        }
    }

    cout << "Game Over!"<<endl;
    cout << "Final Scores:"<<endl;
    cout << playerName << ": " << playerScore << " Points"<<endl;
    cout << "Computer: " << computerScore << " Points"<<endl;

    if (playerScore > computerScore) 
	{
        cout << playerName << " Wins The Game!" << endl;
    }
	 else if (playerScore < computerScore) 
	{
        cout << "Computer Wins The Game!" << endl;
    }
	 else 
	{
        cout << "It's A Tie Game!" << endl;
    }

    return 0;
}

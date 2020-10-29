#include<iostream>
#include<windows.h>

using namespace std;

void rules() {
	string sel_main;
	cout << "TIC TAC TOE GAMES " << endl;
	cout << "\nTic Tac Toe Rules : " << endl;
	cout << "1. The game is played on a grid that's 3 squares by 3 squares" << endl;
	cout << "2. Player 1 is X and Player 2 is O" << endl;
	cout << "3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner" << endl;
	cout << "4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie" << endl;

	do {
		cout << "\nDo you want to play Tic Tac Toe (y/n) ? : ";
		cin >> sel_main;

		if (sel_main == "y") {
			system("CLS");
		}
		else if (sel_main == "n") {
			cout << "\nAlright , See you next time! " << endl;
			exit(0);
		}
		else {
			cout << "Wrong Input!" << endl;
		}
	} while (sel_main != "y");
}

int main() {
	//int sel_main;
	int b = 0;
	int k = 0;
	int r = 0;
	char nm1[20];
	char nm2[20];
	int tictactoe[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	rules();

	cout << "TIC TAC TOE GAME" << endl;
	cout << "Input Player 1 Name : ";
	cin >> nm1;
	cout << "\nInput Player 2 Name : ";
	cin >> nm2;

	for (b = 0; b < 3; b++) {
		for (k = 0; k < 3; k++) {
				cout << "  " << tictactoe[b][k] << " |";
		}
		cout << "\n-----+-----+------";
		cout << endl;
	}

	return 0;
}	

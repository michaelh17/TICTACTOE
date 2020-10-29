#include<iostream>
#include<windows.h>

using namespace std;

void rules() {
	string sel_main;
	cout << "Tic Tac Toe Rules : " << endl;
	cout << "1. The game is played on a grid that's 3 squares by 3 squares" << endl;
	cout << "2. Player 1 are X, Player 2 is O" << endl;
	cout << "3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner" << endl;
	cout << "4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie" << endl;

	cout << "\nDo you want to play Tic Tac Toe (y/n)";
	cin >> sel_main;

	if (sel_main == "y" || sel_main == "Y") {
		system("CLS");
	}

	if (sel_main == "n" || sel_main == "N") {
		cout << "\nAlright , See you next time! ";
		exit(0);
	}
}



int main() {
	//int sel_main;
	char nm1[20];
	char nm2[20];

	rules();

	cout << "TIC TAC TOE GAME" << endl;
	cout << "Input Player 1 Name : ";
	cin >> nm1;
	cout << "\nInput Player 2 Name : ";
	cin >> nm2;


	return 0;
}	
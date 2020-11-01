#include<iostream>
#include<windows.h>

using namespace std;

void rules() { //Function Rules
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
			system("CLS");
			cout << "\nAlright , See you next time! " << endl;
			exit(1);
		}
		else {
			cout << "\nWrong Input!" << endl;
		}
	} while (sel_main != "y");
}

int func_turn(int turn) { //function giliran
	int tpl;
	tpl = turn % 2 + 1;
	return tpl;
}


int main() {
	int b = 0;
	int k = 0;
	int turn = 0;
	int choose, line;
	int col;
	char nm1[20];
	char nm2[20];
	int tictactoe[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	rules(); // pemanggilan function Rules

	cout << "TIC TAC TOE GAME" << endl;
	cout << "Input Player 1 Name : ";
	cin >> nm1;
	cout << "\nInput Player 2 Name : ";
	cin >> nm2;

	for (b = 0; b < 3; b++) {
		for (k = 0; k < 3; k++) {
			cout << "  " << tictactoe[b][k] << "  |";
		}
		cout << "\n-----+-----+------";
		cout << endl;
	}

	for (turn = 0; turn < 9; turn++) {
		func_turn(turn); //pemanggilan function giliran
		if (func_turn(turn) == 1) {
			cout << "\nIt's " << nm1 << " Turn!";
		}

		if (func_turn(turn) == 2) {
			cout << "\nIt's " << nm2 << " Turn!";
		}


		do {
			cout << "\nEnter the box number you choose : ";
			cin >> choose;

			if (choose >= 1 && choose <= 3) {
				line = 0;
				col = col - 1;
			}
			else if (choose >= 4 && choose <= 6) {
				line = 1;
				col = col - 4;
			}
			else {
				line = 2;
				col = col - 7;
			}
		} while (col < 1 || col >9 || tictactoe[line][col] == 'x' || tictactoe[line][col] == 'o');

	}
	return 0;
}	

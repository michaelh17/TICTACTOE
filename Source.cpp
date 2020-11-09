#include<iostream>
#include<conio.h>
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
	cout << "5. If you wanna play this game again , player 1 and player 2 will be switched (so player 2 will be the first player)" << endl;

	do {
		cout << "\nDo you want to play Tic Tac Toe (y/n) ? : ";
		cin >> sel_main;

		if (sel_main == "y") {
			system("CLS");
		}
		else if (sel_main == "n") {
			system("CLS");
			cout << "\n\aAlright , See you next time! " << endl;
			exit(1);
		}
		else {
			cout << "\nWrong Input!" << endl;
		}
	} while (sel_main != "y");
}


void tictactoeboard(char tictactoe[3][3]) { //function  tictactoe board
	system("CLS");
	cout << "     |     |     " << endl;
	cout << "  " << tictactoe[0][0] << "  |  " << tictactoe[0][1] << "  |  " << tictactoe[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << tictactoe[1][0] << "  |  " << tictactoe[1][1] << "  |  " << tictactoe[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << tictactoe[2][0] << "  |  " << tictactoe[2][1] << "  |  " << tictactoe[2][2] << endl;

	cout << "     |     |     " << endl << endl;
}

int winchecker(char tictactoe[3][3]) {
	//Horizontal
	if (tictactoe[0][0] == tictactoe[0][1] && tictactoe[0][1] == tictactoe[0][2]) {
		return 1;
	}
	else if (tictactoe[1][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[1][2]) {
		return 1;
	}
	else if (tictactoe[2][0] == tictactoe[2][1] && tictactoe[2][1] == tictactoe[2][2]) {
		return 1;
	}
	//Vertical
	else if (tictactoe[0][0] == tictactoe[1][0] && tictactoe[1][0] == tictactoe[2][0]) {
		return 1;
	}
	else if (tictactoe[0][1] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][1]) {
		return 1;
	}
	else if (tictactoe[0][2] == tictactoe[1][2] && tictactoe[1][2] == tictactoe[2][2]) {
		return 1;
	}
	//Diagonal
	else if (tictactoe[0][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][2]) {
		return 1;
	}
	else if (tictactoe[0][2] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][0]) {
		return 1;
	}
	//Pengecekkan Draw
	else if (tictactoe[0][0] != '1' && tictactoe[0][1] != '2' && tictactoe[0][2] != '3'
		&& tictactoe[1][0] != '4' && tictactoe[1][1] != '5' && tictactoe[1][2] != '6'
		&& tictactoe[2][0] != '7' && tictactoe[2][1] != '8' && tictactoe[2][2] != '9') {

		return 0;
	}
	else {
		return -1;
	}
}


int func_turn(int turn) { //function giliran
	int tpl;
	tpl = turn % 2;
	return tpl;

}

void reset(char tictactoe[3][3], int turn) {
	tictactoe[0][0] = '1';
	tictactoe[0][1] = '2';
	tictactoe[0][2] = '3';
	tictactoe[1][0] = '4';
	tictactoe[1][1] = '5';
	tictactoe[1][2] = '6';
	tictactoe[2][0] = '7';
	tictactoe[2][1] = '8';
	tictactoe[2][2] = '9';
	turn = 0;
}


int main() {  //MAIN PROGRAM
	int b = 0;
	int turn = 0;
	int choose = 0;
	int col = 0;
	char nm1[20];
	char nm2[20];
	char marker;
	char symbol[2] = { 'X','O' };
	char tictactoe[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
	string decision;

	rules(); // pemanggilan function Rules

	do {
		reset(tictactoe, turn);

		cout << "TIC TAC TOE GAME" << endl;
		cout << "Input Player 1 Name : ";
		cin >> nm1;
		cout << "\nInput Player 2 Name : ";
		cin >> nm2;


		do {
			turn++;
			func_turn(turn); //pemanggilan function giliran


			tictactoeboard(tictactoe); //pemanggilan function tictactoeboard
			if (func_turn(turn) == 1) {
				cout << "\nIt's " << nm1 << " Turn!";
				marker = symbol[0];
			}

			else {
				cout << "\nIt's " << nm2 << " Turn!";
				marker = symbol[1];
			}

			cout << "\nInsert box number you choose : ";
			cin >> choose;

			//Melakukan penandaan pada box tictactoe
			if (choose == 1 && tictactoe[0][0] == '1') {

				tictactoe[0][0] = marker;
			}

			else if (choose == 2 && tictactoe[0][1] == '2') {
				tictactoe[0][1] = marker;

			}
			else if (choose == 3 && tictactoe[0][2] == '3') {

				tictactoe[0][2] = marker;
			}

			else if (choose == 4 && tictactoe[1][0] == '4') {

				tictactoe[1][0] = marker;
			}

			else if (choose == 5 && tictactoe[1][1] == '5') {

				tictactoe[1][1] = marker;
			}

			else if (choose == 6 && tictactoe[1][2] == '6') {

				tictactoe[1][2] = marker;
			}

			else if (choose == 7 && tictactoe[2][0] == '7') {

				tictactoe[2][0] = marker;
			}

			else if (choose == 8 && tictactoe[2][1] == '8') {

				tictactoe[2][1] = marker;
			}

			else if (choose == 9 && tictactoe[2][2] == '9') {

				tictactoe[2][2] = marker;
			}

			else {
				cout << "\nInvalid Input , Please Try Again! Press Enter T o Continue . . .";
				turn--;
				//getch();
			}

			b = winchecker(tictactoe);


		} while (b == -1);

		tictactoeboard(tictactoe);

		if (b == 1) {

			if (func_turn(turn) == 1) {
				cout << "\n\aPlayer " << nm1 << " Win!" << endl;
			}

			else {

				cout << "\n\aPlayer " << nm2 << " Win!" << endl;
			}
		}
		else {
			cout << "\n\aGame Draw!" << endl;
		}

		do {
			cout << "\nDo you want to play again ? (y/n) : ";
			cin >> decision;

			if (decision == "y") {
				system("CLS");

			}
			else if (decision == "n") {
				system("CLS");
				cout << "\n\aAlright , See you next time! " << endl;
				exit(1);
			}
			else {
				cout << "\nWrong Input!" << endl;
			}
		} while (decision != "y");
	} while (decision == "y");
	return 0;
}

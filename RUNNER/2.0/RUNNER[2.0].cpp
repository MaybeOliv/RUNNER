#include <iostream>
#include <windows.h>
using namespace std;


//VARIABLES
string character = "\n\n>";
string obstacle = "     &";
int speed = 100;
int score = 0;
int setop;

//SETTINGS
void settings() {
	while (1) {
		system("CLS");
		cout << "1: speed\n";
		cout << "2: exit\n";
		cout << "option: ";
		cin >> setop;
		if (setop == 1) {
			cout << "speed[ms]: ";
			cin >> speed;
			Sleep(500);
			cout << "speed updated\n";
			Sleep(1000);
			break;

		}
		else if (setop == 2) {
			cout << "exiting.";
			Sleep(333.33);
			system("CLS");

			cout << "exiting..";
			Sleep(333.33);
			system("CLS");

			cout << "exiting...";
			Sleep(333.33);
			system("CLS");

			break;
		}

	}
}


//KEY INPUT
void keycheck() {
	if (GetAsyncKeyState(VK_SPACE)) {
		character = ">\n\n";
	}
}


//MAIN CODE
int main() {
	score = 0;
	cout << "score: " << score << "\n";
	cout << "speed:  " << speed << "\n";
	cout << character;
	cout << obstacle << "\n";
	cout << "space to start\n";
	cout << "escape for settings\n";
	if (GetAsyncKeyState(VK_SPACE)) {
		score = 0;
		while (1) {
			system("CLS");
			cout << "score: " << score << "\n";
			obstacle = "     &";
			cout << character << obstacle;
			Sleep(speed);
			character = "\n\n>";
			keycheck();

			system("CLS");
			cout << "score: " << score << "\n";
			obstacle = "    &";
			cout << character << obstacle;
			Sleep(speed);
			character = "\n\n>";
			keycheck();

			system("CLS");
			cout << "score: " << score << "\n";
			obstacle = "   &";
			cout << character << obstacle;
			Sleep(speed);
			character = "\n\n>";
			keycheck();

			system("CLS");
			cout << "score: " << score << "\n";
			obstacle = "  &";
			cout << character << obstacle;
			Sleep(speed);
			character = "\n\n>";
			keycheck();

			system("CLS");
			cout << "score: " << score << "\n";
			obstacle = " &";
			cout << character << obstacle;
			Sleep(speed);
			character = "\n\n>";
			keycheck();

			system("CLS");
			cout << "score: " << score << "\n";
			obstacle = "&";
			cout << character << obstacle;
			Sleep(speed);
			character = "\n\n>";
			keycheck();

			system("CLS");
			cout << "score: " << score << "\n";
			obstacle = "";
			cout << character << obstacle;
			Sleep(speed);
			if (character != ">\n\n") {
				for (int i = 0; i <= 4; ++i) {
					system("CLS");
					cout << "GAMEOVER\n";
					int restart = 5 - i;
					cout << "score: " << score << "\n";
					cout << "restarting: " << restart;
					Sleep(1000);
					system("CLS");
					if (restart == 0) {
						score = 0;
						break;
					}
				}
			}
			else if (character == ">\n\n") {
				++score;
			}
		}
	}
	else if (GetAsyncKeyState(VK_ESCAPE)) {
		settings();
	}
	system("CLS");
	return main();
}
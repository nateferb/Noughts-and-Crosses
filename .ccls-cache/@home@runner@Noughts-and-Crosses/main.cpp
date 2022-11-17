#include <iostream>
#include <random>

char position[3][3][3];

void displayGrid() {
	std::cout << "\t1\t2\t3\n";
	std::cout << "a\t" << position[0][0][0] << "\t" << position[0][1][0] << "\t" << position[0][2][0] << "\n";
	std::cout << "b\t" << position[1][0][1] << "\t" << position[1][1][1] << "\t" << position[1][2][1] << "\n";
	std::cout << "c\t" << position[2][0][2] << "\t" << position[2][1][2] << "\t" << position[2][2][2] << "\n\n";
}

int main() {
	char norc;
	char playAgain;
	char xcoord;
	char ycoord;

	std::cout << "INSTRUCTIONS:\n";
	std::cout << "Choose either 'x' or 'o' to begin. Type coordinates in the format '2a'\n\n";

	std::cout << "Do you want to be noughts (o) or crosses (x)? ";
	std::cin >> norc;

	if (norc == 'o') {
		std::cout << "\nNoughts (o) Selected!\n\n";
	}
	else if (norc == 'x') {
		std::cout << "\nCrosses (x) Selected\n\n";
	}
	else {
		// Select either 'x' or 'o' randomly for user
		// std::cout << "Since you are not competant enough to choose an option, we have chosen " << norc << "\n";
	}

	displayGrid();

	std::cout << "Your Turn!\n";
	std::cout << "Enter y coordinate (a, b or c): ";
	std::cin >> ycoord;
	std::cout << "Enter x coordinate (1, 2 or 3): ";
	std::cin >> xcoord;
	if (ycoord == 'a') {
		if (xcoord == '1') {
			position[0][0][0] = norc;
		}
		else if (xcoord == '2') {
			
		}
		else if (xcoord == '3') {
			
		}
	}
	displayGrid();
	
	std::cout << "\n\nDo you want to play again?\nType 'y' or 'n': ";
	std::cin >> playAgain;
	if (playAgain == 'y') {
		main();
	}
	else if (playAgain == 'n') {
		std::cout << "OK, bye then!";
	}
}
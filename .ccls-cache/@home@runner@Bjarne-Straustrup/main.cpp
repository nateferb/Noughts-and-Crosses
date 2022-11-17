#include <iostream>
#include <random>

char position[3][3][3];

void displayGrid() {
	std::cout << position[0][0][0] << "\t" << position[0][1][0] << "\t" << position[0][2][0] << "\n";
	std::cout << position[1][0][1] << "\t" << position[1][1][1] << "\t" << position[1][2][1] << "\n";
	std::cout << position[2][0][2] << "\t" << position[2][1][2] << "\t" << position[2][2][2] << "\n\n";
}

int main() {
	char norc;

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
	std::cout << "Where do you want to place your " << norc << "? ";
	
}
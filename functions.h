#include <iostream>
#include <random>

char position[3][3][3];
char playAgain;
char xcoord;
char ycoord;
char xoro;
char winner;
char mors;

std::string p1name;
std::string p2name;

void displayGrid() {
	std::cout << "\n\t1\t2\t3\n";
	std::cout << "a\t" << position[0][0][0] << "\t" << position[0][1][0] << "\t" << position[0][2][0] << "\n";
	std::cout << "b\t" << position[1][0][1] << "\t" << position[1][1][1] << "\t" << position[1][2][1] << "\n";
	std::cout << "c\t" << position[2][0][2] << "\t" << position[2][1][2] << "\t" << position[2][2][2] << "\n\n";
}

void xTurn() {
  std::cout << "Player x's Turn!\n";
  std::cout << "Enter y coordinate (a, b or c): ";
  std::cin >> ycoord;
  std::cout << "Enter x coordinate (1, 2 or 3): ";
  std::cin >> xcoord;
  if (ycoord == 'a') {
    if (xcoord == '1') {
      position[0][0][0] = 'x';
    } else if (xcoord == '2') {
      position[0][0][0] = 'x';
    } else if (xcoord == '3') {
      position[0][0][0] = 'x';
    }
  }
}

void oTurn() {
  std::cout << "Player o's Turn!\n";
  std::cout << "Enter y coordinate (a, b or c): ";
  std::cin >> ycoord;
  std::cout << "Enter x coordinate (1, 2 or 3): ";
  std::cin >> xcoord;
  if (ycoord == 'a') {
    if (xcoord == '1') {
      position[0][0][0] = 'o';
    } else if (xcoord == '2') {
      position[2][1][1] = 'o';
    } else if (xcoord == '3') {
      position[0][0][0] = 'o';
    }
  }
}

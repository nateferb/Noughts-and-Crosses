#include "functions.h"

int solo() {
  std::cout << "Do you want to be noughts (o) or crosses (x)? ";
  std::cin >> xoro;

  if (xoro == 'o') {
    std::cout << "\nNoughts (o) Selected!\n\n";
  } else if (xoro == 'x') {
    std::cout << "\nCrosses (x) Selected\n\n";
  } else {
    std::cout << "please select either 'x' or 'o'.\n";
    solo();
  }
  return 0;
}

int multiplayer() {
  std::cout << "Player x, What is your name? ";
  std::cin >> p1name;
  std::cout << "Player o, What is your name? ";
  std::cin >> p2name;

  while (winner != 'x' || 'o') {
    displayGrid();
    xTurn();
    displayGrid();
    oTurn();
  }

  std::cout << "\n\nDo you want to play again?\nType 'y' or 'n': ";
  std::cin >> playAgain;
  if (playAgain == 'y') {
    multiplayer();
  } else if (playAgain == 'n') {
    std::cout << "OK, bye then!";
  }
}

int main() {
  std::cout << "Multiplayer (m) or Single player (s)? ";
  std::cin >> mors;
  if (mors == 'm') {
    multiplayer();
  } else if (mors == 's') {
    solo();
  } else {
    std::cout << "Please enter either 'm' or 's' to select the game mode.\n";
    main();
  }
}

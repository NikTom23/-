// teaching.nikita.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
enum {
	KAMEN,
	NOJNICI,
	PAPER

};

void print() {
	std::cout << "1 - rock\n";
	std::cout << "2 - snip\n";
	std::cout << "3 - paper\n";
	std::cout << "INTER YOUR NUMBER " << std::endl;

}//---

int main()
{
	int user, pc = 2;
	print();

	std::cin >> user;

	if (user > 3 ) {
		std::cout << "ERROR" << std::endl;

	if (user == 1 && pc == 2 || user == 2 && pc == 3 || user == 3 && pc == 1) {
		std::cout << "YOU WIN !! " << std::endl;
	} 
	else {
		std::cout << "YOU LOSE " << std::endl;
	}
}
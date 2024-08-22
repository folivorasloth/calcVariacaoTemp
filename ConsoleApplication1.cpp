#include <iostream>

int main() {

	float m1, m2, c, t1, t2, tempQ, tempF, tempFin, tot1, tot2;

	std::cout << "temp aQ: ";
	std::cin >> tempQ;
	
	std::cout << "L aF: ";
	std::cin >> m2;
	std::cout << "temp aF: ";
	std::cin >> tempF;

	std::cout << "temp final: ";
	std::cin >> tempFin;

	t1 = tempQ - tempFin;
	t2 = tempFin - tempF;

	
	tot2 = m2 * t2;

	m1 = tot2 / t1;

	std::cout << "res: " << m1;

	return 0;
}
#include <iostream>

int main() {

	float m1, m2, c, t1, t2, tempQ, tempF, tempFin, tot1, tot2;

	std::cout << "Insira a temperatura da agua quente: ";
	std::cin >> tempQ;

	std::cout << "\nLitros de agua fria para esquentar: ";
	std::cin >> m2;
	std::cout << "\nTemperatura da agua a ser esquentada: ";
	std::cin >> tempF;

	std::cout << "\nTemperatura final desejada: ";
	std::cin >> tempFin;

	t1 = tempQ - tempFin;
	t2 = tempFin - tempF;


	tot2 = m2 * t2;

	m1 = tot2 / t1;

	std::cout << "\n" << m1 << " litros de agua quente para esquentar " << m2 << " litros\n\n";

	return 0;
}
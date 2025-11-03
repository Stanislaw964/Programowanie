// TESTConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
	float pierwszaLiczba, drugaLiczba, trzeciaLiczba, srednia;
	std::cout << "Podaj pierwsz¹ liczbe\n";
	std::cin >> pierwszaLiczba;
	std::cout << "Podaj drug¹ liczbe\n";
	std::cin >> drugaLiczba;
	std::cout << "Podaj trzeci¹ liczbe\n";
	std::cin >> trzeciaLiczba;

	srednia = (pierwszaLiczba + drugaLiczba + trzeciaLiczba) / 3;

	std::cout << "Œrednia aretmetyczna wynosi " << srednia;

}
void task3()
{
	float suma, roznica, iloczyn, iloraz, piewszaLiczab, drugaLiczba;
	std::cout << "Podaj pierwsz¹ liczbe\n";
	std::cin >> piewszaLiczab;
	std::cout << "Podaj drug¹ liczbe\n";
	std::cin >> drugaLiczba;

	suma = piewszaLiczab + drugaLiczba;
	roznica = piewszaLiczab - drugaLiczba;
	iloczyn = piewszaLiczab * drugaLiczba;

	std::cout << "suma wynosi " << suma << "\n"; 
	std::cout << "ró¿nica wynosi " << roznica << "\n";
	std::cout << "iloczyn wynosi " << iloczyn << "\n";
	if (drugaLiczba != 0)
	{
		iloraz = piewszaLiczab / drugaLiczba;
		std::cout << "iloraz wynosi " << iloraz << "\n";
	}
	else
		std::cout << "Nie mo¿na dieiæ przez 0";
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task3();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// InstructionIFConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//< - mniejszy
//> - wi�kszy
//<= - minejszy b�� r�wny
//>= - wi�krzy b�� r�wny
//== - r�wny
//!=  r�ny


#include <iostream>

void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczb� ca�kowit�:\n";
	std::cin >> numberFromUser;

	if (numberFromUser > 0)
		std::cout << "Poda�e� liczbe dodatni�\n";

	if (numberFromUser < 0)
		std::cout << "Poda�e� liczbe ujemn�\n";

	if (numberFromUser == 0)
		std::cout << "Poda�e� liczbe 0\n";
}

void task2()
{
	int numer,reszta;

	std::cout << "Podaj liczb� ca�kowit�:\n";
	std::cin >> numer;

	reszta = numer % 2;

	if (reszta == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "Liczba jest nie parzysta\n";
}
//Napisz program kt�ry stwierdzi czy liczba jest z zakresy 1 do 10
void task3()
{
	int numer,liczba;

	std::cout << "Podaj liczb� ca�kowit�:\n";
	std::cin >> numer;

	if (numer >= 1)
	{
		if (numer <= 10)
			std::cout << "liczba jest w zakresie 1 do 10\n";
		else 
			std::cout << "liczba nie jest w zakresie 1 do 10\n";
	}
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task3();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


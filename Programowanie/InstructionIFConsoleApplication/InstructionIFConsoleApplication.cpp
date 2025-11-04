// InstructionIFConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//< - mniejszy
//> - wiêkszy
//<= - minejszy b¹æ równy
//>= - wiêkrzy b¹æ równy
//== - równy
//!=  ró¿ny
//Opeaowy logiczne
//&& - and
// || - or
// ! - not



/*
	a	b	&&	||	!
	f	f	f	f	t
	f	t	f	t	t
	t	f	f	t	f
	f	t	t	t	f



*/


#include <iostream>

void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> numberFromUser;

	if (numberFromUser > 0)
		std::cout << "Poda³eœ liczbe dodatni¹\n";

	if (numberFromUser < 0)
		std::cout << "Poda³eœ liczbe ujemn¹\n";

	if (numberFromUser == 0)
		std::cout << "Poda³eœ liczbe 0\n";
}

void task2()
{
	int numer, reszta;

	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> numer;

	reszta = numer % 2;

	if (reszta == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "Liczba jest nie parzysta\n";
}
//Napisz program który stwierdzi czy liczba jest z zakresy 1 do 10
void task3()
{
	int numer;

	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> numer;

	if (numer >= 1)
	{
		if (numer <= 10)
			std::cout << "liczba jest w zakresie 1 do 10\n";
		else
			std::cout << "liczba nie jest w zakresie 1 do 10\n";
	}
	else
	{
		std::cout << "liczba nie jest w zakresie 1 do 10\n";
	}

}
//wrsja  3
void task4()
{
	int numer;

	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> numer;

	if (numer >= 1)
		if (numer <= 10)
			std::cout << "liczba jest w zakresie 1 do 10\n";
		else
			std::cout << "liczba nie jest w zakresie 1 do 10\n";
	else
		std::cout << "liczba nie jest w zakresie 1 do 10\n";
}

//*. Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
void task5()
{
	float pierwszyNumer, drugiNumer;

	std::cout << "Podaj pierwsz¹ liczbe\n";
	std::cin >> pierwszyNumer;
	std::cout << "Podaj drug¹ liczbe\n";
	std::cin >> drugiNumer;

	if (pierwszyNumer == drugiNumer)
		std::cout << "Liczby s¹ sobie równe ";
	else
		std::cout << "Liczby nie s¹ sobie równe";

}
// Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
void task6()
{
	short wiek;
	std::cout << "Podaj swój wiek\n";
	std::cin >> wiek;

	if (wiek >= 18)
		std::cout << "jesteœ pe³noletni i kupisz sobie energola";
	else
		std::cout << "nie jesteœ pe³noletni i nie kupisz sobie energola";
}
// Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
void task7()
{
	float liczba;

	std::cout << "Podaj liczbe\n";
	std::cin >> liczba;

	if (liczba >= 0)
		std::cout << "Twoja liczba bezwglendna wynosi "<< liczba << "\n";
	else
	{
		float liczbabezwzglendna;
		liczbabezwzglendna = liczba * -1;

		std::cout << "Twoja liczba bezwglendna wynosi " << liczbabezwzglendna << "\n";
	}
}
//*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
void task8()
{
	int rok;

	std::cout << "Podaj jakiæ rok\n";
	std::cin >> rok;
	
	if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
		std::cout << "Poda³eœ rok przestêpny";
	else
		std::cout << "Poda³eœ rok nie przestêpny";
}
//*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task9()
{
	int liczba;
	std::cout << "Podaj liczbe\n";
	std::cin >> liczba;

	if (liczba % 3 == 0 && liczba % 5 == 0)
		std::cout << "Liczba jest podzielna przez 3 i 5\n";
	else
		std::cout << "Liczba nie jest podzielna przez 3 i 5\n";
}	
int main()
{
	setlocale(LC_CTYPE, "polish");
	task8();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


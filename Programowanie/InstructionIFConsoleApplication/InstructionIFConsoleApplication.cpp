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
//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi,
// czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task0()
{
	int number;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number;

	if (number % 3 == 0 && number % 5 == 0)
		std::cout << "Liczba jest podzielna\n";
}

//Program sprawdzaj¹cy czy podana data jest poprawna
void task10()
{
	int day, month, year;
	std::cout << "Podaj dzieñ\n";
	std::cin >> day;
	std::cout << "Podaj miesi¹c\n";
	std::cin >> month;
	std::cout << "Podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& year != 0
		&& ((month == 4 || month == 6 || month == 9 || month == 11) && day != 31)
		&& month == 2 && (day <= 28
			|| day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		)
	{
		std::cout << "Data " << day << "." << month << "." << year << " jest poprawna\n";
	}
	else
	{
		std::cout << "Data nie jest poprawna";
	}
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 
// i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task11()
{
	int dayOfWeek;
	std::cout << "Podaj numer dnia tygodnia (1-7)\n";
	std::cin >> dayOfWeek;

	if (dayOfWeek == 1)
		std::cout << "Poniedzia³ek\n";
	else if (dayOfWeek == 2)
		std::cout << "Wtorek\n";
	else if (dayOfWeek == 3)
		std::cout << "Œroda\n";
	else if (dayOfWeek == 4)
		std::cout << "Czwartek\n";
	else if (dayOfWeek == 5)
		std::cout << "Pi¹tek\n";
	else if (dayOfWeek == 6)
		std::cout << "Sobota\n";
	else if (dayOfWeek == 7 || dayOfWeek == 0)
		std::cout << "Niedziela\n";
	else
		std::cout << "Dzieñ niepoprawny\n";

	switch (dayOfWeek)
	{
	case 1:
		std::cout << "Poniedzia³ek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "Œroda\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Pi¹tek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "Dzieñ niepoprawny\n";
	}
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru jednoelementowego.
void task12()
{
	int firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;

	int max;

	max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru dwuelementowego.
void task13()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;

	int max;

	if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru trójelementowego.
void task14()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;

	int max;

	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru czteroelementowego.
void task15()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> fourthNumber;

	int max;

	if (fourthNumber > thirdNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > firstNumber)
		max = fourthNumber;
	else if (thirdNumber > secondNumber
		&& thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}
/* Napisz program, który poprosi u¿ytkownika o podanie masy cia³a(w kilogramach) i wzrostu(w metrach).
Na  podstawie tych danych oblicz wskaŸnik BMI(Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹

Wzór :

BMI = masa / wysokoœæ ^ 2 */
void task16()
{
	float masa, wysokosc, otylosc;
	std::cout << "Podaj swoj¹ mase w kg\n";
	std::cin >> masa;
	std::cout << "Podaj wrost w cm \n";
	std::cin >> wysokosc;

	otylosc = masa / (wysokosc * wysokosc);

	if (otylosc < 16)
		std::cout << "Masz wyg³odzenie\n";
	else if (otylosc >= 16 && otylosc <= 16.99)
		std::cout << "masz wychudzenie\n";
	else if (otylosc >= 17 && otylosc <= 18.49)
		std::cout << "masz niedowagê\n";
	else if (otylosc >= 18.5 && otylosc <= 24.99)
		std::cout << "masz wagê prawid³ow¹\n";
	else if (otylosc >= 25 && otylosc <= 29.99)
		std::cout << "masz nadwagê\n";
	else if (otylosc >= 30 && otylosc <= 34.99)
		std::cout << "masz I stopieñ oty³oœci\n";
	else if (otylosc >= 30 && otylosc <= 39.99)
		std::cout << "masz II stopieñ oty³oœci\n";
	else if (otylosc >= 40)
		std::cout << "masz oty³oœæ skrajn¹\n";
}
// .Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t.Wyœwietl odpowiedni komunikat.//
void task17()
{
	int pierwszyBok, drogiBok, trzeciBok;
	std::cout << "Podaj pierwszy bok\n";
	std::cin >> pierwszyBok;
	std::cout << "Podaj drógi bok\n";
	std::cin >> drogiBok;
	std::cout << "Podaj podaj 3 bok\n";
	std::cin >> trzeciBok;

	if (trzeciBok > pierwszyBok && trzeciBok > drogiBok) 
		std::cout <<
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task16();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


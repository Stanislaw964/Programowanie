// LoopDoWhileConsoleApplication.cpp 

#include <iostream>

//Napisz program, który ma pobra? od u?ytkownika liczb? dodatni?. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int number;
	/*
	std::cout << "Podaj dodatni? liczb?:\n";
	std::cin >> number;
	if (number < 0)
	{
		std::cout << "Podaj dodatni? liczb?:\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj dodatni? liczb?:\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj dodatni? liczb?:\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
				}
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj dodatni? liczb?:\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Poda?e? dodatni? liczb?: " << number << "\n";
}

//Napisz program, który wylosuje liczb? 
//a nast?pnie uzytkownik b?dzie musia? j? zgadn??.
void task2()
{
	int randomNumber;
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;

	srand(time(NULL));

	std::cout << "Rand() zwraca warto?ci z przedzi??u <0;" << RAND_MAX << ">\n";

	//LOWER_RANGE = 5; //b??na instrukcja
	//<9; 50>
	randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	//std::cout << "Wylosowana liczba: " << randomNumber << "\n";

	int number;

	/*
	std::cout << "Podaj liczb?:\n";
	std::cin >> number;
	if (number != randomNumber)
	{
		std::cout << "Podaj liczb?:\n";
		std::cin >> number;
		if (number != randomNumber)
		{
			std::cout << "Podaj liczb?:\n";
			std::cin >> number;
			if (number != randomNumber)
			{
				//...
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczb?:\n";
		std::cin >> number;
		if (number < randomNumber)
			std::cout << "Poda?e? za ma?? liczb?.\n";
		if (number > randomNumber)
			std::cout << "Poda?e? za du?? liczb?\n";
	} while (number != randomNumber);

	std::cout << "Gratulacje!!!\nZgad?e? liczb?\n";
}

//Napisz program wy?wietlaj?cy liczby ca?kowite z przedzia?u <1,x>.
//Gdzie x podaje u?ytkownik.
void task3()
{
	//std::cout << "1, 2, 3, 4, 5, 6\n";
	unsigned long long upperRange;
	std::cout << "Podaj górny zakres wi?kszy b?d? równy 1\n";
	std::cin >> upperRange;
	/*
		std::cout << "1, ";
		if (upperRange > 1)
		{
			std::cout << "2, ";
			if (upperRange > 2)
			{
				std::cout << "3, ";
				if (upperRange > 3)
				{
					std::cout << "4, ";
					//...
				}
			}
		}
		std::cout << "\n";
		*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);

	std::cout << "\n";
}

//Napisz program, który policzy sum? cyfr 
// podanej przez u?ytkownika liczby.
void task4()
{
	int number;
	std::cout << "Podaj liczb?\n";
	std::cin >> number;

	int sum = 0;

	do
	{
		int digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma cyfr: " << sum << "\n";


}
/*Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero.Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
 Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej.Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
 Program odlicza od zadanej liczby do zera(np.„Start za 5… 4… 3…”) i koñczy z komunikatem „Start!”.
 Program wczytuje liczbê n i oblicza 2 ^ n w pêtli.Pyta, czy u¿ytkownik chce obliczyæ kolejn¹ potêgê.
 Program wczytuje liczby i znajduje najwiêksz¹ z nich.Koñczy, gdy u¿ytkownik poda 0.*/

void task5()
{
	int liczba;
	do
	{
		std::cout << "podaj liczbe (jeżeli podasz 0 program się zakończy)\n";
		std::cin >> liczba;
	} while (liczba != 0);

	std::cout << "podałeś liczbe 0";

}
//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedzia³u <1,x>.
//Gdzie x podaje u¿ytkownik.
void task6()
{
	//std::cout << "1, 2, 3, 4, 5, 6\n";
	unsigned long long upperRange;
	std::cout << "Podaj górny zakres wiêkszy b¹dŸ równy 1\n";
	std::cin >> upperRange;
	/*
		std::cout << "1, ";
		if (upperRange > 1)
		{
			std::cout << "2, ";
			if (upperRange > 2)
			{
				std::cout << "3, ";
				if (upperRange > 3)
				{
					std::cout << "4, ";
					//...
				}
			}
		}
		std::cout << "\n";
		*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);

	std::cout << "\n";
}

//Napisz program, który policzy sumê cyfr 
// podanej przez u¿ytkownika liczby.
void task7()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;

	do
	{
		int digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma cyfr: " << sum << "\n";
}


void task8()
{
	int number;
	int sum = 0;
	int count = 0;
	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		count++;
	} while (number != 0);

	std::cout << "Suma wszystkich liczb: " << sum << "\n";
	std::cout << "Œrednia arytmetyczna wszystkich liczb: " << sum / count << "\n";
}
//Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej.Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task9()
{
	unsigned long long liczba;
	std::cout << "Podaj liczbe\n";
	std::cin >> liczba;
	unsigned long long ilosc = 1;
	unsigned long long powtorzenia = 0;
	do
	{
		ilosc = ilosc * 10;
		powtorzenia++;
	} while (!(liczba <= ilosc));

	std::cout << "liczba cyfr wynosi " << powtorzenia << "\n";
}
//Program odlicza od zadanej liczby do zera(np.„Start za 5… 4… 3…”) i koñczy z komunikatem „Start!”.
void task10()
{
	unsigned long long liczba;
	std::cout << "Podaj liczbe \n";
	std::cin >> liczba;

	std::cout << "Start za " << liczba <<" ,";
	do
	{
		-- liczba;
		std::cout << liczba << ", ";
	} while ( liczba != 0 );

	std::cout << "Start\n";
}
//Program wczytuje liczbê n i oblicza 2 ^ n w pêtli.Pyta, czy u¿ytkownik chce obliczyæ kolejn¹ potêgê.
void task11()
{
	int liczba, powtorzenia = 0, wynik = 2;
	std::cout << "Podaj liczbe \n";
	std::cin >> liczba;

	do
	{
		powtorzenia++;
		wynik = 2 * wynik;
	} while (!(liczba == powtorzenia));

	std::cout << "liczba wynosi " << wynik / 2;
}
//Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero.
void task12()
{
	int liczba;
	std::cout << "Podaj liczbe\n";
	std::cin >> liczba;
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task10();
}                     
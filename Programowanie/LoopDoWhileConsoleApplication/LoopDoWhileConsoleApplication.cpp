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

int main()
{
	task4();
}
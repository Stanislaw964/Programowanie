#include <iostream>
#include <iostream>

//Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
void task1()
{
	//wczytanie liczby
		//deklaracja zmiennych          1
		//pobranie liczby
			//informacja co chcemy      2
			//oczekiwanie na liczbê     3
	//wyœwietlenie na konsoli           4

	//1
	int numberFromUser; //number_from_user
	//2
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	//3
	std::cin >> numberFromUser;
	//4
	std::cout << "Poda³eœ " << numberFromUser << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumber;

	int avg;

	avg = (firstNumber + secondNumber) / 2;

	std::cout << "Wynik œredniej: " << avg << "\n";
}
//.Program obliczaj¹cy objêtoœæ sto¿ka.

void task3()
{
	int h, r;

	std::cout << "Podaj wyskoœæ sto¿ka w cm:\n";
	std::cin >> h;

	std::cout << "Podaj promieæ sto¿ka w cm:\n";
	std::cin >> r;

	int V;

	V = (3.14 / 3) * (r * r) * h;

	std::cout << "Wynik: " << V << " cm\n";
}
//.Program obliczaj¹cy pole ko³a.
void task4()
{
	int  r;

	std::cout << "Podaj promieñ ko³a w cm:\n";
	std::cin >> r;

	int p;

	p = 3.14 * (r * r);

	std::cout << "Wynik: " << p << " cm kwadratowych \n";
}
//.Program obliczaj¹cy wartoœæ wyra¿enia a ^ 2 + b ^ 2
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "wykonowanie dzia³ania a ^ 2 + b ^ 2\n";
	std::cout << "Podaj pierwsz¹ liczbê (a):\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drug¹ liczbê (b):\n";
	std::cin >> secondNumber;

	int w;

	w = firstNumber * firstNumber + secondNumber * secondNumber;

	std::cout << "Wynik dzia³ania (a ^ 2 + b ^ 2) wynosi : " << w << "\n";
}
//.Program obliczaj¹cy pole trójk¹ta o podstawie a i wysokoœci h
void task6()
{
	int a,h;
	std::cout << "Podaj podstawe trójkonta: \n";
    std::cin >> a;
	std::cout << "Podaj wysokoœæ trójkonta: \n";
    std::cin >> h;

	int p;

	p = a * h / 2;

    std::cout << "Pole trójkonta wynosi: " << p << "\n";
}
//*.Program obliczaj¹cy objêtoœæ kuli o promieniu r
void task7()
{
	int r;
	std::cout << "Podawj wartoœæ r:\n ";
	std::cin >> r;

	float v;

	v = 4.0 / 3.0 * 3.14 * (r * r * r);

	std::cout << "Objêtosc wynosi: " << v << "\n";
}
//* .Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
void task8()
{
	int a, b, h ;
	std::cout << "Podaj wartosæ a:\n";
	std::cin >> a;

	std::cout << "Podaj wartosæ b:\n";
	std::cin >> b;

	std::cout << "Podaj wysokoœæ:\n";
	std::cin >> h;

	float p;

	p = (a + b) * h / 2;

	std::cout << "Pole trapezu wynosi:" << p << "\n";

}
//* .Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task9()
{
	float l1, l2, l3;
	std::cout << "Podaj pierwsz¹ liczbe:\n";
	std::cin >> l1;

	std::cout << "Podaj druga liczbe:\n";
	std::cin >> l2;

	std::cout << "Podaj trzeci¹ liczbe liczbe:\n";
	std::cin >> l3;

	float w1, w2, w3;
	std::cout << "Podaj pierwsz¹ wagê:\n";
	std::cin >> w1;

	std::cout << "Podaj drug¹ wagê:\n";
	std::cin >> w2;

	std::cout << "Podaj trzeci¹ wagê:\n";
	std::cin >> w3;

	float s, sumaw;
	
	sumaw = w1 + w2 + w3;

	s = (l1 * w1 + l2 * w2 + l3 * w3) / sumaw;

	std::cout << "Œrednia wa¿ona wynosi: " << s << "\n";
}
//* .Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
void task10()
{
	int m;
	std::cout << "Podaj d³ugoœæ w metrach\n";
	std::cin >> m;

	int cm, mm;

	cm = m * 100;
	mm = m * 1000;

	std::cout << "Twoje mety w cm wynosz¹:" << cm << "\n";
	std::cout << "Twoje mety w mm wynosz¹:" << mm << "\n";
}
//* .Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany
void task11()
{
	int usd;
	
	std::cout << "Podaj ile masz kasy w USD:\n";
	std::cin >> usd;

	float pln;

	pln = 3.65 * usd;

	std::cout << "Masz " << pln << " w PLN\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task11();
}


/*

Zmienna - pewien obszar w pamiêci operacyjnej, w której mo¿na
w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów

int - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>

Nazwa zmiennej - nazwa obszaru w pamiêci, identyfikator
Warunki niezbêdne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* jeœli wiele s³ów to w miejscu spacji podkreœlenie lub zaczynaj¹c od drugiego
  s³owa piszemy je z du¿ej litery
* piszemy po angielsku
*/


/*.Program obliczaj¹cy objêtoœæ sto¿ka.
* .Program obliczaj¹cy pole ko³a.
* .Program obliczaj¹cy wartoœæ wyra¿enia a ^ 2 + b ^ 2
* .Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
* .Program obliczaj¹cy objêtoœæ kuli o promieniu r
* .Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
* .Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
* .Stwórz program, który pobiera od u¿ytkownika d³ugoœæ w metrach i przelicza j¹ na centymetry i milimetry, wyœwietlaj¹c wynik.
* .Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.*/
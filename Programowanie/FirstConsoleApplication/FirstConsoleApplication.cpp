#include <iostream>
#include <iostream>

//Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli
void task1()
{
	//wczytanie liczby
		//deklaracja zmiennych          1
		//pobranie liczby
			//informacja co chcemy      2
			//oczekiwanie na liczb�     3
	//wy�wietlenie na konsoli           4

	//1
	int numberFromUser; //number_from_user
	//2
	std::cout << "Podaj liczb� ca�kowit�:\n";
	//3
	std::cin >> numberFromUser;
	//4
	std::cout << "Poda�e� " << numberFromUser << "\n";
}

//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb.
void task2()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsz� liczb�:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drug� liczb�:\n";
	std::cin >> secondNumber;

	int avg;

	avg = (firstNumber + secondNumber) / 2;

	std::cout << "Wynik �redniej: " << avg << "\n";
}
//.Program obliczaj�cy obj�to�� sto�ka.

void task3()
{
	int h, r;

	std::cout << "Podaj wysko�� sto�ka w cm:\n";
	std::cin >> h;

	std::cout << "Podaj promie� sto�ka w cm:\n";
	std::cin >> r;

	int V;

	V = (3.14 / 3) * (r * r) * h;

	std::cout << "Wynik: " << V << " cm\n";
}
//.Program obliczaj�cy pole ko�a.
void task4()
{
	int  r;

	std::cout << "Podaj promie� ko�a w cm:\n";
	std::cin >> r;

	int p;

	p = 3.14 * (r * r);

	std::cout << "Wynik: " << p << " cm kwadratowych \n";
}
//.Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "wykonowanie dzia�ania a ^ 2 + b ^ 2\n";
	std::cout << "Podaj pierwsz� liczb� (a):\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drug� liczb� (b):\n";
	std::cin >> secondNumber;

	int w;

	w = firstNumber * firstNumber + secondNumber * secondNumber;

	std::cout << "Wynik dzia�ania (a ^ 2 + b ^ 2) wynosi : " << w << "\n";
}
//.Program obliczaj�cy pole tr�jk�ta o podstawie a i wysoko�ci h
void task6()
{
	int a,h;
	std::cout << "Podaj podstawe tr�jkonta: \n";
    std::cin >> a;
	std::cout << "Podaj wysoko�� tr�jkonta: \n";
    std::cin >> h;

	int p;

	p = a * h / 2;

    std::cout << "Pole tr�jkonta wynosi: " << p << "\n";
}
//*.Program obliczaj�cy obj�to�� kuli o promieniu r
void task7()
{
	int r;
	std::cout << "Podawj warto�� r:\n ";
	std::cin >> r;

	float v;

	v = 4.0 / 3.0 * 3.14 * (r * r * r);

	std::cout << "Obj�tosc wynosi: " << v << "\n";
}
//* .Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task8()
{
	int a, b, h ;
	std::cout << "Podaj wartos� a:\n";
	std::cin >> a;

	std::cout << "Podaj wartos� b:\n";
	std::cin >> b;

	std::cout << "Podaj wysoko��:\n";
	std::cin >> h;

	float p;

	p = (a + b) * h / 2;

	std::cout << "Pole trapezu wynosi:" << p << "\n";

}
//* .Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task9()
{
	float l1, l2, l3;
	std::cout << "Podaj pierwsz� liczbe:\n";
	std::cin >> l1;

	std::cout << "Podaj druga liczbe:\n";
	std::cin >> l2;

	std::cout << "Podaj trzeci� liczbe liczbe:\n";
	std::cin >> l3;

	float w1, w2, w3;
	std::cout << "Podaj pierwsz� wag�:\n";
	std::cin >> w1;

	std::cout << "Podaj drug� wag�:\n";
	std::cin >> w2;

	std::cout << "Podaj trzeci� wag�:\n";
	std::cin >> w3;

	float s, sumaw;
	
	sumaw = w1 + w2 + w3;

	s = (l1 * w1 + l2 * w2 + l3 * w3) / sumaw;

	std::cout << "�rednia wa�ona wynosi: " << s << "\n";
}
//* .Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.
void task10()
{
	int m;
	std::cout << "Podaj d�ugo�� w metrach\n";
	std::cin >> m;

	int cm, mm;

	cm = m * 100;
	mm = m * 1000;

	std::cout << "Twoje mety w cm wynosz�:" << cm << "\n";
	std::cout << "Twoje mety w mm wynosz�:" << mm << "\n";
}
//* .Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany
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

Zmienna - pewien obszar w pami�ci operacyjnej, w kt�rej mo�na
w danej chwili przechowa� tylko jedn� dan�.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielko�� obszaru pami�ci, interpretacja ci�gu bit�w

int - 4 bajtowa liczba ca�kowita ze znakiem <-2 147 483 648, 2 147 483 647>

Nazwa zmiennej - nazwa obszaru w pami�ci, identyfikator
Warunki niezb�dne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkre�lenie (pod�oga) _
* pierwszym znakiem nie mo�e by� cyfra
* unikalny w swoim zakresie widoczno�ci
* nie mo�e to by� s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w:
* nazwa zmiennej powinna oddawa� charakter przechowywanych danych
* je�li wiele s��w to w miejscu spacji podkre�lenie lub zaczynaj�c od drugiego
  s�owa piszemy je z du�ej litery
* piszemy po angielsku
*/


/*.Program obliczaj�cy obj�to�� sto�ka.
* .Program obliczaj�cy pole ko�a.
* .Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2
* .Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
* .Program obliczaj�cy obj�to�� kuli o promieniu r
* .Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
* .Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
* .Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.
* .Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.*/
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

int main()
{
   
    task4();
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
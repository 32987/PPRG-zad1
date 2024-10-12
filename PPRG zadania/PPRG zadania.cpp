#include <iostream>
using namespace std;

void zad1_1() {
    cout << "Aleksy\n32987\nPolsko-Japoñska Akademia Technik Komputerowych";
}

void zad1_2() {
	int liczba;
	cout << "Wpisz liczbê ca³kowit¹: ";
	cin >> liczba;
	if (liczba > 0) {
		cout << "Liczba " << liczba << " jest dodatnia.";
	}
	else if (liczba < 0) {
		cout << "Liczba " << liczba << " jest ujemna.";
	}
	else {
		cout << "Liczba jest równa 0.";
	}
}

void zad1_3() {
	int liczba;
	cout << "Wpisz liczbê ca³kowit¹: ";
	cin >> liczba;
	if (liczba == 0) {
		cout << "Liczba jest równa 0.";
	}
	else if (liczba % 2 == 0) {
		cout << "Liczba " << liczba << " jest parzysta.";
	}
	else {
		cout << "Liczba " << liczba << " jest nieparzysta.";
	}
}

void zad1_4() {
	int liczba1, liczba2, liczba3;
	cout << "Wpisz 3 liczby ca³kowite: ";
	cin >> liczba1 >> liczba2 >> liczba3;
	int liczby[3] = { liczba1, liczba2, liczba3 };
	int najwieksza = liczby[0];
	for (int i = 0; i < sizeof(liczby); i++) {
		if (liczby[i] > najwieksza) {
			najwieksza = liczby[i];
		}
	}
	cout << "Najwiêksza z liczb to: " << najwieksza;
}

void zad1_4_2() {
	int liczba1, liczba2, liczba3;
	cout << "Wpisz 3 liczby ca³kowite: ";
	cin >> liczba1 >> liczba2 >> liczba3;
	int max1 = max(liczba1, liczba2);
	cout << "Najwiêksza z liczb to: " << max(max1, liczba3);
}

void zad1_4_3() {
	int liczba1, liczba2, liczba3;
	cout << "Wpisz 3 liczby ca³kowite: ";
	cin >> liczba1 >> liczba2 >> liczba3;
	int najwieksza = liczba1;
	if (liczba2 > najwieksza) {
		najwieksza = liczba2;
	}
	if (liczba3 > najwieksza) {
		najwieksza = liczba3;
	}
	cout << "Najwiêksza z liczb to: " << najwieksza;
}

int main()
{
	zad1_1();
	zad1_2();
	zad1_3();
	zad1_4();
	zad1_4_2();
	zad1_4_3();
	return 0;
}
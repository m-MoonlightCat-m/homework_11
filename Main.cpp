#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string ch = "skjdfnhqasl sa;ldkj'a;lsnca1";
	int LenightCh = ch.length();

	cout << ch << "\n";
	cout << "Длина строки: " << ch.length() << "\n";
	cout << "Первый символ: " << ch[0] << "\n";
	cout << "Последний символ: " << ch[LenightCh - 1];
}
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string ch = "skjdfnhqasl sa;ldkj'a;lsnca1";
	int LenightCh = ch.length();

	cout << ch << "\n";
	cout << "����� ������: " << ch.length() << "\n";
	cout << "������ ������: " << ch[0] << "\n";
	cout << "��������� ������: " << ch[LenightCh - 1];
}
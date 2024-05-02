#include<iostream>
#include<conio.h>
using namespace std;

//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	int temperature;
	cout << "Введиде температуру воздуха"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // IF_ELSE

#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "Введите колво итераций"; cin >> n;
	while (i++ < n)
	{
		cout << i << "Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций"; cin >> n;
	while (n--)
	{
		cout << n << "Hello World" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

	char  key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}
#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIENGLE_1
//#define TRIENGLE_2
//#define TRIENGLE_3
//#define TRIENGLE_4
//#define ROMBUS_1
//#define ROMBUS_2
//#define ROMBUS_3

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "Введите количество звездочек: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "*  ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIENGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIENGLE_1

#ifdef TRIENGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIENGLE_2

#ifdef TRIENGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIENGLE_3

#ifdef TRIENGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIENGLE_4

#ifdef ROMBUS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";  cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)   cout << " ";  cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_1

#ifdef ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";  cout << "/";
		for (int j = 0; j < i*2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)   cout << " ";  cout << "\\";
		for (int j = (i + 1) * 2; j < n * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_2

#ifdef ROMBUS_3
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (n - i % n - 1 == j % n && i + j != n * 2 - 1)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif // ROMBUS_3

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
}
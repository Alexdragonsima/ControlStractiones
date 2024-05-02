#include<iostream>
#include<ctime>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE
//#define FOR_SINTAX
 
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
#define FIBONACCI_2
//#define SIMPLEX_NUMBERS
//#define MULTIPLICATION_TABLE
#define PIFAGOR

void main()
{
	setlocale(LC_ALL, "");

#ifdef WHILE
	int i = 0;
	int n;
	cout << "¬ведите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello";
		i++;
	}
#endif // WHILE

#ifdef FOR_SINTAX

	int n;
	cout << "¬ведите колво итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;



#endif // FOR_SINTAX

#ifdef FACTORIAL
	int n;
	cout << "¬ведите число: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	double N = 1;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i / 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

#ifdef SIMPLEX_NUMBERS
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	system("COLOR 0A");
	int simple_counter = 0;
	time_t start = time(NULL);
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i/2; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)simple_counter++;
			//cout <<(simple_counter++, i) << "\t";
	}
	time_t end = time(NULL);
	cout << endl;
	cout << "Amount of simplex numbers" << simple_counter << endl;
	cout << "Calculated by " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
#endif // SIMPLEX_NUMBERS

#ifdef MULTIPLICATION_TABLE
	for (int i = 0; i <= 10; i++)
	{
		cout << "“аблицаумножени€ на " << i << ":\n";
		for (int j = 0; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE


}
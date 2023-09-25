#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int n = 100;
	int a[n];

	int min = 105625620;
	double sec = 0, sec1 = 0;

		clock_t now = clock();
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 999 + 1;
			cout << a[i] << " ";
		}

		for (int i = 0; i < n; i++)
		{
			if (a[i] < min)
				min = a[i];
		}
		clock_t end = clock();
		sec = (double)(end - now) / CLOCKS_PER_SEC;
		cout << endl;
		cout << min << " " << sec << endl;

		min = 105625620;



}
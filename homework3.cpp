
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a[4], h, b, min = INT_MAX, max = -1, Res, x, j, pr;
	int n, i;

	cout << "Введите h: ";
	cin >> h;
	cout << "Введтие b: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;


	for (i = 1; i < 4; i++)
	{
		cout << "Enter a" << i  << ": ";
		cin >> a[i];
	}
	for (i = 1; i < 4; i++)
	{
		pr = 1;
		for (j = 1; j <= n; j++)
		{
			x = b + j * h;
			Res = 0.8 + 2 * sin(x) - 5.5 * pow(sin(a[i]), 2);
			pr *= abs(Res);
			if (abs(Res) > max)
				max = abs(Res);
		}
		cout << "При а1:  " << endl;
		cout << "Произведение: " << pr << endl;
		cout << " Максимальное y: " << max << endl;

	}
}
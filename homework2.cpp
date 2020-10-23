

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale (LC_ALL, "ru");
	double a[4], h, b,  min = INT_MAX, Res, x, j, pr = 1;
	int n, i;
	
	cout << "Введите h: ";
	cin >> h;
	cout << "Введтие b: ";
	cin >> b;
	cout << "Введите n: ";
	cin >> n;
	
	
	for (i = 1; i < 4; i++)
	{
		cout << "Enter a" << i + 1 << ": ";
		cin >> a[i];
	}
	for (i = 1; i < 4; i++)
	{
		for (j = 1; j <= n; j++)
		{
			x = b + j * h;
			Res = (1 - 5.7 * cos(a[i] - x)) / (2.6 + cos(a[i] + x) * cos(a[i] + x));
			pr *= abs(Res);
			if (Res < min)
				min = Res;
		}
		cout << "При а1:  " << endl;
		cout << "Произведение: " << pr << endl;
		cout << " Минимальное y: " << min << endl;

	}
}
#include <iostream>
#include <cmath>
using namespace std;


int main() {

	double a[4], h, b, max = -1, min = INT_MAX, Res, x, j;
	int n, i;

	cout << "Enter n: ";
	cin >> n;
	cout << "Enter h: ";
	cin >> h;
	cout << "Enter b: ";
	cin >> b;
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
			if (a >= 0)
				Res = x * cos(a[i] - x + 1);
			else
				Res = 2 * cos(a[i] + x);
			if (abs(Res) < min)
				min = abs(Res);
			if (abs(Res) > max)
				max = abs(Res);
		}
	}
	cout << " MAX: " << max;
	cout << " MIN: " << min;
	return 0;
}
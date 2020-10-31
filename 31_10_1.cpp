#include <iostream>

int main()
{
	double h, b, n, fi = 1, psi = 0, x, y;
	double a[3];
	std::cin >> h >> b >> n;
	for (int i = 0; i < 3; i++)
		std::cin >> a[i];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			x = b + h * j;
			if (a < 0)
				y = sin(a[i] + x) * sin(a[i] + x);
			else
				y = sin(1 + a[i] * x  - x * x);
			fi *= y;
			psi += abs(y);
		}
		std::cout << "For a = " << a[i] << ": fi = " << fi << " psi = " << psi << std::endl;
	}
}

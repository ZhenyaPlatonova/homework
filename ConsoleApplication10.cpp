#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int arr[100000];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	a -= 1; b -= 1; c -= 1; d -= 1;
	for (int i = a; i <= (a + b) / 2; i++)
	{
		swap(arr[i], arr[b - (i - a)]);
	}
	for (int i = c; i <= (c + d) / 2; i++)
	{
		swap(arr[i], arr[d -( i - c)]);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
}

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double sum = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            sum += a[i];
            k += 1;
        }
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum / k;
}

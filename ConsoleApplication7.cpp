#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, o = 0;
    cin >> a >> b >> c >> d;
    for (int i = 10000; i <= 99999; i++)
        if (i % a == b && i % c == d)
        {
            cout << i << ' ';
            o = 1;
        }
    if (o == 0)
        cout << -1;
}

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    bool flag = true;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "prime";
    else
        cout << "composite";
}
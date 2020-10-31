#include <iostream>

int main()
{
    double a[10000], b[10000], eps;
    int n;
    std::cin >> a[0] >> b[0] >> n >> eps;
    for (int i = 1; i < n; i++)
    {
        a[i] = sqrt(2 + sin(a[i - 1] + b[i - 1])) + sqrt(2 - cos(a[i - 1] + b[i - 1]));
        if (a[i - 1] < 0)
            b[i] = sin(a[i - 1] + b[i - 1]) * sin(a[i - 1] + b[i - 1]);
        else
            b[i] = sin(1 + a[i - 1] * b[i - 1] - b[i - 1] * b[i - 1]);
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (b[j] / (1 + a[i] * a[i]) < eps)
            {
                std::cout << a[i] << " ";
                break;
            }
    }
}



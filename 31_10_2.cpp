#include <iostream>

int main()
{
    int n, m, fi = 0;
    double h, z[10000], z1[10000];
    std::cin >> z[0] >> z[1] >> n >> m >> h;
    for (int i = 2; i < n; i++)
    {
        if (z[i - 2] < 0)
            z[i] = sin(z[i - 2] + z[i - 1]) * sin(z[i - 2] + z[i - 1]);
        else
            z[i] = sin(1 + z[i - 2] * z[i - 1] - z[i - 1] * z[i - 1]);
        z1[i] = (z[i] + 1,5) * (z[i] + 1,5);
    }
    for (int i = 0; i < n; i++)
        std::cout << z1[i] << " ";
    for (int j = 1; j <= m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if ((z1[i] >= ((j - 1) * h)) && (z1[i] < (j * h)))
                fi += 1;
        }
        std::cout << "For j = " << j << " Fi = " << fi << std::endl;
        fi = 0;
    }
}


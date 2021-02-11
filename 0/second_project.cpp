#include <iostream>

int fact(int n)
{
    int i;
    int r;

    r = 1;

    for (i = 1; i <= n; i++)
    {
        r = r * i;

    }

    return r;
}

int main()
{
    int n;
    
    std::cin >> n;
    int r = fact(n);
    std::cout << r  << std:: endl;
}


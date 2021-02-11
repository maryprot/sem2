#include <iostream>

int fact(int i)
{
    if (i == 0) return 1;
    else return i * fact(i - 1);
}

int main()
{
    int n;
    
    std::cin >> n;
    int r = fact(n);
    std::cout << r  << std:: endl;
}


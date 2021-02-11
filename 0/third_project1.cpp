#include <iostream>

int fib(int i)
{
    if (i == 2) return 1;
    if (i == 1) return 0;
    else return (fib(i - 1) + fib(i - 2));
}

int main()
{
    int n;
    
    std::cin >> n;
    int r = fib(n);
    std::cout << r  << std:: endl;
}


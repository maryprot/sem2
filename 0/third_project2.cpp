#include <iostream>

int fibs[1000000] = { 0 };

int fib(int n)
{
    if (n == 2) return 1;
    if (n == 1) return 0;
    if(fibs[n] == 0)
        fibs[n] = fib(n - 1) + fib(n - 2);
    return fibs[n];
}

int main()
{
    int n;   
    std::cin >> n;
    int r = fib(n);
    std::cout << r  << std:: endl;
}


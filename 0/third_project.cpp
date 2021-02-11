#include <iostream>

int fib(int n)
{
    int f1 = 0;
    int f2 = 1;
    int fn;


    for (int i = 0; i <= (n - 2); i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        
    }
    return f1;
    
}

int main()
{
    int n;
    
    std::cin >> n;
    fib(n);
    std::cout << fib(n) << std::endl;
}


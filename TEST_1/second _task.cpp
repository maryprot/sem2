#include <iostream>
#include <iomanip>

int main()
{
    double  a;
    double  sum = 0;
    int  counter;
    std::cin >> counter;

    for (int i = 0; i < counter; i++) {
        std::cin >> a;
        sum += a;
    }

    std::cout << std::fixed << std::setprecision(10);
    std::cout << sum / counter;

    return 0;
}
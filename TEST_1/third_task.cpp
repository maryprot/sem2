﻿#include <iostream>
#include <cmath>


void BubbleSort(int* array, int N)
{
    int t;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (array[j] > array[j + 1]) {
                t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
        }
    }
    return;
}


int main()
{
    int N,p,j;
    std:: cin >> N;
    

    int* a = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> a[i];

    BubbleSort(a, N);
    int x = a[N - 1] - a[0];

    for (int i = 0; i < N; i++) {
        for (int k = (N-1); k >= 0; i--) {
            if ((a[k] - a[i]) <= x) and ((a[k] - a[i])>=0){
                x = a[k] - a[i];
                p = i;
                j = k;

            }
        }
    }
    
    std::cout << p << j;
    return 0;
}



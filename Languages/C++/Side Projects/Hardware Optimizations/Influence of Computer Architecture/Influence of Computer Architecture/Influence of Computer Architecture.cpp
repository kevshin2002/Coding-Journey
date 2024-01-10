#include <iostream>
#include <chrono>

int main()
{
    const int n = 20000;
    int** array = new int* [n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[n];
    }

    const auto start1 = std::chrono::steady_clock::now();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] += j;
        }
    }
    const auto end1 = std::chrono::steady_clock::now();

    const auto start2 = std::chrono::steady_clock::now();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            array[j][i] += j;
        }
    }
    const auto end2 = std::chrono::steady_clock::now();

    const std::chrono::duration<double> elapsed_seconds1 = end1 - start1;
    const std::chrono::duration<double> elapsed_seconds2 = end2 - start2;

    std::cout << "Time for contiguous loop: " << elapsed_seconds1.count() << " seconds\n";
    std::cout << "Time for column loop: " << elapsed_seconds2.count() << " seconds\n";

    // Free the allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

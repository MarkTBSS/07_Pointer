/* void change_to_zero (int* temp) {
    *temp = 0;
} */

#include <iostream>
#include <cmath>

void sum(int *a, int *b)
{
    *a = *a + *b;
}

void abs(int *a, int *b)
{
    *b = std::abs(*a - *b);
}

int main() {
    int* a = new int;
    *a = 4;
    int* b = new int;
    *b = 5;
    int* temp = new int;
    *temp = *a;

    sum(a, b);
    abs(temp, b);

    std::cout << "Result after sum: " << *a << std::endl;
    std::cout << "Result after abs: " << *b << std::endl;

    delete a;
    delete b;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int array[100];
    std::fill_n(array, 100, -1);
    cout << array[100];
    return 0;
}
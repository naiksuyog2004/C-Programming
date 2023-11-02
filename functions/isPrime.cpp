#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0; // not prime
        }
    }
    return 1; // prime
}
int main()
{
    int num;
    cin >> num;
    int ans = isPrime(num);

    if (ans)
    {
        cout << "This is prime number." << endl;
    }
    else
    {
        cout << "This is not a prime number." << endl;
    }

    return 0;
}
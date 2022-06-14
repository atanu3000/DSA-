#include <iostream>
using namespace std;

int countWays(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }

    int recCall1 = countWays(n - 1);
    int recCall2 = countWays(n - 2);

    int smallCal = recCall1 + recCall2;
    return smallCal;
}

int main()
{
    int n;
    cout << "Enter Nth term: ";
    cin >> n;

    cout << "No. of ways: " << countWays(n);
}
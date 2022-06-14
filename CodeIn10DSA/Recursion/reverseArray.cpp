#include <iostream>
using namespace std;

int reverseArray(int array[], int start, int end)
{
    if (start == end)
    {
        return 0;
    }
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    return reverseArray(array, start + 1, end - 1);
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    reverseArray(num, 0, n - 1);

    return 0;
}
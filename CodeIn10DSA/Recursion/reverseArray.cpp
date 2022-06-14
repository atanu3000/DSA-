#include <iostream>
using namespace std;

int reverseArray(int array[],int n, int start, int end)
{
	
    if (start >= end)
    {
        for(int i=0; i<n; i++){
        	cout << array[i] << " ";
		}
        cout << endl;
    }
    else{
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        return reverseArray(array, n, start + 1, end - 1);
    }
}

int main()
{
    int t;
    cout << "test cases: ";
    cin >> t;
    while(t--)
    {
        int n;
        cout << "Enter array size: ";
        cin >> n;
        int num[n];

        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        reverseArray(num, n, 0, n - 1);
    }

    return 0;
}

#include <iostream>
using namespace std;

int maxFreq(int *arr, int n)
{
    // using moore's voting algorithm
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    return arr[res];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int freq = maxFreq(arr, n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == freq)
            {
                count++;
            }
        }
        cout << count << endl;
        ;
        return 0;
        // This code is contributed by Ashish Kumar Shakya
    }

    return 0;
}

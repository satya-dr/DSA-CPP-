// Find the total number of pairs in the array whose sum is equal to the given value X.
#include <iostream>
using namespace std;
int main()
{
    int arr[]{4, 3, 6, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 7;
    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; i++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                pairs++;
            }
        }
    }

    cout << pairs;
}
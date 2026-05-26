// Maximum is pushed at last by adjacent comparision
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements in an array  ";
    cin >> n;
    int arr[n];
    for (int l = 0; l < n; l++)
    {
        cout << "Enter " << l << " element of array" << endl;
        cin >> arr[l];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {  int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
           
        }

        for (int h = 0; h < n; h++)
        {
            cout << arr[h] << "  ";
        }
        cout<<endl;
    }

    return 0;
}
// adjacent elements are adjusted
// time complexity=O(N^2)..worst or average case
// but if array is already sorted then time we can break after 1 iteration so ..
//  best time complexity for it is O(N).